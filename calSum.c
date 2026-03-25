#include<stdio.h>


void calSum(int x, int y){
	int sum=x+y;
	printf("the total sum is:%d\n",sum);
}

int main(){
	calSum(5,5);
	calSum(6,19);
	return 0;
}
