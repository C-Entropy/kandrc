#include <cstdio>

void incomment();
void inslash();

int main()
{
  freopen("malloc.cpp", "r", stdin);
  freopen("bax.cpp", "w", stdout);
  int c;
  while((c = getchar()) != EOF)
    {
      if(c == '/') ;//incomment();
      else if(c == '\'' || c == '"') {putchar(c); inslash();}
      else putchar(c);
    }
  return 0;

}

void incomment()
{
  int c = getchar();
  if(c == '/')
    {
      while((c = getchar()) != EOF)
	if(c == '\n') return;
      if(c == EOF) return;
    }
  
  int c1;
  c = ' ';
  while((c1 = getchar()) != EOF)
    {
      if(c == '*' && c1 == '/') return;
      c = c1;
    }
  return;
}

void inslash()
{
  int c = getchar(), c1;
  while((c1 = getchar()) != EOF)
    {
      putchar(c);
      if(c != '\\' && (c1 == '\'' || c1 == '"')){putchar(c1); return;}
      c = c1;
    }
  return;
}
