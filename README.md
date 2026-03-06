# Fantasy Football Luck Index

A function that takes in league fantasy football data and produces a Luck Score for each team

---

## Overview

Using a team's "points for" and "points against" each week and comparing it to the rest of the league, the function calculates "luck" based on factors outside of the team's control. The goal is to exemplify which teams had more or fewer projected wins than in actuality, and how significant this difference is.

---

## Introduction

Fantasy football is an online simulation game where individuals, usually friends, act as general managers over a custom-drafted team of real NFL players. Each week, an individual gains points depending on how well their players perform in real life. Each week, individuals are randomly matched up against an opponent, and whoever outscores the opponent receives a win for the week (and a loss for the other individual). It's a highly popular activity that millions of friends and family partake in every NFL season. However, some of the scoring mechanics are flawed. Most notably, while you have full control over your own team, you have zero control over your opponent's success (you can't "play defense"). This results (in my experience) in many individuals accusing others of being "lucky" or "unlucky". This may look like a "below-average opponent" outscoring their projection and beating an "above-average opponent" who put up a decent score line. Now the "above-average opponent" mourns how unlucky they are because they would've beaten the "below-average opponent" any other week. The same applies when a "below-average opponent" puts up a bad score, yet still manages a win against an "above-average opponent" having an "off-week", and many accuse the "below-average opponent" of getting a "lucky win" when they probably should've lost. Ultimately, these are justified claims as some of these outcomes ARE out of people's control and can alter the outcome of final season standings. Most understand that luck is just part of the game, but it would still be nice to justify whether a team really is "unlucky" or if it's just negativity bias making you believe the world is against you when it's really not. That's why I created a "Luck Index" to give a relatively-objective statistcal measuring of "luck".

---

 ## Explanation

Luck is defined as a "chance occurrence" that acts either favorably or unfavorably for a person's situation. The key is that you are always in control of your own team, but never in control of how your opponent plays. In other words, if your team plays poorly, that's not unlucky; that's your fault. But if your opponent plays bad, that's lucky, becuase you had no control over your opponent's performance. The other key thing to note is that in fantasy football, the only stat that ultimately matters is your win-loss record. Your record decides who loses the league, who wins the league, and where you're put in the playoff bracket. No one cares how many "points-for" you have, only that you have the most wins. So the luck index must measure how an opponent's performance relative to their average affected another team's win total.

Luck points are accumulated in every game throughout the season, positive points if you were lucky, negative points if you were unlucky, and zero points if you were neither. Your accumulated score over the season is your "luck index," and depending on the sign tells you your overall "luckiness," with the magnitude telling you the scale of luck. 

Whether you accumulate luck points depends on how the outcome of the matchup differed from the expected outcome. The expected outcome of a game is your score from that week vs the 5-week average (+/- 2 weeks) of your opponent. Again, this is because you are responsible for your own team's performance, and a bad performance is not unlucky, but a reflection of your incompetence. Your oppnent's score is a running average because it shows the current expected points for them to drop regardless of a "bad off day", or a lucky high-scoring week. Note that there is not 1, but 2 fixed scores for any match-up: your expected score based on your opponent's average, and your opponent's expected score based on your average. 

Now we have an "expected score" for each matchup a team experiences in a season. Because wins are the most important condition, any "expected win/loss" that matches an "actual win/loss" is counted as zero luck points. It doesn't matter how much you win or lose by; if you were expected to win and you did, it's not lucky. Conversely, if you were expected to lose and you did, that's not unlucky, that's expected. It's when you "should have won" but didn't that you're unlucky, and when you "should have lost" but won that you're lucky, and therefore accumulate luck points. The value of these luck points is equivalent to the margin by which you were expected to win or lose. If you were expected to win by a large margin and lost, you accumulate a large magnitude of negative luck points. If you were expected to lose by a small margin and won, you accumulate a small magnitude of positive luck points. Add up the luck points throughout a season, and you have your total "luck index value."

Below are a few examples to demonstrate

---

## Examples

### Example 1 ("normal matchup"):

Team X scored 110 points with a running 5-week-average score of ~107. 

Team Y scored 120 points with a 5-week-average of ~122 points. 


Actual score: 110 - 120, Y wins


#### Team X luck:

Expected score: 110 - ~122, Y wins

Expected to lose, did lose, no luck involved (+0)


#### Team Y luck:

Expected score: ~107 - 120, Y wins

Expected to win, did win, no luck involved (+0)


### Example 2 ("unlucky matchup"):


Team X scored 128 points with a 5-week-average of ~110 points. 

Team Y scored 120 points with a 5-week-average of ~122 points. 


Actual score: 128 - 120, X wins


#### Team X luck:

Expected score: 128 - ~122, X wins

Expected to win, did win, no luck involved (+0)


#### Team Y luck:

Expected score: ~110 - 120, Y wins

Expected to win by 10, did NOT win, unlucky (-10)


*Note how Team X was not punished for a high-scoring week, and "earned his win" rightfully. Team Y, however, got unlucky facing Team X on a good week*

### Example 3 ("lucky matchup"):

Team X scored 105 points with a 5-week-average of ~120 points. 

Team Y scored 110 points with a 5-week-average of ~108 points. 


Actual score: 105 - 110, Y wins


#### Team X luck:

Expected score: 105 - ~108, Y wins

Expected to lose, did lose, no luck involved (+0)


#### Team Y luck:

Expected score: ~120 - 110, X wins

Expected to lose by 10, did NOT lose, lucky (+10)


*Note how Team X was not rewarded for a low-scoring week, and rightfully lost. Team Y, however, got lucky facing Team X on a bad week*

---

## Features

- Custom function
- Functional programming
- Functional decomposition
  
---

## Dataset

Source: ESPN Fantasy Football (manual input week-by-week stats)

---
