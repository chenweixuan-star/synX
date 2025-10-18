#include<stdio.h>
int main(){
    int count,i;
    float sum=0.0,average;

    printf("请输入学生人数:");
    scanf("%d",&count);

    int scores[count];
    for(i=0;i<count;i++){
        printf("请输入第%d个学生的成绩:",i+1);
        scanf("%d",&scores[i]);
        sum+=scores[i];
    }
    average=sum/count;
    printf("%d个学生的平均分是:%.2f\n",count,average);

return 0;
}