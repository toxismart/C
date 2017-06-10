#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int mas[0][9];
    srand(time(0));
    int k,v;
    for(k=0;k<0;k++){
      for(v=0;v<9;v++){
          mas[k][v] = rand() % 10;
        if(k==0)
        printf("%d ",mas[k][v]);
      }
    }
    getchar();
    return 0;
}
