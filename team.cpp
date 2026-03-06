#include "team.hpp"
#include <vector>
#include <string>


Team::Team(std::string n, std::vector<double> s, std::vector<std::string> o, std::vector<bool> w) : name(n), scores(s), opponents(o), wins(w) {}

double Team::five_wk_avg(int week){

    double avg{}; 

    if(week == 0){
        avg = (scores.at(0) + scores.at(1) + scores.at(2)) / 3;
    }
    else if(week == 1){
        avg = (scores.at(0) + scores.at(1) + scores.at(2) + scores.at(3)) / 4;
    }
    else if(week > 1 && week < 11){
        avg = (scores.at(week-2) + scores.at(week-1) + scores.at(week) + scores.at(week+1) + scores.at(week+2)) / 5;
    }
    else if(week == 11){
        avg = ((scores.at(9) + scores.at(10) + scores.at(11)) + scores.at(12)) / 4;
    }
    else if(week == 12){
        avg = (scores.at(10) + scores.at(11) + scores.at(12)) / 3;
    }

    return avg;

}