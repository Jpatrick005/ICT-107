#include <stdio.h>

int main(void) {
  int n, i;
  printf("Input the number of elements to store in the array : ");
  scanf("%d", &n);
  int arr[n];

  // n is the number of elements to be stored in the array
  printf("Input %d number of elements in the array :\n", n);
  for (i = 0; i < n; i++) {
    printf("element - %d : ", i);
    scanf("%d", &arr[i]);
  }
  // for loop for printing the elements of the array
  printf("The elements you entered are :\n");
  for (i = 0; i < n; i++) {
    printf("element - %d : %d\n", i, arr[i]); 
 }

}
