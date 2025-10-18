// finger-guessing.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<Windows.h>
volatile int timeout_flag=0;

VOID CALLBACK TimeoutHandler(HWND hwnd,UINT uMsg,UINT_PTR idEvent,DWORD dwTime){
    timeout_flag=1;
    KillTimer(NULL,idEvent);
}

int main() {
    UINT_PTR timer_id;
    srand(time(NULL));
    int user, computer;
    printf("猜拳游戏:0-石头,1-剪刀,2-布\n ");
    printf("限时10秒内获胜,否则退出。\n");
    timer_id=SetTimer(NULL,0,1000*10,TimeoutHandler);

    while(1){
        if(timeout_flag){
            printf("\n时间到!游戏结束。\n");
            break;
        }
        printf("请输入你的选择(0/1/2):");
        if(sacnf("%d",&user)!=1){
            printf("输入无效!\n");
            while(getchar()!='\n');
            continue;
        }
        if (user < 0 || user > 2) {
            printf("输入无效，请输入 0, 1 或 2\n");
            continue;
        }

        computer = rand() % 3;

        printf("电脑出: %d\n", computer);

        if ((user == 0 && computer == 1) ||
            (user == 1 && computer == 2) ||
            (user == 2 && computer == 0)) {
            printf("你赢了！游戏结束。\n");
            KillTimer(NULL,timer_id);
            break;
        } else if (user == computer) {
            printf("平局，再来一次！\n");
        } else {
            printf("你输了，继续！\n");
        }
        Sleep(100);
        MSG msg;
        PeekMessage(&msg,NULL,0,0,PM_REMOVE);
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}