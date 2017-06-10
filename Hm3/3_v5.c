#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#include<time.h>
#define son 20

struct data{
  int uid;
  char *firstname;
  char *lastname;
  int p_n[11];
};
void out(struct data *in)
{
  printf("UID: %d\n", in->uid);
  printf("name: %s\n", in->firstname);
  printf("surname: %s\n", in->lastname);
  printf("phone: ");
  int ch=0;
  for(;ch<11;ch++)
      printf("%d", in->p_n[ch]);
}
void in(struct data *in)
{
    printf("Enter UID\n");
    scanf("%d", &in->uid);
    getchar();
    printf("Enter Name\n");
    gets(in ->firstname);
    printf("Enter Surname\n");
    gets(in ->lastname);
    int ch=0;
    for(;ch<11;ch++)
      scanf("%d", &in -> p_n[ch]);
}
int main()
{
  setlocale(LC_ALL, "");
  srand(time(NULL));
  struct data qp;
  qp.firstname = malloc(sizeof(char)*son);
  qp.lastname = malloc(sizeof(char)*son);
  in(&qp);
  out(&qp);
  free(qp.firstname);
  free(qp.lastname);
  getchar();
  return 0;
}
