#include <stdio.h>
int main() {

    /*Valeurs des variables*/

    int cap = 230;
    int QNH = 1013;
    int ILS = 8;

    /*Echelle Speed*/
    int speed = 260;
    int speed1 = 260 - 40;
    %1d = 220
    int speed2 = 260 - 20;
    %2d = 240
    int speed3 = 260 + 20;
    %3d = 280
    int speed4 = 260 + 40;
    %4d = 300

    /* Echelle indicateur alt*/
    int altitude = 10000;
    int altitude5 = altitude - 1000;
    
    int altitude6 = altitude - 500;
   
    int altitude7 = altitude + 500;
  
    int altitude8 = altitude + 1000;
   

    printf(" ____________________________________________________ \n");
    printf("|    |  SPEED | G/S | LOC | CAT3 | A/THR |    ___    |\n");   
    printf("|    | THR CLB|     |     | DUAL | AP1+2 |   |   \   |\n");
    printf("|                                            | 6. \  |\n");
    printf("|    __kts__       .   °   .       ___ft___  | -  |  |\n");
    printf("|   |     _|    °______^______ °  |  %6d_|   | 2. |  |\n", altitude8);
    printf("|   |  %d_|   /      __      \ ° |     _|   | -  |  |\n");
    printf("|   |     _|   |   10____10   |   |  %6d_|___| 1. |  |\n", altitude7);
    printf("|   |  %d_|   |----] __ [----| ° |     _|20 | - <|  |\n");
    printf("|   |    <_|   |______________| ^ |  %6d     |    |  |\n", altitude);
    printf("|   |  %d_|   |      __      | ° |     _|80 |    |  |\n");
    printf("|   |     _|   |   10____10   |   |  %6d_|___| -  |  |\n", altitude6);
    printf("|   |  %d_|   \__20______20__/ ° |     _|   | 1. |  |\n");
    printf("|   |______|_                     |__%6d_|_  | -  |  |\n", altitude5);
    printf("|             °   °  <|>  °   °              | 2. |  |\n");
    printf("|  IMNW    ________________________ QNH %.3f | -  |  |\n");
    printf("|Radio %.2f|   |   |   | ^ |   |   |         | 6. /  |\n");
    printf("|ILS %.1fNM|___24_____23______22___|         |___/   |\n");
    printf("|____________________________________________________|\n");

   return 0;
}