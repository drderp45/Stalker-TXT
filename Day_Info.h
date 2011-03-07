#ifndef DAY_INFO_H
#define DAY_INFO_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

class Day_info {
public:
    std::string location;
    std::string weather;
    std::string time_s;
    int random;
    int pos;
    int weath;
    int tim;
    int day;
    char f;

    void set_random()
    {
        srand (time(NULL));
        random = rand() % 4 + 1;
    }

    void initial_stats()
    {
        f = 178;

        weath = random; // Weather system;

        switch(weath){
        case 1:
            weather = "Clear Sky";
            break;
        case 2:
            weather = "Overcast";
            break;
        case 3:
            weather = "Raining";
            break;
        case 4:
            weather = "Storm";
            break;
        default:
            std::cout << "Weather Error.....";
        }

        tim = day; // Time of day

        switch(tim){
        case 1:
            time_s = "Morning";
            break;
        case 2:
            time_s = "Midday";
            break;
        case 3:
            time_s = "Afternoon";
            break;
        case 4:
            time_s = "Midnight";
            break;
        default:
            std::cout << "Time Error.....";
        }
    }
    void show_day_ui()
    {
        std::cout << "\t  " << f << " " << "Location: " << location;
        std::cout << " | " << "Weather: " << weather;
        std::cout << " | " << "Time: " << time_s << " " << f;
    }
};

#endif // DAY_INFO_H
