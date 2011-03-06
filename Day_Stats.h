#ifndef DAY_STATS_H
#define DAY_STATS_H

class Day_info {
public:
    std::string location;
    std::string weather;
    std::string time;
    int random;
    int pos;
    int weath;
    int tim;
    char f;

    void initial_stats()
    {
        f = 178;

        weath = 1; // Weather system;

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

        tim = 1; // Time of day

        switch(tim){
        case 1:
            time = "Morning";
            break;
        case 2:
            time = "Midday";
            break;
        case 4:
            time = "Afternoon";
            break;
        case 5:
            time = "Midnight";
            break;
        default:
            std::cout << "Time Error.....";
        }
    }
    void show_day_ui()
    {
        std::cout << "\t  " << f << " " << "Location: " << location;
        std::cout << " | " << "Weather: " << weather;
        std::cout << " | " << "Time: " << time << " " << f;
    }
};

#endif // DAY_STATS_H
