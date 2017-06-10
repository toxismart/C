#include <stdio.h>
void swap_double(double *k, double *v){
  *k = *k + *v;
  *v = *k - *v;
  *k = *k - *v;
}
int main(){
    double k=0.93838383441, v=0.3434656778123;
    printf("k = %.2lf , v = %.2lf\n", k,v);
    swap_double(&k,&v);
    printf("k = %.2lf , v = %.2lf", k,v);
    getchar();
    return 0;
}
