#include<stdio.h>

int main(){

    int i,n;

    printf("Enter the number N\n");
    scanf("%d",&n);

    printf("The first N natural numbers in reverse order is:\n");

    for (i=n;i>=1;i--){
        printf("%d ",i);
    }
    return 0;
}