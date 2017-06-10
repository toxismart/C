#include <stdio.h>

void swap_int(int *k, int *v)
{
  *k = *k + *v;
  *v = *k - *v;
  *k = *k - *v;
}
int main()
{
  int k=3, v=7;
  printf("k = %d , v = %d\n", k,v);
  swap_int(&k,&v);
  printf("k = %d , v = %d\n",k,v);
  getchar();
  return 0;
}
