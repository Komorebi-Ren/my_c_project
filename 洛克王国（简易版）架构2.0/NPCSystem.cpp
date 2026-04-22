
#include "NPCSystem.h"
#include <stdio.h>

/*
    负责人：xxx
    InitNPCs功能：NPC数据初始化
        初始化NPC的名称、坐标、对话、类型、精灵等
    参数：void
    返回值：void
*/
void InitNPCs(void) {
    return;
}

/*
    负责人：xxx
    NPCDialog功能：NPC对话
        1.根据NPC的ID读取对话文本
        2.在EasyX上绘制对话文本
    参数：npc_id——NPC的ID
    返回值：void
*/
void NPCDialog(int npc_id) {
    printf("与NPC %d 对话中...\n", npc_id);
}


/*
    负责人：xxx
    OpenShop功能：商店界面
        1.绘制商店界面，显示可购买的道具以及道具的名称、价格
        2.实现购买逻辑
    参数：void
    返回值：void
*/
void OpenShop(void) {
    printf("打开商店...\n");
}


