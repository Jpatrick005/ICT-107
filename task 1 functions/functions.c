#include <stdio.h>
#include "functions.h"

void drawRectangle() {
    printf("You've Chosen Rectangle\n");
    printf("+--------------------+\n");
    printf("|                    |\n");
    printf("|                    |\n");
    printf("|                    |\n");
    printf("+--------------------+\n");
   
}

void drawSquare() {
    printf("You've Chosen Rectangle\n");
    printf("+---------+\n");
    printf("|         |\n");
    printf("|         |\n");
    printf("|         |\n");
    printf("+---------+\n");
}

void drawTriangle() {
    printf("You've Chosen Trianlge\n");
    printf("     +   \n");
    printf("    * * \n");
    printf("   *   *\n");
    printf("  +-----+   \n");
}

void handleSelection(int select) {
    if (select == 1) {
        drawRectangle();
    } else if (select == 2) {
        drawSquare();
    } else if (select == 3) {
        drawTriangle();
    };
}

