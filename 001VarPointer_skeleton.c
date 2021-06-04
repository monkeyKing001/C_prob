//Manupulating var with pointer (print, swap)
#include <stdio.h>

//check the validity of pointer!!(prevent the error)
int swapVar(int* a, int* b){
	// fix me
	// fix me
}

void printVar(int *a){
	// fix me
	// fix me
}

int main(){
	
	int a = 10;
	int b = 20;
	
	int* pa = &a;
	int* pb = &b;
	
	//print Var A, B
	printVar(pa);
	printVar(pb);
	
	//swap Var A ,B
	swapVar(pa, pb);
	
	//print Var A, B
	printVar(pa);
	printVar(pb);
	
	
	return 0;
} 
