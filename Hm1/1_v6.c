#include <stdio.h>
int div(int var)
{
return var % 1000;
}

int main()
{
printf("%d", div(4815));
getch();
return 0;
}
