
#include<stdio.h>
#include<conio.h>
int main(){

    int sum=0,c=0,n1,n2,n3,i,j;
    printf("Enter a number");
    scanf("%d",&n1);
    n2=n1;
    n3=n1;
    while(n1){
        c++;
        n1=n1/10;
    }

    printf("%d\n",c);
    while(n2){
        i=1;j=1;
        while(i<=c){
            j=j*(n2%10);
            i++;
        }

        sum=sum+j;
        n2=n2/10;
    }

    if(sum==n3){
        printf("%d is an armstrong number %d",n3,sum);
    }
    else
        printf("%d is not an armstrong number %d",n3,sum);
    getch();
    return 0;
}