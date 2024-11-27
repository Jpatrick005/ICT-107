#include <math.h>
#include <stdio.h>

void masterTheorem(int a, int b, double d) {

  double p = log(a) / log(b);

  printf("\nMaster Theorem Analysis:\n");
  printf("a = %d, b = %d, d = %.2f\n", a, b, d);
  printf("p = log_b(a) = %.2f\n", p);

  if (p < d) {
    printf("Case Used: Case 1\n");
    printf("Description: p = %.2f < d = %.2f\n", p, d);
    printf("Complexity: O(n^%.2f)\n", d);
  } else if (fabs(p - d) < 1e-6) {
    printf("Case Used: Case 2\n");
    printf("Description: p = %.2f = d = %.2f\n", p, d);
    printf("Complexity: O(n^%.2f * log(n))\n", d);
  } else {
    printf("Case Used: Case 3\n");
    printf("Description: p = %.2f > d = %.2f\n", p, d);
    printf("Complexity: O(n^%.2f)\n", p);
  }
}

int main() {
  int a, b;
  double d;

  printf("Enter the value of a : ");
  scanf("%d", &a);
  printf("Enter the value of b: ");
  scanf("%d", &b);
  printf("Enter the value of d: ");
  scanf("%lf", &d);
  masterTheorem(a, b, d);

  printf("\nPress Enter to exit...");
  getchar(); // Consume the leftover newline from scanf
  getchar(); // Wait for the user to press Enter

  return 0;
}
