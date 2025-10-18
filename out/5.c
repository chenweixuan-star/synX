#include<stdio.h>

int main(){
    int n,i;
    long long result=1;
    
    printf("请输入一个非负整数：");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        result*=i;
    }
    printf("%d!=%lld\n",n,result);
    return 0;

}