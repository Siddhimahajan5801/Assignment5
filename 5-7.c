#include<stdio.h>

int main(){
    int i,n;

    printf("Enter the number N\n");
    scanf("%d",&n);

    printf("The first N even natural numbers in reverse order is:\n");

for (i=2*n;i>1;i=i-2 ){
    printf("%d ",i);
}
    return 0;
}