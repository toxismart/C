#include<stdio.h>
int main()
{
    char string[255];
    {
    FILE *input;
    input = fopen("input.txt","r");
    if(input != NULL)
    {fscanf(input, "%s", string);
    }
    else
    {printf("input.txt err");
    exit(400);
      }
    fclose(input);
    FILE *qeq;
    qeq = fopen("quek.txt","w");
    fprintf(qeq, "%s", string);
    fclose(qeq);
    printf("OK");
    getch();
    return;
}
