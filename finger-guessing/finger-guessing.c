// finger-guessing.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int user, computer;
    int user_wins=0,computer_wins=0;
    printf("猜拳游戏:0-石头,1-剪刀,2-布\n");
    printf("三胜制,平局不计分。\n");

    while(user_wins<3 && computer_wins<3){
        printf("请输入你的选择(0/1/2):");
        scanf("%d",&user);

        if (user < 0 || user > 2) {
            printf("输入无效，请输入 0, 1 或 2\n");
            continue;
        }

        computer = rand() % 3;

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