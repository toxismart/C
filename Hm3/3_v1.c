#include <stdio.h>
int main()
{
    int ch;
    FILE *fl = fopen("symbols.txt", "w");

    for(ch= 'A'; ch <= 'Z'; ch++){
        fprintf(fl, "%c ", ch);
    }
    fclose(fl);
    getchar();
    return 0;
}
