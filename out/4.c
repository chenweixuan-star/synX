#include<stdio.h>
#define MAX_SCORE 100
#define MIN_SCORE 0
int main(){
    int n,i;
    float sum=0.0,average;

    printf("请输入学生人数：");
    scanf("%d",&n);

    int scores[n];
    int freq[MAX_SCORE+1]={0};

    printf("请输入%d个学生的成绩:\n",n);
    printf("请输入%d个学生的成绩(0-100分):\n",n);

    for(i=0;i<n;i++){
        printf("请输入第%d个学生的成绩:",i+1);
        scanf("%d",&scores[i]);
        sum+=scores[i];
        freq[scores[i]]++;
    }
    average=sum/n;
    printf("%d个学生的平均分是:%.2f\n",n,average);

    printf("\n分数分布统计:\n");
    printf("分数    人数\n");
    printf("============\n");

    int count_printed=0;
    for(i=MIN_SCORE;i<=MAX_SCORE;i++){
        if(freq[i]>0){
            printf("%-8d%d\n",i,freq[i]);
            count_printed++;
        }
    }
return 0;

}