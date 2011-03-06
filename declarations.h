#ifndef DECLARATIONS_H
#define DECLARATIONS_H

class Character;
class Day_info;
class c_maps;

void logo();
void ClearScreen();
void help();

void c_warehouse(Character, Day_info, c_maps);
void c_lane1(Character, Day_info, c_maps);
void c_lane(Character, Day_info, c_maps);
void c_road_sect_1(Character, Day_info, c_maps);
void c_road_sect_2(Character, Day_info, c_maps);
void c_road_sect_3(Character, Day_info, c_maps);
void c_road_sect_4(Character, Day_info, c_maps);
void c_bridge(Character, Day_info, c_maps);

#endif // DECLARATIONS_H
