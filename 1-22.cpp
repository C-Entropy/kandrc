#include <cstdio>
#define MAXCOL 8o0
#define TABINC 8

int findblnk(int pos);
void printl(int pos);
int newpos(int pos);
int exptab(int pos);

char s[MAXCOL + 10];

int main()
{
  freopen("test.txt", "r", stdin);
  freopen("a.out", "w", stdout);
  int c, pos = 0;
  while((c = getchar()) != EOF)
    {
      s[pos] = c;
      if(c == '\t') exptab(pos);
      else if(c == '\n') {printl(pos); pos = 0;}
      else if(++pos >= MAXCOL)
	{
	  pos = findblnk(pos); printl(pos); pos = newpos(pos);
	}
    }
  return 0;
}  

int exptab(int pos)
{
  while(pos < MAXCOL && pos%TABINC != 0) s[pos++] = ' ';
  if(pos >= MAXCOL) {printf("%s\n", s);return 0;}
  return pos;
}

int findblnk(int pos)
{
  while(pos > 0 && s[pos] != ' ') pos--;
  if(!pos) return MAXCOL;
  return pos+1;
}

void printl(int pos)
{
  for(int i = 0; i < pos; i++) putchar(s[i]);
  if(pos > 0) putchar('\n');
  return;
}

int newpos(int pos)
{
  if(pos >= MAXCOL || pos <= 0) return 0;
  int i = 0;
  while(pos + i < MAXCOL) {s[i] = s[pos+i]; i++;}
  return i;
}
