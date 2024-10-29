#include <stdio.h>
int main(){
	int int_Arr[4];
	char char_Arr[4];
	short short_Arr[4];
	double double_Arr[4];
	
	printf("Integer Array:\n");
	for(int i=0; i<4 ; i++){
		printf("%p\n", &int_Arr[i]);
	}
	printf("Character Array:\n");
        for(int i=0; i<4 ; i++){
                printf("%p\n", &char_Arr[i]);
        }
	printf("Short Array:\n");
	 for(int i=0; i<4 ; i++){
                printf("%p\n", &short_Arr[i]);
        }
	 printf("Double Array:\n");
         for(int i=0; i<4 ; i++){
                printf("%p\n", &double_Arr[i]);
        }

}
