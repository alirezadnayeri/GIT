#include <stdio.h>
int main(void){
    int n,temp,sum;
    scanf("%d",&n);
    temp=n;
    sum=n%10;
    while(temp/10!=0){
        temp=temp/10;
    }
    sum=sum+temp;
printf("%d",sum);
    
    


    return 0;
}