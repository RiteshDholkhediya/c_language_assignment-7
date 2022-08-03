#include<stdio.h>
#include<conio.h>
int main(){

    int a,b,i,j,f;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    if(a<2){
        a=2;
    }
    
    for(i=a;i<=b;i++){
        f=1;
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                f=0;
                break;
            }
        }
        if(f){
            printf("%d ",i);
        }

    }
    getch();
    return 0;
}