// finger-guessing.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int user, computer;
    printf("猜拳游戏开始！输入 0(剪刀) 1(石头) 2(布): ");

    while (1) {
        scanf("%d", &user);
        if (user < 0 || user > 2) {
            printf("输入无效，请输入 0, 1 或 2\n");
            continue;
        }

        computer = rand() % 3;

        const char* choices[] = {"剪刀", "石头", "布"};
        printf("你出: %s, 电脑出: %s\n", choices[user], choices[computer]);

        if ((user == 0 && computer == 2) ||
            (user == 1 && computer == 0) ||
            (user == 2 && computer == 1)) {
            printf("你赢了！游戏结束。\n");
            break;
        } else if (user == computer) {
            printf("平局，再来一次！\n");
        } else {
            printf("你输了，继续！\n");
        }
    }

    return 0;
}