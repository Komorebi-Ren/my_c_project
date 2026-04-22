#include "WorldExplore.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

Item all_Item[4];         //所有道具
int my_Item[4];           //四种道具中，角色每种道具拥有的数量
PlayerPos* player_pos; //全局玩家坐标变量
Resource all_resource[20];//地图上的所有资源

/*
    负责人：xxx
    EnterMainMap功能：进入主地图
        1.EasyX地图界面初始化
        - 绘制地图背景
        - 绘制人物形象
        - 绘制地图边界
        2.玩家初始位置设置
        3.初始化玩家状态
        4.初始化NPC
        5.初始化精灵
        6.点击按钮Z/z打开道具界面，X/x打开精灵界面，C/c打开任务界面，V/v打开图鉴，B/b打开设置
    参数：void
    返回值：void
*/
void EnterMainMap(void) {
    printf("进入洛克王国世界...\n");
    srand((unsigned int)time(NULL)); // 初始化随机数种子
}

/*
    负责人：xxx
    MovePlayer功能：玩家移动（WASD）
        1.玩家移动逻辑（WASD）
        2.更新玩家坐标
        3.边界限制
        4.碰撞逻辑（如：撞到NPC，撞到精灵等）
    参数：pos——玩家坐标
          key——用户按键的方向
    返回值：void
*/
void MovePlayer(PlayerPos* pos, char key) {
    switch (key) {
    case 'w': pos->y--; break;
    case 's': pos->y++; break;
    case 'a': pos->x--; break;
    case 'd': pos->x++; break;
    default: break;
    }
    printf("玩家当前位置：(%d, %d)\n", pos->x, pos->y);
}


/*
    负责人：xxx
    TriggerSceneEvent功能：触发场景事件
        1.当角色移动到NPC某个范围时，界面显示一句话“F——进行对话/开始战斗”，点击“F”进入对话/开始战斗
        2.
    参数：pos——角色坐标
    返回值：void
*/
int TriggerSceneEvent(PlayerPos* pos) {
    // 简单示例：根据坐标或随机触发事件
    if (pos->x == 5 && pos->y == 5) {
        return 1; // 触发NPC交互
    }
    else if (rand() % 100 < 15) {
        return 2; // 随机遇敌
    }
    return 0; // 无事件
}

/*
    负责人：xxx
    InitResources功能：资源初始化
        用EasyX在地图上初始化资源
    参数：void
    返回值：void
*/
void InitResources(void) {

}

/*
    负责人：xxx
    CollectResources功能：采集资源
        当玩家在一定范围是可以点击F进行采集资源，如“F——采集资源”
        采集资源后，放入个人道具中，用my_Item[4]来存，每个下标对应道具枚举的顺序
    参数：pos——角色坐标
    返回值：void
*/
void CollectResources(PlayerPos* pos) {
    printf("采集资源中...\n");
}

/*
    负责人：xxx
    InitItems功能：初始化所有道具
    参数：all_Item[]——道具结构体的数组
    返回值：void
*/
void InitItems(Item all_Item[]) {

}
