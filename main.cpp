#include "team.hpp"
#include "luckindex.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

int main(){

    Team Hoekstra(
        "hoekstra", 
        {145.56, 80.92, 150.52, 153.66, 146.82, 129.7, 141.66, 121.42, 124.82, 154.34, 114.08, 153.82, 100.22},
        {"siemens", "uelandj", "kerlin", "rhodes", "mudhas", "wherley", "uelandl", "mcgraw", "thielmann", "siemens", "uelandj", "kerlin", "rhodes"},
        {true, false, true, true, true, false, true, true, false, true, true, true, false}
    );

    Team Kerlin(
        "kerlin", 
        {84.28, 102.5, 79.72, 89.96, 85.5, 99.44, 94.52, 88.54, 129.84, 88.3, 83.9, 74.72, 76.82},
        {"wherley", "uelandl", "hoekstra", "thielmann", "siemens", "uelandj", "mcgraw", "rhodes", "mudhas", "wherley", "uelandl", "hoekstra", "thielmann"},
        {false, false, false, false, false, false, false, false, true, false, false, false, false}
    );    

    Team McGraw(
        "mcgraw", 
        {78.24, 135.18, 124.42, 103.28, 132.28, 146.48, 94.88, 118.78, 178.5, 136.3, 103.22, 132.96, 102.44},
        {"thielmann", "mudhas", "siemens", "wherley", "uelandj", "uelandl", "kerlin", "hoekstra", "rhodes", "thielmann", "mudhas", "siemens", "wherley"},
        {false, true, true, false, false, true, true, false, true, false, false, true, false}
    );

    Team Mudhas(
        "mudhas", 
        {107.48, 127.18, 151.42, 155.88, 133.32, 100.36, 117.06, 102.6, 125.12, 80.84, 136.2, 154.22, 101.62},
        {"rhodes", "mcgraw", "wherley", "uelandl", "hoekstra", "thielmann", "siemens", "uelandj", "kerlin", "rhodes", "mcgraw", "wherley", "uelandl"},
        {false, false, true, true, false, false, true, false, false, false, true, true, false}
    );

    Team Rhodes(
        "rhodes", 
        {127.08, 115.74, 130.54, 127.3, 83.3, 89.92, 103.64, 125.56, 131.8, 136.42, 97.6, 159.56, 134.5},
        {"mudhas", "wherley", "uelandl", "hoekstra", "thielmann", "siemens", "uelandj", "kerlin", "mcgraw", "mudhas", "wherley", "uelandl", "hoekstra"},
        {true, false, true, false, false, false, false, true, false, true, false, true, true}
    );

    Team Siemens(
        "siemens", 
        {109.26, 117.3, 106.82, 100.68, 109.2, 123.74, 93.16, 110.82, 114.26, 82.64, 125.82, 109.52, 66.64},
        {"hoekstra", "thielmann", "mcgraw", "uelandj", "kerlin", "rhodes", "mudhas", "wherley", "uelandl", "hoekstra", "thielmann", "mcgraw", "uelandj"},
        {false, false, false, false, true, true, false, false, true, false, false, false, false}
    );

    Team Thielmann(
        "thielmann", 
        {134.02, 160.4, 109.62, 117.42, 143.44, 102.54, 144.34, 161.88, 132.46, 140.6, 129.74, 84.76, 127.48},
        {"mcgraw", "siemens", "uelandj", "kerlin", "rhodes", "mudhas", "wherley", "uelandl", "hoekstra", "mcgraw", "siemens", "uelandj", "kerlin"},
        {true, true, false, true, true, true, false, true, true, true, true, false, true}
    );

    Team UelandJ(
        "uelandj", 
        {82.22, 97.44, 118.88, 117.58, 138.02, 159.62, 118.24, 146.08, 105.7, 177.0, 109.64, 106.16, 132.94},
        {"uelandl", "hoekstra", "thielmann", "siemens", "mcgraw", "kerlin", "rhodes", "mudhas", "wherley", "uelandl", "hoekstra", "thielmann", "siemens"},
        {false, true, true, true, true, true, true, true, true, true, false, true, true}
    );

    Team UelandL(
        "uelandl", 
        {99.82, 111.68, 95.3, 108.72, 115.04, 81.68, 112.82, 140.78, 101.98, 96.8, 107.16, 120.54, 111.42},
        {"uelandj", "kerlin", "rhodes", "mudhas", "wherley", "mcgraw", "hoekstra", "thielmann", "siemens", "uelandj", "kerlin", "rhodes", "mudhas"},
        {true, true, false, false, true, false, false, false, false, false, true, false, true}
    );

    Team Wherley(
        "wherley", 
        {126.02, 125.94, 133.14, 155.3, 111.42, 178.68, 168.44, 121.86, 105.6, 138.88, 122.04, 108.48, 163.54},
        {"kerlin", "rhodes", "mudhas", "mcgraw", "uelandl", "hoekstra", "thielmann", "siemens", "uelandj", "kerlin", "rhodes", "mudhas", "mcgraw"},
        {true, true, false, true, false, true, true, true, false, true, true, false, true}
    );

    TeamMap teams;
    teams["hoekstra"] = &Hoekstra;
    teams["kerlin"] = &Kerlin;
    teams["mcgraw"] = &McGraw;
    teams["mudhas"] = &Mudhas;
    teams["rhodes"] = &Rhodes;
    teams["siemens"] = &Siemens;
    teams["thielmann"] = &Thielmann;
    teams["uelandj"] = &UelandJ;
    teams["uelandl"] = &UelandL;
    teams["wherley"] = &Wherley;

    std::cout << "J Ueland: " << LuckIndex(UelandJ, teams) << "\n";
    std::cout << "L Ueland: " << LuckIndex(UelandL, teams) << "\n";
    std::cout << "Hoekstra: " << LuckIndex(Hoekstra, teams) << "\n";
    std::cout << "Thielmann: " << LuckIndex(Thielmann, teams) << "\n";
    std::cout << "Wherley: " << LuckIndex(Wherley, teams) << "\n";
    std::cout << "Kerlin: " << LuckIndex(Kerlin, teams) << "\n";
    std::cout << "Siemens: " << LuckIndex(Siemens, teams) << "\n";
    std::cout << "McGraw: " << LuckIndex(McGraw, teams) << "\n";
    std::cout << "Rhodes: " << LuckIndex(Rhodes, teams) << "\n";
    std::cout << "Mudhas: " << LuckIndex(Mudhas, teams) << "\n";

    return 0;
}