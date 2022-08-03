#include<stdio.h>
#include<conio.h>
int main(){

    int a,b,r;
    printf("Enter two numbers ");
    scanf("%d%d",&a,&b);
    while(1){
        if(a>b){
            if(a%b==0){
                r=b;
                break;
            }
            a=a%b;
        }
        else{
            if(b%a==0){
                r=a;
                break;
            }
            b=b%a;
        }
    }

    printf("Hcf is %d",r);
    getch();
    return 0;
}