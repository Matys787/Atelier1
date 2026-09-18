#include <stdio.h>
int main() {
    /*Valeurs des variables*/
    int speed = 260;
    int alt = 10000; 
    int cap = 230;
    int QNH = 1013
    int Radio = 108.70;
    int ILS = 8.6;

    /*Echelle Speed*/
    int speed  = 260 - 40;
    int speed  = 260 - 20;
    int speed  = 260 + 20;
    int speed  = 260 + 40

    /* Echelle indicateur alt*/
    int alt = 10000 - 1000
    int alt = 10000 - 500
    int alt = 10000 + 500
    int alt = 10000 + 1000
    
    printf(" ____________________________________________________ \n");
    printf("|    |  SPEED | G/S | LOC | CAT3 | A/THR |    ___    |\n");   
    printf("|    | THR CLB|     |     | DUAL | AP1+2 |   |       |\n");
    printf("|                                            | 6.    |\n");
    /* speed / alt */
    printf("|    __kts__       .   °   .       ___ft___  | -  |  |\n");
    printf("|   |     _|    °______^_____ °   |  115_|   | 2. |  |\n");
    printf("|   |  280_|    /     __        ° |     _|   | -  |  |\n");
    printf("|   |     _|   |   10____10   |   |  110_|___| 1. |  |\n");
    printf("|   |  260_|   |----] __ [----| ° |     _|20 | - <|  |\n");
    printf("|   |     <|   |______________| ^ |   10800  |__  |  |\n");
    printf("|   |  240_|   |      __      | ° |     _|80 |    |  |\n");
    printf("|   |     _|   |   10____10   |   |  105_|___| -  |  |\n");
    printf("|   |  220_|    __20______20__/ ° |     _|   | 1. |  |\n");
    printf("|   |______|_                     |______|_  | -  |  |\n");
    printf("|             °   °  <|>  °   °              | 2. |  |\n");
    printf("|  IMNW    ________________________ QNH 1013 | -  |  |\n");
    printf("| 108.70  |   |   |   | ^ |   |   |          | 6. /  |\n");
    printf("| 8.6 NM  |___24______23_____22___|          |___/   |\n");
    printf("|____________________________________________________|\n");

   return 0;
}