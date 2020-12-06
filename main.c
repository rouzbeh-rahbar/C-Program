#include <stdio.h>

int main(void) 
{
  printf( "This program reads in two whole numbers and outputs the sum\n\n");
  int a,b,c;
  printf("Please enter 1st number : ");
  scanf("%d", &a);
  printf("Please enter 2st number : ");
  scanf("%d",&b);
  printf("\n\n");
  c=a+b;
  printf(" total  : %d", c);
  return 0;
}