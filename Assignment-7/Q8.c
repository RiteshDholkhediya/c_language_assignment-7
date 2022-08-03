
#include<stdio.h>
#include<conio.h>
int main(){
    int n,i,f=1;
    printf("Enter a number");
    scanf("%d",&n);
    if(n<1)
        n=1;

    while(1){
        n=n+1;
        f=1;
        for(i=2;i<=n/2;i++){
            if(n%i==0){
                f=0;
                break;
            }
        }
        if(f)
            break;
    }

    printf("Next prime nmber is %d",n);
    getch();
    return 0;
}