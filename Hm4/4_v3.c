#include <stdio.h>
float square(float *dp){
    return *dp = (*dp)*(*dp);
}
int main(int argc, char* argv[]){
    float dp=6;
    printf("%f", square(&dp));
    getchar();
    return 0;
}
