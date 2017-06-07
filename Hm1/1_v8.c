#include <stdio.h>
void infile(int *masip)
{
    FILE *masip;
    msin = fopen("masip.txt","w");
    int ch=0;
    for(;ch<10;ch++)
        fprintf(masip,"%d",mas[ch]);
    fclose(masip);
}
int main()
{
    int mas[3] = {2,4,8};
    infile(mas);
    printf("working");
    getch();
    return;
}
