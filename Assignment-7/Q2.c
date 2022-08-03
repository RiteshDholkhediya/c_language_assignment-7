#include<stdio.h>
#include<conio.h>
int main(){
    int a=-1,b=1,c,n,i=1;
    printf("Enter a number");
    scanf("%d",&n);
    while(i<=n){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        i++;

    }
    getch();
    return 0;
}