#ifndef CHARACTER_STATS_H
#define CHARACTER_STATS_H

class Character {
public:
    int health;
    int stamina;
    int radiation;
    int money;
    float weight;
    char h,s,r,m,b;
    void initial_stats()
    {
        h = 003;
        s = 076;
        r = 041;
        m = 044;
        b = 178;
        health = 10;
        stamina = 10;
        radiation = 5;
        weight = 50.0;
        money = 0;
    }
    void show_char_ui()
    {
        std::cout << "\t\t" << b << " "<< "HP: " << health;
        std::cout << " | ";
        std::cout << "STM: " << stamina;
        std::cout << " | ";
        std::cout << "RAD: " << radiation;
        std::cout << " | ";
        std::cout << "WKG: " << weight << "kg";
        std::cout << " | ";
        std::cout << m << money << " " << b;
    }

};

#endif // CHARACTER_STATS_H
