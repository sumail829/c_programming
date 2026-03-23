#include<stdio.h>
int main(){
int items=49;
float price=20.12;
float total=items*price;
char currency='$';
printf("the total price is %.2f%c\n",total,currency);
return 0;
}

