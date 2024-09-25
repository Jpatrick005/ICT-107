#include <stdio.h>
#include "functions.h"


int main(){
  printf("Drawing and Solving using Function\n");
  printf("1. Drawing a Rectangle\n");
  printf("2. Drawing a Square\n");
  printf("3. Drawing a Traingle\n");
  
  int select;
  scanf("%d", &select);

  handleSelection(select);
  
  switch (select) {
    case 1:
      printf("You've chosen rectangle \n");
      int widthrec, heightrec;
      printf("Enter width: ");
      scanf("%d", &widthrec);
      printf("Enter height: ");
      scanf("%d", &heightrec);
      int areaRec;
      areaRec = widthrec * heightrec;
      printf("Area of rectangle is %d\n", areaRec);
      break;
    case 2:
    printf("you've chosen square \n");
    int side;
    printf("Enter side: ");
    scanf("%d", &side);
    int areaSq;
    areaSq = side * side;
    printf("Area of square is %d\n", areaSq);
    break;
   case 3:
      printf("you've chosen triangle \n");
      int base, height;
      printf("Enter base: ");
      scanf("%d", &base);
      printf("Enter height: ");
      scanf("%d", &height);
      int areaTri;
      areaTri = (base * height) / 2;
      printf("Area of triangle is %d\n", areaTri);\
      break;
    
  }
}