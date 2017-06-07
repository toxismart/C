#include <stdio.h>
void allin(int ch)
{
int i=0;
for(i<=ch ; i=i+1)
    {
    printf("%d ", i);
    }
}
int main()
{
    allin(17);
    getch();
    return 0;
}
