#include<stdio.h>

int main(void){
//int a=5;
//int b=10;
//int sum=a+b;
//printf("%d\n",sum);
printf("char: %zu bytes\n", sizeof(char));
printf("short: %zu bytes\n", sizeof(short));
printf("long: %zu bytes\n", sizeof(long));
printf("long long: %zu bytes\n", sizeof(long long));
printf("float: %zu bytes\n", sizeof(float));
printf("double: %zu bytes\n", sizeof(double));
return 0;
}
