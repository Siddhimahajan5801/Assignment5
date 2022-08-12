#include<stdio.h>

int main(){
    int i,n;

    printf("Enter the number N\n");
    scanf("%d",&n);

    printf("The first N natural numbers are:\n");

    for (i=1;i<=n;i++){
        printf("%d ",i);
    }
    return 0;
}