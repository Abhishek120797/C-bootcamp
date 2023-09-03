#include <stdio.h>
int main()
{
  int n, num[100], temp[100];
  printf("how many number you want to enter: ");
  scanf("%d", &n);

  printf("Enter numbers: ");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &num[i]);
    temp[i] = num[i];
  }

  for (int i = 0; i < n; i++)
    printf("%d ", temp[i]);
  return 0;
}