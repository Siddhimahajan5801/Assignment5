#include<stdio.h>

int main(){
    int i,n;

    printf("Enter the number N\n");
    scanf("%d",&n);

    printf("Squares of first N natural numbers are:\n");

    for (i=1;i<=n;i++){
        printf("%d ",i*i);
    }

    return 0;
}