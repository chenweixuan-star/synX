#include<stdio.h>
long long fact(long long n);
int main(){
    long long m;
    printf("请输入一个非负整数:");
    scanf("%lld",&m);
    printf("%lld!=%lld\n",m,fact(m));
    return 0;
}
long long fact(long long n){
    if(n<=1){
        return 1;
    }
    else return fact(n-1)*n;
}