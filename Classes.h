#ifndef CLASSES_H
#define CLASSES_H

#endif // CLASSES_H


void ClearScreen()
{
    system("cls");
}

void help()
{
    std::cout << "Number 1 = North\n";
    std::cout << "Number 2 = South\n";
    std::cout << "Number 3 = East\n";
    std::cout << "Number 4 = West\n";
}

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

class c_maps {
public:
    int p,i,o,g,h;
    char road1[4][4];
    char road2[4][4];
    char road3[4][4];
    char road4[4][4];
    char lane_1[4][4];
    char c_warehouse[4][4];
    char c_main[4][4];
    char c_lane[4][4];
    char bridge[4][4];

    void show_roads()
    {
        std::cout << "\n\n\n";
        std::cout << "\t\t\t\t     N\n";

        for(i=1;i<4;i++) // bridge
        {

            std::cout << "\t\t\t\t    ";
            for(p=1;p<4;p++)
            {

                std::cout << bridge[i][p];
                if(p==3)
                    std::cout << "\n";

            }
        }


        std::cout << "\t\t\t\t    " << road4[1][1] << road4[1][2] << road4[1][3];
        std::cout << "   " << c_warehouse[1][1] << c_warehouse[1][2] << c_warehouse[1][3] << "\n";

        std::cout << "\t\t\t\t    " << road4[2][1] << road4[2][2] << road4[2][3];
        std::cout << lane_1[2][1] << lane_1[2][2] << lane_1[2][3];
        std::cout << c_warehouse[2][1] << c_warehouse[2][2] << c_warehouse[2][3] << "\n";

        std::cout << "\t\t\t\t    " << road4[3][1] << road4[3][2] << road4[3][3];
        std::cout << "   " << c_warehouse[3][1] << c_warehouse[3][2] << c_warehouse[3][3] << "\n";

        for(i=1;i<4;i++) // Road3
        {

            std::cout << "\t\t\t\t    ";
            for(p=1;p<4;p++)
            {

                std::cout << road3[i][p];
                if(p==3)
                    std::cout << "\n";

            }
        }

        //Road 2
        std::cout << "\t\t\t      " << c_main[1][1] << c_main[1][2] << c_main[1][3];
        std::cout << "   ";
        std::cout << road2[1][1] << road2[1][2] << road2[1][3] << "\n";

        std::cout << "\t\t\t      " << c_main[2][1] << c_main[2][2] << c_main[2][3];
        std::cout << c_lane[1][1] << c_lane[1][2] << c_lane[1][3];
        std::cout << road2[2][1] << road2[2][2] << road2[2][3] << "\n";

        std::cout << "\t\t\t      " << c_main[3][1] << c_main[3][2] << c_main[3][3];
        std::cout << "   ";
        std::cout << road2[3][1] << road2[3][2] << road2[3][3] << "\n";

        for(i=1;i<4;i++) // Road1
        {

            std::cout << "\t\t\t\t    ";
            for(p=1;p<4;p++)
            {

                std::cout << road1[i][p];
                if(p==3)
                    std::cout << "\n";

            }
        }

    }

    void set_cordon_roads()
    {
        h = 176;
        g = 219;
        for(i=0;i<4;i++)
        {
            for(p=0;p<4;p++)
            {
                bridge[i][p] = g;
                if(o==9)
                    bridge[i][p] = h;

                c_warehouse[i][p] = g;
                if(o==8)
                    c_warehouse[i][p] = h;

                lane_1[i][p] = g;
                if(o==7)
                    lane_1[i][p] = h;

                road4[i][p] = g;
                if(o==4)
                   road4[i][p] = h;

                road3[i][p] = g;
                if(o==3)
                    road3[i][p] = h;

                road2[i][p] = g;
                if(o==2)
                    road2[i][p] = h;

                road1[i][p] = g;
                if(o==1)
                    road1[i][p] = h;

                c_lane[i][p] = g;
                if(o==5)
                    c_lane[i][p] = h;

                c_main[i][p] = g;
                if(o==6)
                    c_main[i][p] = h;

            }
        }
    }

};


void c_warehouse(Character, Day_info, c_maps);
void c_lane1(Character, Day_info, c_maps);
void c_lane(Character, Day_info, c_maps);
void c_road_sect_1(Character, Day_info, c_maps);
void c_road_sect_2(Character, Day_info, c_maps);
void c_road_sect_3(Character, Day_info, c_maps);
void c_road_sect_4(Character, Day_info, c_maps);
void c_bridge(Character, Day_info, c_maps);


void Cordon(Character &cordon, Day_info &cor, c_maps &c_mp)
{
    std::string option;

    do{

        ClearScreen();

        cor.location = "Stalker Camp";

        c_mp.o = 6;
        c_mp.set_cordon_roads();

        cor.show_day_ui();

        c_mp.show_roads();

        std::string option;

        for(int i=0;i<5;i++) { std::cout << "\n"; };

        std::cout << "\t\tNorth: Fellow Stalkers\t";
        std::cout << "South: Old House\n";
        std::cout << "\t\tEast: Road Section 2\t";
        std::cout << "West: Sidorivichs Shop";
        std::cout << "\n\n";

        cordon.show_char_ui();

        std::cout << "\t\n>";
        std::getline(std::cin,option);


        if(option == "1") { ClearScreen(); std::cout << "ERROR MISSING..";}
        else if(option == "2") { ClearScreen(); std::cout << "ERROR MISSING.."; }
        else if(option == "3") { ClearScreen(); std::cout << "ERROR MISSING.."; }
        else if(option == "4") { ClearScreen(); c_lane(cordon,cor,c_mp); }

    }while((option != "1") || (option != "2") || (option != "3") || (option != "4"));
}

void c_lane(Character c_roadm, Day_info c_road_m, c_maps mapsc1)
{
    std::string option;

    do{

        ClearScreen();

        c_road_m.location = "Cordon Main 2";

        mapsc1.o = 5;
        mapsc1.set_cordon_roads();

        c_road_m.show_day_ui();

        mapsc1.show_roads();

        for(int i=0;i<4;i++) { std::cout << "\n"; };

        std::cout << "\t\tNorth: Wilderness\t";
        std::cout << "South: Wilderness\n";
        std::cout << "\t\tEast: Road Section 2\t";
        std::cout << "West: Cordon Main";
        std::cout << "\n\n";

        c_roadm.show_char_ui();
        std::cout << "\n>";
        std::getline(std::cin,option);

        if(option == "1") { ClearScreen(); std::cout << "ERROR MISSING"; }
        else if(option == "2") { ClearScreen(); std::cout << "ERROR MISSING.."; }
        else if(option == "3") { ClearScreen(); Cordon(c_roadm,c_road_m,mapsc1); }
        else if(option == "4") { ClearScreen(); c_road_sect_2(c_roadm,c_road_m,mapsc1); }

    }while((option != "1") || (option != "2") || (option != "3") || (option != "4"));

}

void c_road_sect_1(Character road1, Day_info croad1, c_maps map1)
{

    std::string option;

    do{
        ClearScreen();

        croad1.location = "Road Section 1";

        map1.o = 1;
        map1.set_cordon_roads();

        croad1.show_day_ui();

        map1.show_roads();

        for(int i=0;i<4;i++) { std::cout << "\n"; };

        std::cout << "\t\tNorth: Road Section 2\t";
        std::cout << "South: Military Checkpoint\n";
        std::cout << "\t\tEast: Wilderness\t";
        std::cout << "West: Wilderness";
        std::cout << "\n\n";

        road1.show_char_ui();
        std::cout << "\n>";
        std::getline(std::cin,option);


        if(option == "1") { ClearScreen(); c_road_sect_2(road1,croad1,map1); }
        else if(option == "2") { ClearScreen(); std::cout << "ERROR MISSING.."; }
        else if(option == "3") { ClearScreen(); std::cout << "ERROR MISSING.."; }
        else if(option == "4")  { ClearScreen(); std::cout << "ERROR MISSING.."; }

    }while((option != "1") || (option != "2") || (option != "3") || (option != "4"));

}

void c_road_sect_2(Character road2, Day_info croad2, c_maps map2)
{
    std::string option;

    do{
        ClearScreen();

        croad2.location = "Road Section 2";

        map2.o = 2;
        map2.set_cordon_roads();

        croad2.show_day_ui();

        map2.show_roads();

        for(int i=0;i<4;i++) { std::cout << "\n"; };

        std::cout << "\t\tNorth: Road Section 3\t";
        std::cout << "South: Road Section 1\n";
        std::cout << "\t\tEast: Wilderness\t";
        std::cout << "West: Cordon Main section 2";
        std::cout << "\n\n";

        road2.show_char_ui();
        std::cout << "\n>";
        std::getline(std::cin,option);


        if(option == "1") { ClearScreen(); c_road_sect_3(road2,croad2,map2); }
        else if(option == "2") { ClearScreen(); c_road_sect_1(road2,croad2,map2); }
        else if(option == "3") { ClearScreen(); c_lane(road2,croad2,map2); }
        else if(option == "4") { std::cout << "Nothing here..."; }

    }while((option != "1") || (option != "2") || (option != "3") || (option != "4"));

}

void c_road_sect_3(Character road3, Day_info croad3, c_maps map3)
{
    std::string option;

    do{
        ClearScreen();

        croad3.location = "Road Section 3";

        map3.o = 3;
        map3.set_cordon_roads();

        croad3.show_day_ui();

        map3.show_roads();

        for(int i=0;i<4;i++) { std::cout << "\n"; };

        std::cout << "\t\tNorth: Road Section 4\t";
        std::cout << "South: Road Section 2\n";
        std::cout << "\t\tEast: Dirt Path\t";
        std::cout << "        West: Wilderness";
        std::cout << "\n\n";

        road3.show_char_ui();
        std::cout << "\n>";
        std::getline(std::cin,option);


        if(option == "1") { ClearScreen(); c_road_sect_4(road3,croad3,map3); }
        if(option == "2") { ClearScreen(); c_road_sect_2(road3,croad3,map3); }
        if(option == "3") { ClearScreen(); std::cout << "ERROR.."; }
        if(option == "4") { ClearScreen(); std::cout << "ERROR.."; }

    }while((option != "1") || (option != "2") || (option != "3") || (option != "4"));

}

void c_road_sect_4(Character road4, Day_info croad4,c_maps map4)
{
    std::string option;

    do{
        ClearScreen();

        croad4.location = "Road Section 4";

        map4.o = 4;
        map4.set_cordon_roads();

        croad4.show_day_ui();
        map4.show_roads();

        for(int i=0;i<4;i++) { std::cout << "\n"; };

        std::cout << "\t\tNorth: Under the Bridge\t";
        std::cout << "South: Road Section 3\n";
        std::cout << "\t\tEast: Lane section 1\t";
        std::cout << "West: Wilderness";
        std::cout << "\n\n";

        road4.show_char_ui();
        std::cout << "\n>";
        std::getline(std::cin,option);


        if(option == "1") { ClearScreen(); c_bridge(road4,croad4,map4); }
        if(option == "2") { ClearScreen(); c_road_sect_3(road4,croad4,map4); }
        if(option == "3") { ClearScreen(); std::cout << "ERROR.."; }
        if(option == "4") { ClearScreen(); c_lane1(road4,croad4,map4); }

    }while((option != "1") || (option != "2") || (option != "3") || (option != "4"));

}

void c_lane1(Character lane1, Day_info clane1,c_maps c_l1)
{
    std::string option;

    do{
        ClearScreen();

        clane1.location = "Lane Section 1";

        c_l1.o = 7;
        c_l1.set_cordon_roads();

        clane1.show_day_ui();
        c_l1.show_roads();

        for(int i=0;i<4;i++) { std::cout << "\n"; };

        std::cout << "\t\tNorth: Wilderness\t";
        std::cout << "South: Fellow Stalkers\n";
        std::cout << "\t\tEast: Warehouse\t";
        std::cout << "        West: Road Section 4";
        std::cout << "\n\n";

        lane1.show_char_ui();
        std::cout << "\n>";
        std::getline(std::cin,option);


        if(option == "1") { ClearScreen(); std::cout << "ERROR.."; }
        if(option == "2") { ClearScreen(); std::cout << "ERROR.."; }
        if(option == "3") { ClearScreen(); c_road_sect_4(lane1,clane1,c_l1); }
        if(option == "4") { ClearScreen(); c_warehouse(lane1,clane1,c_l1);}

    }while((option != "1") || (option != "2") || (option != "3") || (option != "4"));

}

void c_warehouse(Character c_ware, Day_info c_warehouse , c_maps c_w)
{
    std::string option;

    do{
        ClearScreen();

        c_warehouse.location = "Bandit Camp";

        c_w.o = 8;
        c_w.set_cordon_roads();

        c_warehouse.show_day_ui();
        c_w.show_roads();

        for(int i=0;i<4;i++) { std::cout << "\n"; };

        std::cout << "\t\tNorth: Wilderness\t";
        std::cout << "South: Fellow Stalkers\n";
        std::cout << "\t\tEast: Warehouse\t";
        std::cout << "        West: Road Section 4";
        std::cout << "\n\n";

        c_ware.show_char_ui();
        std::cout << "\n>";
        std::getline(std::cin,option);


        if(option == "1") { ClearScreen(); std::cout << "ERROR.."; }
        if(option == "2") { ClearScreen(); std::cout << "ERROR.."; }
        if(option == "3") { ClearScreen(); c_lane1(c_ware ,c_warehouse,c_w); }
        if(option == "4") { ClearScreen(); std::cout << "ERROR.."; }

    }while((option != "1") || (option != "2") || (option != "3") || (option != "4"));

}

void c_bridge(Character cbridge, Day_info c_bridge, c_maps mbridge)
{
    std::string option;

    do{
        ClearScreen();

        c_bridge.location = "Bridge";

        mbridge.o = 9;
        mbridge.set_cordon_roads();

        c_bridge.show_day_ui();

        mbridge.show_roads();

        for(int i=0;i<4;i++) { std::cout << "\n"; };

        std::cout << "\t\tNorth: Garbage\t";
        std::cout << "        South: Road Section 4\n";
        std::cout << "\t\tEast: Wilderness\t";
        std::cout << "West: Wilderness 2";
        std::cout << "\n\n";

        cbridge.show_char_ui();
        std::cout << "\n>";
        std::getline(std::cin,option);


        if(option == "1") { ClearScreen(); std::cout << "ERROR..."; }
        else if(option == "2") { ClearScreen(); c_road_sect_4(cbridge,c_bridge,mbridge); }
        else if(option == "3") { ClearScreen(); std::cout << "ERROR..."; }
        else if(option == "4") { ClearScreen(); std::cout << "ERROR..."; }

    }while((option != "1") || (option != "2") || (option != "3") || (option != "4"));

}
s



/*
 1=n
 2=s
 3=w
 4=e
    */

/*   N
 |=======
   -|4
    |3--
   -|2
    |1
 */
