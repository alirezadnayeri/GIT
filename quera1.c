#include <stdio.h>
#include <math.h>
int main(void)
{
   
int a,n;
int i,k,j;
int count=0;
scanf("%d%d",&a,&n);
for(j=2;j<a;j++){
    count=0;
    for(i=2;i<=sqrt(j);i++){
        if (j%i==0){
            count=1+count;
        }
    }
    
    if(count==0){
        k=1;
        int temp=j;
        while(temp/10>=1){
            k=k+1;
            temp=temp/10;
        }
        if(k==n){
            printf("%d\n",j);

        }
       
        
    }

}
printf("-1");



return 0;
}
