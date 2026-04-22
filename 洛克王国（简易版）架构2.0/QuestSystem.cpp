#include "QuestSystem.h"
#include <stdio.h>

Quest MainQuest[3];//主线任务个数
extern Quest SideQuest[3];//支线任务个数
extern Quest DailyQuest[3];//日常任务个数

/*
    负责人：xxx
    CreatQuest功能：初始化所有任务
        创建主线、支线、日常任务
    参数：void
    返回值：void
*/

void CreatQuest(void) {
    return;
}


/*
    负责人：xxx
    AcceptQuest功能：接取任务（适配EasyX点击逻辑）
        1.根据任务类型找到对应的任务指针
        2.检查任务状态，只有未接取才能接
        3.接取任务，更新状态
    参数：Main[]——主线任务
          Side[]——支线任务
          Daily[]——日常任务
          index——任务在数组里的下标
          type——任务类型（主线/支线/日常）
    返回值：void

*/
void AcceptQuest(Quest Main[], Quest* Side[], Quest* Daily[],int index,QuestType type) {
    printf("接取任务：%d\n", Main[0].id);
}


/*
    负责人：xxx
    CheckQuestProgress功能：更新任务进度
        1.只有正在进行的任务才能更新进度
        2.用EasyX绘制进度条
        3.判断任务是否达到目标进度
    参数：q——任务结构体指针
    返回值：void
*/
void CheckQuestProgress(Quest* q) {
    printf("任务进度：%d/100\n", q->progress);
}


/*
    负责人：xxx
    CompleteQuest功能：完成任务
        1.检查任务状态，只有已完成的任务才能提交
        2.标记任务为已完成
    参数：q——任务结构体指针
    返回值：void
*/
void CompleteQuest(Quest* q) {
    q->is_completed = 1;
    printf("任务完成！\n");
}


/*
    负责人：xxx
    GetQuestReward功能：领取任务奖励
        1.检查任务状态，只有已完成并且未领取的任务才能领
        2.标记该任务已领取奖励
    参数：q——任务结构体指针
    返回值：void
*/
void GetQuestReward(Quest* q) {
    printf("领取任务奖励...\n");
}


/*
    负责人：xxx
    DrawQuestUI功能：绘制任务界面
        1.初始化EasyX窗口
        2.绘制主线、支线、日常任务以及其按钮
    参数：Main[]——主线任务
          Side[]——分支任务
          Daily[]——日常任务
    返回值：void
*/
void DrawQuestUI(Quest Main[], Quest Side[], Quest Daily[]) {

}