#include <stdio.h>
int main()
{
    char string[255];
    gets(string);
    int ch=0,cv=0;
    for(ch=0;ch<=strlen(string);ch++)
    {
      if(string[ch]=='w')
      {cv++;}
    }
    printf('%d',cv);
    getch();
    return;
}
