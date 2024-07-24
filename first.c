#include <stdio.h>

int main()
{
  int n=5;
  for(int row=1;row<=n;row++,printf("\n"))
  {
      for( int space=n;space>row;space--)
      printf(" ");
      for(int col=1;col<=2*row-1;col++)
      {
          if((row+col)%2==0)
          printf("1");
          else
          printf("0");
      }
  }
}
