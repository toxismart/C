#include<stdio.h>
void qq(int *ch){
    *ch=*ch*(*ch);
}
int main(){
    int el=10;
    qq(&el);
    printf("%d", el);
    return 0;
}
