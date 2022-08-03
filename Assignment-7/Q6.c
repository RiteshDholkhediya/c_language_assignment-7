#include<stdio.h>
#include<conio.h>
int main(){

    int n,i=2,f,j;
    for(i=2;i<100;i++){
        f=1;
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                f=0;
                break;
            }
            
        }
        if(f)
            printf("%d ",i);
    }
    getch();
    return 0;
}