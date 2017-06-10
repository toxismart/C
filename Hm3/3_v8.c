#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct stc{
    int uid;
    int p_n;
  }
stc_mas[3];
void vv(struct stc *in){
  printf("UID:   %d\n", in->uid);
  printf("Phone Number: %d\n", in->p_n);
}
int main(){
  srand(time(NULL));
  int ch;
  for(ch=0;ch<3;ch++){
      stc_mas[ch].p_n = rand() % 10000;
      stc_mas[ch].uid = ch;
      vv(&stc_mas[ch]);
    }
  getchar();
  return 0;
}
