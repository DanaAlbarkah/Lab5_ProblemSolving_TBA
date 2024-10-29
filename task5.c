#include <stdio.h>
int takeInput(int A[3][3], int x[3]);

int main() {
    int A[3][3];
    int x[3];
    int y[3]; 
    
    int result = takeInput(A, x);
    
   
    if (result == 1) {
   
        for (int i = 0; i < 3; i++) {
            y[i] = 0;
            for (int j = 0; j < 3; j++) {
                y[i] += A[i][j] * x[j];  
            }
        }
        
       
        printf("\nThe result of multiplying matrix A with vector x is:\n");
        for (int i = 0; i < 3; i++) {
            printf("y[%d] = %d\n", i, y[i]);
        }
    } else {
        printf("Error: Input failed.\n");
    }
    
    return 0;}

    
    
  int takeInput(int A[3][3], int x[3]) {

    printf("Enter the elements of a 3x3 matrix A:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    
    printf("\nEnter the elements of the vector x (size 3):\n");
    for (int i = 0; i < 3; i++) {
        printf("x[%d]: ", i);
        scanf("%d", &x[i]);
    }
    
    
    return 1;
}

