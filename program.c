#include <stdio.h>
int main() {
    /*Valeurs des variables*/
    int speed = 260;
    int alt = 10000; 
    int cap = 230;
    %4.f = 230;
    int QNH = 1013;
    %.3f = QNH;
    double Radio = (108.00 + 111.95) / 2;
    %.2f = Radio;
    double ILS = 8;
    %.1f = ILS;

    /*Echelle Speed*/
    int speed1 = 260 - 40;
    %1d = speed1;
    int speed2 = 260 - 20;
    %2d = speed2;
    int speed3 = 260 + 20;
    %3d = speed3;
    int speed4 = 260 + 40;
    %4d = speed4;

    /* Echelle indicateur alt*/
    int alt5 = 10000 - 1000;
    %5d = alt5;
    int alt6 = 10000 - 500;
    %6d = alt6;
    int alt7 = 10000 + 500;
    %7d = alt7;
    int alt8 = 10000 + 1000;
    %8d = alt8;

    printf(" ____________________________________________________ \n");
    printf("|    |  SPEED | G/S | LOC | CAT3 | A/THR |    ___    |\n");   
    printf("|    | THR CLB|     |     | DUAL | AP1+2 |   |       |\n");
    printf("|                                            | 6.    |\n");
    printf("|    __kts__       .   °   .       ___ft___  | -  |  |\n");
    printf("|   |     _|    °______^_____ °   |  %8d_|   | 2. |  |\n");
    printf("|   |  %4d_|    /     __        ° |     _|   | -  |  |\n");
    printf("|   |     _|   |   10____10   |   |  %7d_|___| 1. |  |\n");
    printf("|   |  %3d_|   |----] __ [----| ° |     _|20 | - <|  |\n");
    printf("|   |  %2d_|   |______________| ^ |   10000  |__  |  |\n");
    printf("|   |  %2d_|   |      __      | ° |     _|80 |    |  |\n");
    printf("|   |     _|   |   10____10   |   |  %6d_|___| -  |  |\n");
    printf("|   |  %1d_|    __20______20__/ ° |     _|   | 1. |  |\n");
    printf("|   |______|_                     |__%5d_|_  | -  |  |\n");
    printf("|             °   °  <|>  °   °              | 2. |  |\n");
    printf("|  IMNW    ________________________ QNH %.3f | -  |  |\n");
    printf("|Radio %.2f|   |   |   | ^ |   |   |         | 6. /  |\n");
    printf("|ILS %.1fNM|___24____%4.f______22___|         |___/  |\n");
    printf("|____________________________________________________|\n");

   return 0;
}