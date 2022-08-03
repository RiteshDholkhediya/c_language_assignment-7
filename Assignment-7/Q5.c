#include<stdio.h>
#include<conio.h>
int main(){

    int a,b,hcf;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    while(1){
        if(a>b){
            if(a%b==0){
                hcf=b;
                break;
            }
            a=a%b;
        }

        else{
            if(b%a==0){
                hcf=a;
                break;
            }
            b=b%a;
        }
    }

    if(hcf==1){
        printf("numbers are co-prime");
    }
    else
        printf("Numbers are not co prime");
    getch();
    return 0;
}