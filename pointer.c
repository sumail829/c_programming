#include<stdio.h>

int main(){
int a=30;
int *ptr=&a;

printf("%p\n",&a);
printf("%d\n",*ptr);
return 0;
}
