#include<stdio.h>
int main(){
    FILE *popkek;
    popkek = fopen("TextFileV2.txt","w");
    int ch;
    for(ch=0;ch<22;ch++)
        if(ch%2 == 1)
        fprintf(popkek, "%d ", ch);
    fclose(popkek);
    getchar();
    return 0;
}
