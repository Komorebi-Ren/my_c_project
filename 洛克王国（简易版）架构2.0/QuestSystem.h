#ifndef QUESTSYSTEM_H
#define QUESTSYSTEM_H

#include <stdbool.h>

//任务类型枚举
typedef enum {
    QUEST_TYPE_MAIN,//主线任务
    QUEST_TYPE_SIDE,//支线任务
    QUEST_TYPE_DAILY//日常任务
}QuestType;

//按钮状态枚举
typedef enum {
    QUEST_STATUS_UNACCEPTED,//未接取
    QUEST_STATUS_ACCEPTED,//正在进行
    QUEST_STATUS_COMPLETED,//已完成
    QUEST_STATUS_REWARDED//已领取奖励
}QuestStatus;

// 任务结构体
typedef struct {
    int id;              //任务ID
    QuestType type;      //任务类型
    int progress;        //当前进度
    int target_progress; //目标进度
    bool is_accepted;    //任务是否已接取
    bool is_completed;   //任务是否完成
    bool is_rewarded;    //任务是否已领取奖励
} Quest;

extern Quest MainQuest[3];//主线任务个数
extern Quest SideQuest[3];//支线任务个数
extern Quest DailyQuest[3];//日常任务个数

// 函数声明
void CreatQuest(void);                                                // 创建任务
void AcceptQuest(Quest Main[], Quest* Side[], Quest* Daily[]);        // 接取任务
void CheckQuestProgress(Quest* q);                                    // 任务进度
void CompleteQuest(Quest* q);                                         // 完成任务
void GetQuestReward(Quest* q);                                        // 领取奖励

#endif
