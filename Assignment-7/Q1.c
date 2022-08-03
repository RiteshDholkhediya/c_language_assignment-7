#include<stdio.h>
#include<conio.h>
int main(){
    int a=-1,b=1,c,n,i=1;
    printf("Enter the nth term of the fibonacci series");
    scanf("%d",&n);
    while(i<=n){
        i++;
        c=a+b;
        a=b;
        b=c;
    }
    printf("%d term is %d",i-1,c);
    getch();
    return 0;
}



// #include<stdio.h>
// #include<conio.h>
// int main(){

//     getch();
//     return 0;
// }