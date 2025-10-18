#include<stdio.h>
int main(){
int i=1,n;
int a=0,b=1,next;

printf("请输入打印页数:");
scanf("%d",&n);

printf("斐波那契数列的前%d项为:",n);

while(i<=n){
    if(i==1){
        next=a;
    }else if(i==2){
        next=b;
    }else{
        next=a+b;
        a=b;
        b=next;
    }
    printf("%d",next);
    i++;
}
printf("\n");
return 0;
}