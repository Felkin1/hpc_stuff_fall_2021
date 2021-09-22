#include <stdio.h>

int main()
{
 int i;
 while(1)
 {
  printf("i: %d\n", i);
  i = (i + 1)&15;
 }
}