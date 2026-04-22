#ifndef NPCSYSTEM_H
#define NPCSYSTEM_H

#include "Elfsystem.h"

//NPC对话文本结构体
typedef struct {
	char text[100]; //对话文本
}Dialog;

//NPC类型枚举
typedef enum {
	NPC_TYPE_QUEST,//任务NPC（用于完成任务）
	NPC_TYPE_SHOP,//商人NPC
	NPC_TYPE_BATTLE//对战NPC
}NPCtype;

//NPC基础信息结构体
typedef struct {
	int id;                     //NPC唯一ID
	char name[20];              //NPC名称
	int x, y;                   //NPC在地图上的坐标
	int talk_range;             //对话触发范围
	Dialog dialogs[10];         //对话数组，支持多轮对话
	int dialog_count;           //对话轮数
	NPCtype type;               //NPC类型
	Elf* enemy_elf;				//对战NPC精灵，非对战NPC赋为NULL
}NPC;

//商店道具结构体
typedef struct {
	char name[20];     //道具名称
	int price;        //道具价格
}ShopItem;


// 函数声明
void InitNPCs(void);         //NPC数据初始化
void NPCDialog(int npc_id);  // NPC对话
void OpenShop(void);         // 商店界面


#endif
