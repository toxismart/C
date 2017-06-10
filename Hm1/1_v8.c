#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void infile(int *mas){
    FILE *masip;
    masip = fopen("masip.txt","w");
    int ch=0;
    for(;ch<10;ch++)
        fprintf(masip,"%d",mas[ch]);
    fclose(masip);
}
int main(){
    int mas[3] = {2,4,8};
    infile(mas);
    getchar();
    return 0;
}
