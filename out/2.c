#include<stdio.h>
int main(){
    int scores[5];
    int i;
    float sum=0.0,average;

    printf("请输入5个学生的成绩:\n");

    for(i=0;i<5;i++){
        printf("请输入第%d个学生的成绩:",i+1);
        scanf("%d",&scores[i]);
        sum+=scores[i];
    }
    average=sum/5;
    printf("5个学生的平均分是:%.2f\n",average);
    return 0;
}