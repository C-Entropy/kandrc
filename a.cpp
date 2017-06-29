#include <cstdio>
#define TABINC 8

int main()
{
  freopen("test", "r", stdin);
  freopen("out", "w", stdout);
  int c, nb = 0, pos = 1;
  while((c=getchar()) != EOF)
    {
      if(c == '\t')
	{
	  nb = TABINC - (pos - 1) % TABINC;
	  while(~nb){putchar(' '); ++pos; --nb;}
	}
      else if(c == '\n') {putchar(c); pos = 1;}
      else {putchar(c); ++pos;}
    }
}

