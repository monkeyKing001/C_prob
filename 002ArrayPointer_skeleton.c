//Manupulating arr with pointer (print, swap)
#include<stdio.h>

int printArr(int* a, int len){
	// fix me
	// fix me
}

void swapArr(int** a, int** b){
	// fix me
	// fix me
}


int main(){
	
	int arrA[10] = {2, 4, 6, 8, 1, 5, 7, 3, 9};
	int arrB[10] = {1, 9, 3, 7, 2, 8, 4, 5, 6};

	int* pa = arrA;
	int* pb = arrB;
	
	
	//printArr A, B
	printArr(pa, 10);
	printArr(pb, 10);
	
	
	//swap Arr A, B
	swapArr(&pa, &pb);
	
	//printArr A, B
	printArr(pa, 10);
	printArr(pb, 10);
	
