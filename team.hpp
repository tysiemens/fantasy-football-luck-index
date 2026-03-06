#ifndef TEAM_HPP
#define TEAM_HPP

#include <vector>
#include <string>


class Team{

private:



public:

    std::string name;
    std::vector<double> scores;
    std::vector<std::string> opponents;
    std::vector<bool> wins;

    Team(std::string name, std::vector<double> scores, std::vector<std::string> opponents, std::vector<bool> wins);

    double five_wk_avg(int week);

};


#endif