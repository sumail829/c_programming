#include<stdio.h>
#include<string.h>

void myFunction(char name[]){
	printf("Hello %s\n", name);
}

int main(){
	myFunction("samir");
	myFunction("saurav");
	myFunction("pallavi");
	return 0;
}
