#include<stdio.h>
#include<conio.h>
int main(){
    int n,c=0,a=-1,b=1,i=0;
    printf("Enter a number");
    scanf("%d",&n);

    
        while(c<n){
            i++;
            a=b;
            b=c;
            c=a+b;
        }


    if(c==n){
        if(n==1)
            printf("%d is at %d position",n,i);
        else
            printf("%d is at %d position",n,i+1);
        
    }
    else
        printf("Value not found");
    getch();
    return 0;
}