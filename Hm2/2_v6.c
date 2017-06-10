#include<stdio.h>
void zhel(int *el, int res){
  int ch;
  for(ch=0; ch<res; ch++){
        printf("%d ", el[ch]);
    }
}
int main(){
  int mas[] = {1, 3, 7, 11};
  zhel(mas,4);
  return 0;
}
