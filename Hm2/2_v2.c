#include<stdio.h>
int main(){
    char ss[255];
    int ch;
    gets(ss);
    scanf("%d", &ch);
    FILE *intandstr;
    intandstr = fopen("textFileV2.txt","w");
    fprintf(intandstr, "%s", ss);
    fprintf(intandstr, " %d\t", ch);
    fclose(intandstr);
    getchar();
    return 0;
}
