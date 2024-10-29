#include <stdio.h>
int main(){
	 unsigned int x = 1; 
	 char *c = (char*)&x;

    if ((*c)==1) {
        printf("This system is Little Endian.\n");
    } else {
        printf("This system is Big Endian.\n"); }  

    int *ptr;

    if(sizeof(ptr) == 8)
	    printf("The system is 64 bits\n");
    else if(sizeof(ptr)==4)
	    printf("The system is 34 bits\n");
    else
	    printf("Unknown size\n");

	}
