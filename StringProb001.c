
#include<stdio.h>
#define STR_MAX 155

int stringLength(char* _str);
char* stringCopy(char* _dst, const char* _src);
char* stringConcatenate(char* _dst, const char* _src);

int main(){

//declare str 3 way -> 1. char array(defined size array) 2. char array(undefined size), char pointer
    char str01[STR_MAX] =   
	char str02[] = 
    char* str03 = 

	//printf array in 2 different way  -> 1. char array index, 2. printf

	//print str01
	printf("\n");
	

	//print str02
    printf("\n");

	//print str03
    printf("\n");



    // input string fgets
    char str05[STR_MAX];
	printf("input string : ");
    
	// use fgets //

	printf("str05 : %s", str05);

    // reset str05
    printf("input string you want to change : ");
    
	printf("str05 : %s", str05);
	
	//input strinf for _dst
    char strdst[STR_MAX];
    printf("input string for _dst: ");

	//input string for _src
    char strsrc[STR_MAX];
    printf("input string you want to append: ");

	//append the _src after _dst
    return 0;
}

int stringLength(char* _str){
}
char* stringCopy(char* _dst, const char* _src){
}
char* stringConcatenate(char* _dst, const char* _src){
}
