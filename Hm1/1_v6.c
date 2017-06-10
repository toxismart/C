#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int dc(int val){
  return val % 1000;
}
int main(){
  printf("%d", dc(3000));
  getchar();
  return 0;
}
