#include "GameStart.h"
#include "MainMenu.h"
#include "WorldExplore.h"
#include "ElfSystem.h"
#include "QuestSystem.h"
#include "NPCSystem.h"
#include "BattleSystem.h"
#include <stdio.h>

int main() {
    // 初始化变量
    Account acc = { 0 };
    PlayerPos pos = { 0, 0 };
    Elf my_elf = { 1, "火花", 5, 100, 0 };
    Elf enemy_elf = { 2, "喵喵", 3, 50, 0 };

    // 1. 启动与账号模块
    GameInit();
    ShowStartMenu();
    LoginAccount(&acc);


    // 2. 进入世界探索
    EnterMainMap();
    MovePlayer(&pos, 'd');
    MovePlayer(&pos, 'd');

    // 3. 触发事件
    int event = TriggerSceneEvent(&pos);
    if (event == 1) {
        NPCDialog(1);
    }
    else if (event == 2) {
        // 触发战斗
        StartBattle(&my_elf, &enemy_elf);
        int result = BattleTurn(&my_elf, &enemy_elf);
        BattleEnd(result);
    }

    return 0;
}
