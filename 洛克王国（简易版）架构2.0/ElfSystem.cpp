#include "ElfSystem.h"
#include <stdio.h>
#include <stdlib.h>



Elf elf_list[Max_Elf_List];//定义精灵列表数组
int elf_list_count=0;//当前精灵列表有多少只精灵
 Elf elf_bag[Max_Elf_Bag];//声明精灵背包数组
int elf_bag_count;//声明当前背包已存的精灵个数

/*
    负责人：xxx
    OpenElfList功能：显示精灵列表
        设计能够使用快捷键的精灵列表，
        使用快捷键“1”到“6”可以选择精灵列表里的指定精灵
    参数：void
    返回值：void
*/
void OpenElfList(void) {
    return;
}


/*
    负责人：xxx
    ElfLevelUp功能：精灵升级
        1.根据精灵的总经验值判断精灵所需要提升的等级，
        即如果elf->exp/EXP_PER_LEVEL大于当前精灵的等级，
        elf->exp/EXP_PER_LEVEL-elf->level为当前精灵需要提升的等级
        2.没提升一级PH提升10
    参数：elf——精灵结构体
    返回值：void
*/

void ElfLevelUp(Elf* elf) {
    return;
}

/*
    负责人：xxx
    UpdateCollection功能：更新图鉴
        判断已有的精灵ID，根据ID更新图鉴
    参数：elf_bag[]——精灵背包
          elf_bag_count——在精灵背包的精灵数量
    返回值：void
*/

void UpdateCollection(Elf elf_bag[],int elf_bag_count) {
    return;
}
