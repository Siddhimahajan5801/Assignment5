#include<stdio.h>

int main(){
    int i,n;

    printf("Enter the number N\n");
    scanf("%d",&n);

    printf("The table of %d is:\n",n);

    for (i=1;i<=10;i++) {
        printf("%dx%d=%d\n",n,i,i*n);
    }
    return 0;
}