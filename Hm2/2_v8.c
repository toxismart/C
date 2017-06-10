#include<stdio.h>
int main(){
    int mas[7] = {5, 4, 8, 12, 17, 1, 99};
    FILE *newmas;
    newmas = fopen("newmas.txt","w");
    int ch;
    for(ch=0;ch<7;ch++)
        fprintf(newmas, "%d ", mas[ch]);
    fclose(newmas);
    getchar();
    return 0;
}
