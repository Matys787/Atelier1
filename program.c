#include <stdio.h>
int main() {

    /*Echelle Speed*/
    int speed = 260;
    int speed1 = 260 - 40;
   
    int speed2 = 260 - 20;
   
    int speed3 = 260 + 20;
    
    int speed4 = 260 + 40;
   

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
    printf("|   |     _|    °______^______ °  |  020_|   | 2. |  |\n", altitude8);
    printf("|   |  300_|   /      __      \ ° |     _|   | -  |  |\n", speed4);
    printf("|   |     _|   |   10____10   |   |  015_|___| 1. |  |\n", altitude7);
    printf("|   |  280_|   |----] __ [----| ° |     _|20 | - <|  |\n", speed3);
    printf("|   |    <_|   |______________| ^ |    10000 |    |  |\n", altitude);
    printf("|   |  240_|   |      __      | ° |     _|80 |    |  |\n", speed2);
    printf("|   |     _|   |   10____10   |   |  010_|___| -  |  |\n", altitude6);
    printf("|   |  220_|   \__20______20__/ ° |     _|   | 1. |  |\n", speed1);
    printf("|   |______|_                     |______|_  | -  |  |\n", altitude5);
    printf("|             °   °  <|>  °   °              | 2. |  |\n");
    printf("|  IMNW    ________________________ QNH 1013 | -  |  |\n");
    printf("|  108.7  |   |   |   | ^ |   |   |          | 6. /  |\n");
    printf("|  8.6NM  |___24_____23______22___|          |___/   |\n");
    printf("|____________________________________________________|\n");

   return 0;
}