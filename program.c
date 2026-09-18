#include <stdio.h>
int main() {
    /*Valeurs des variables*/
    int speed = 260;
    int alt = 10000; 
    int cap = 230;
    int QNH = 1013;
    int Radio = 108.70;
    int ILS = 8.6;

    /*Echelle Speed*/
    int speed1 = 260 - 40;
    int speed2 = 260 - 20;
    int speed3 = 260 + 20;
    int speed4 = 260 + 40;

    /* Echelle indicateur alt*/
    int alt1 = 10000 - 1000;
    int alt2 = 10000 - 500;
    int alt3 = 10000 + 500;
    int alt4 = 10000 + 1000;
    
    printf(" ____________________________________________________ \n");
    printf("|    |  SPEED | G/S | LOC | CAT3 | A/THR |    ___    |\n");   
    printf("|    | THR CLB|     |     | DUAL | AP1+2 |   |       |\n");
    printf("|                                            | 6.    |\n");
    printf("|    __kts__       .   °   .       ___ft___  | -  |  |\n");
    printf("|   |     _|    °______^_____ °   |  115_|   | 2. |  |\n", alt4);
    printf("|   |  %4d_|    /     __        ° |     _|   | -  |  |\n", speed4);
    printf("|   |     _|   |   10____10   |   |  110_|___| 1. |  |\n", alt3);
    printf("|   |  %3d_|   |----] __ [----| ° |     _|20 | - <|  |\n", speed3);
    printf("|   |     <|   |______________| ^ |   10800  |__  |  |\n", speed, alt);
    printf("|   |  %2d_|   |      __      | ° |     _|80 |    |  |\n", speed2);
    printf("|   |     _|   |   10____10   |   |  105_|___| -  |  |\n", alt2);
    printf("|   |  %1d_|    __20______20__/ ° |     _|   | 1. |  |\n", speed1);
    printf("|   |______|_                     |______|_  | -  |  |\n", alt1);
    printf("|             °   °  <|>  °   °              | 2. |  |\n");
    printf("|  IMNW    ________________________ QNH %d   | -  |  |\n", QNH);
    printf("| Radio %d|   |   |   | ^ |   |   |          | 6. /  |\n", Radio);
    printf("| ILS %dNM|___24______23_____22___|          |___/   |\n", ILS);
    printf("|____________________________________________________|\n");

   return 0;
}