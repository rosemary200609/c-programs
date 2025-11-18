#include <stdio.h>

int main() {
int t1 = 0,t2 = 1,n,next;
printf("Enter numbet of terms: ");
scanf("%d",&n);
if(n == 1){
 printf("%d",t1);
}
if(n==2){
printf("%d",t2);
}

for(int i = 3;i <= n;i++){
    next = t1 + t2;
printf(" %d",next);
t1 = t2;
t2 = next;
}
printf("\n");
    return 0;
}