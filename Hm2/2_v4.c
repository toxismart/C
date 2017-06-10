#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int mas[4][6];
    srand(time(0));
    int k,v;
    for(k=0;k<4;k++){
      for(v=0;v<6;v++){
          mas[k][v] = rand() % 100;
          if(k==2)
              printf("%d ",mas[k][v]);
      }
    }
    getchar();
    return 0;
}
