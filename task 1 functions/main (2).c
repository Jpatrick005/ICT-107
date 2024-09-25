#include <stdio.h>

void drawRectangle() {
    printf("You've Chosen Rectangle\n");
    printf("+--------------------+\n");
    printf("|                    |\n");
    printf("|                    |\n");
    printf("|                    |\n");
    printf("+--------------------+\n");
}

void drawSquare() {
    printf("You've Chosen Square\n");
    printf("+---------+\n");
    printf("|         |\n");
    printf("|         |\n");
    printf("|         |\n");
    printf("+---------+\n");
}

void drawTriangle() {
    printf("You've Chosen Triangle\n");
    printf("     +   \n");
    printf("    * * \n");
    printf("   *   *\n");
    printf("  +-----+   \n");
}

int main() {
    printf("Drawing and Solving using Function\n");
    printf("1. Drawing a Rectangle\n");
    printf("2. Drawing a Square\n");
    printf("3. Drawing a Triangle\n");

    int select;
    scanf("%d", &select);

    switch (select) {
        case 1:
            printf("You've chosen rectangle \n");
            int widthrec, heightrec;
            printf("Enter width: ");
            scanf("%d", &widthrec);
            printf("Enter height: ");
            scanf("%d", &heightrec);
            int areaRec = widthrec * heightrec;
            printf("Area of rectangle is %d\n", areaRec);
            drawRectangle();
            break;

        case 2:
            printf("You've chosen square \n");
            int side;
            printf("Enter side: ");
            scanf("%d", &side);
            int areaSq = side * side;
            printf("Area of square is %d\n", areaSq);
            drawSquare();
            break;

        case 3:
            printf("You've chosen triangle \n");
            int base, height;
            printf("Enter base: ");
            scanf("%d", &base);
            printf("Enter height: ");
            scanf("%d", &height);
            int areaTri = (base * height) / 2;
            printf("Area of triangle is %d\n", areaTri);
            drawTriangle();
            break;

        default:
            printf("Invalid selection!\n");
            break;
    }

    return 0;
}
