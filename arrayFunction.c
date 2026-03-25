#include<stdio.h>

void arrayFunction(int myArray[5]){
	for ( int i=0 ; i<5 ; i++){
	    printf("the number are:%d\n",myArray[i]);
	}
}

int main(){
	int Array[5]={5,6,7,8,9};
	arrayFunction(Array);
	return 0;
}
