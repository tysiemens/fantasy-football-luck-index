#ifndef LUCKINDEX_HPP
#define LUCKINDEX_HPP

#include <vector>
#include <string>
#include <unordered_map>
#include "team.hpp"

using TeamMap = std::unordered_map<std::string, Team*>;

double LuckIndex(const Team& team, const TeamMap& teams);
// std::vector<double> LuckIndex(const Team& team, const TeamMap& teams);


#endif