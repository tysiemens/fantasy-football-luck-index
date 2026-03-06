#include "team.hpp"
#include "luckindex.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

double LuckIndex(const Team& team, const TeamMap& teams){

    double index{0};
    std::vector<double> exp_scores_against;
    std::vector<bool> exp_wins;

    // create a vector of opponent "expected scores against"
    for(size_t i{0}; i < 13; i++){
        std::string opponent = team.opponents.at(i);
        Team* opponent_class = teams.at(opponent);
        exp_scores_against.push_back(opponent_class->five_wk_avg(i));
    }

    // create a vector of "expected wins" based on "expected scores against"
    for(size_t i{0}; i < 13; i++){
        if(team.scores.at(i) > exp_scores_against.at(i)){
            exp_wins.push_back(true);
        }
        else{
            exp_wins.push_back(false);
        }
    }

    // find where "expected wins" differ from "wins"
    for(size_t i{0}; i < 13; i++){
        if(team.wins.at(i) != exp_wins.at(i)){
            index += (exp_scores_against.at(i) - team.scores.at(i));
        }
    }

    return index;
}



