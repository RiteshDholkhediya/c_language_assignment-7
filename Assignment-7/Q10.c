
#include<stdio.h>
#include<conio.h>
int main(){
    int sum,c,i1=1,i2,i3,i4,j,k;
    while(i1<1000){
        sum=0;
        c=0;
        i2=i1;
        i3=i1;
        i4=i1;
        while(i2){
            c++;
            i2=i2/10;
        }

        while(i3){
            k=1,j=1;
            while(k<=c){
                j=j*(i3%10);
                k++;
            }
            sum=sum+j;
            i3=i3/10;
        }
        if(sum==i4){
            printf("%d ",i4);
        }
        i1++;
    }
    getch();
    return 0;
}