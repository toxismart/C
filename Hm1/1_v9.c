#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int tmp=0,mas[5],ch,lim=0;
    while(1){
        scanf("%d", &tmp);
        if(tmp<50){
            mas[lim] = tmp;
            lim++;
        }
        if(lim==5){
            break;
        }
    }
    getchar();
    return 0;
}
