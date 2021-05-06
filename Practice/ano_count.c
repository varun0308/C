#include <stdio.h>
int main()
{
  int a,c = 0;
  while ((a=getchar())!= EOF)
  {
    putchar(a);
    ++c;
  }
  printf("%d", c-1);
  return 0;
}