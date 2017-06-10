#define mas_sz 3
#include <stdio.h>
void mm(double mas[]){
    int ch=0;
    double tmpfl1=mas[0], tmpfl2=mas[0];
    for(;ch<mas_sz;ch++){
        if(tmpfl1>mas[ch])
            tmpfl1=mas[ch];
        if(tmpfl2<mas[ch])
            tmpfl2=mas[ch];
    }
    printf("fl1: %lf \n fl2: %lf \n", tmpfl1, tmpfl2);
}
int main(){
    int ch=0;
    double mas[mas_sz];
    for(;ch<mas_sz;ch++)
        scanf("%lf", &mas[ch]);
    mm(mas);
    getchar();
    return 0;
}
