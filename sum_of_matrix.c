#include <stdio.h>

int main() {
    int a[3][3], b[3][3], sum[3][3];
    
     
    
    printf("Enter values of the matrix A :\n");
    for(int i = 0; i < 3;i++){
    for(int j = 0; j < 3;j++){
      printf("arr[%d] [%d] : ", i ,j);
      scanf("%d",&a[i][j]);
        
    }
    }
    printf("matrix elements are :\n");
    for(int i = 0; i < 3;i++){
    for(int j = 0;j < 3;j++){
        printf("%d\t",a[i][j]);
    }
    printf("\n");
    }
    
    printf("Enter values of the matrix B :\n");
    for(int i = 0; i < 3;i++){
    for(int j = 0; j < 3;j++){
      printf("arr[%d] [%d] : ", i ,j);
      scanf("%d",&b[i][j]);
        
    }
    }
    printf("matrix elements are :\n");
    for(int i = 0; i < 3;i++){
    for(int j = 0;j < 3;j++){
        printf("%d\t",b[i][j]);
    }
    printf("\n");
    }
     for(int i = 0; i < 3;i++){
    for(int j = 0; j < 3;j++){
    sum[i][j] = a[i][j] + b[i][j] ;
    }
     }
      printf(" sum of matrix a and b :\n");
    for(int i = 0; i < 3;i++){
    for(int j = 0;j < 3;j++){
        printf("%d\t",sum[i][j]);
    }
    printf("\n");
    }
    
     

    return 0;
}
