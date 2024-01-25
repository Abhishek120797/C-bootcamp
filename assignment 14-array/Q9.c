// Write a program in C to read n number of values in an array and display it in reverse
// order. Take array values from the user.

#include <stdio.h>
int main()
{
  int num[100], n;
  printf("how many number you want to enter: ");
  scanf("%d", &n);

  printf("Enter numbers: ");
  for (int i = 0; i < n; i++)
    scanf("%d", &num[i]);

  for (int i = n - 1; i >= 0; i--)
    printf("%d ", num[i]);
  return 0;
}