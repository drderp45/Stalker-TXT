#include <QtCore/QCoreApplication>
#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "Classes.h"

void logo();

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    bool retry = false;
    std::string menu;

    do{

    logo();
    for(int i=0;i<14;i++) { std::cout << "\n"; };
    std::cout << "\t\t    1:New Game";
    std::cout << "\t 2:Load Game";
    std::cout << "\t3:Help\n";
    std::cout << ">";
    std::getline(std::cin,menu);

    if(menu == "1")
    {
        Character test;
        test.initial_stats();

        Day_info burp;
        burp.initial_stats();

        c_maps c_map;

        ClearScreen();

        Cordon(test,burp,c_map); // Starting place
    }
    else if(menu == "2") { std::cout << "Beta"; retry = true; ClearScreen(); }
    else if(menu == "3") { ClearScreen(); help(); retry = true; ClearScreen(); }
    else if((menu != "1") || (menu != "2")) { retry = true; ClearScreen(); }

    }while(retry == true);

    return a.exec();
}

void logo()
{
   char x = 219;
   char y = 178;
   char z = 177;
   char n = 176;

   std::cout << "\t   " << x << x; // S1
   std::cout << "   " << x << x << x << x << x; //T1
   std::cout << "    " << x << x; // A1
   std::cout << "      " << x; // L1
   std::cout << "        " << x << "  " << x; // K1
   std::cout << "       " << x << x; // E1
   std::cout << "     " << x << x << x << "\n"; //R1

   std::cout << "\t  " << x << "  " << x; //S2
   std::cout << "    " << x; //T2
   std::cout << "     " << x << "  " << x; //A2
   std::cout << "     " << x; // L2
   std::cout << "        " << x << "  " << x; //K2
   std::cout << "      " << x; //E2
   std::cout << "       " << x << "  " << x << "\n"; //R2

   std::cout << "\t  " << x; //S3
   std::cout << "       " << x; //T3
   std::cout << "     " << x << "  " << x; //A3
   std::cout << "     " << x; // L3
   std::cout << "        " << x << " " << x; //K3
   std::cout << "      " << x << x << x << x; //E3
   std::cout << "     " << x << "  " << x << "\n"; // R3

   std::cout << "\t  " << x << x << x << x; // S4
   std::cout << "    " << x; //T4
   std::cout << "     " << x << x << x << x; //A4
   std::cout << "     " << x; //L4
   std::cout << "        " << x << x; //K4
   std::cout << "       " << x; //E4;
   std::cout << "        " << x << x << x << "\n"; //R4

   std::cout << "\t     " << z; // S5
   std::cout << "    " << z; // T5
   std::cout << "     " << z << "  " << z; //A5
   std::cout << "     " << z; //L5
   std::cout << "        " << z << " " << z; //K5
   std::cout << "      " << z; //E5;
   std::cout << "        " << z << "  " << z << "\n";

   std::cout << "\t  " << z << "  " << z; //S6
   std::cout << "    " << z; //T6
   std::cout << "     " << z << "  " << z; //A6
   std::cout << "     " << z; // L6
   std::cout << "        " << z << "  " << z; //K6
   std::cout << "     " << z; //E6
   std::cout << "        " << z << "  " << z << "\n"; //R6

   std::cout << "\t  " << n << "  " << n; //S7
   std::cout << "    " << n; //T7
   std::cout << "     " << n << "  " << n; //A7
   std::cout << "     " << n; // L7
   std::cout << "        " << n << "  " << n; //K7
   std::cout << "     " << n; //E7
   std::cout << "        " << n << "  " << n << "\n"; //R7

   std::cout << "\t   " << n << n; //S8
   std::cout << "  " << n << "  " << n; //T8
   std::cout << "  " << n << "  " << n << "  " << n; //A8
   std::cout << "  " << n << "  " << n << n << n << n; // L8
   std::cout << "  " << n << "  " << n << "  " << n; //K8
   std::cout << "  " << n << "  " << n << n << n << n;
   std::cout << "  " << n << "  " << n << "  " << n << "\n";


}




