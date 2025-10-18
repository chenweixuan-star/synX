// finger-guessing.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<string.h>

int main() {
    srand(time(NULL));
    int user, computer;
    int user_wins=0,computer_wins=0;
    int cheat_mode=0;
    char input[10];

    printf("猜拳游戏:0-石头,1-剪刀,2-布\n");
    printf("输入zzz进入必赢模式\n");
    printf("三胜制,平局不计分。\n");

    while(user_wins<3 && computer_wins<3){
        printf("请输入你的选择(0/1/2或zzz):");
        scanf("%s",input);
        if(stricmp(input,"zzz")==0){
            cheat_mode=1;
            printf("【作弊模式开启】你将每把必赢!\n");
            continue;
        }
        if(sscanf(input,"%d",&user)!=1){
            printf("输入无效!\n");
            continue;
        }

        if (user < 0 || user > 2) {
            printf("输入无效，请输入 0, 1 或 2\n");
            continue;
        }
        if(cheat_mode){
            computer=(user+1)%3;
        }else{
            computer = rand() % 3;
        }

        printf("电脑出: %d\n",computer);

        if ((user == 0 && computer == 1) ||
            (user == 1 && computer == 2) ||
            (user == 2 && computer == 0)) {
                user_wins++;
                printf("你赢了！当前比分%d:%d\n",user_wins,computer_wins);
        } else if (user == computer) {
            printf("平局，不计分。\n");
        } else {
            computer_wins++;
            printf("你输了，当前比分%d:%d\n",user_wins,computer_wins);
        }
    }
    if(user_wins==3){
        printf("恭喜你，获得最终胜利!\n");
    }else{
        printf("很遗憾，电脑获胜!\n");
    }
    return 0;
}