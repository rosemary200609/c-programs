#include <stdio.h>
int main() {
int num; // Write C code here
    printf("ENTER NUMBER: ");
    scanf("%d",&num);
    switch(num){
    case 1:
    printf("MONDAY");
    break;
    case 2:
    printf("TUESDAY");
    break;
    case 3:
    printf("WENSDAY");
    break;
    case 4:
    printf("THURSDAY");
    break;
    case 5:
    printf("FRIDAY");
    break;
    case 6:
    printf("SATARDAY");
    break;
    default:
    printf("SUNDAY");
    break;
    }
    return 0;
