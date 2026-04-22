#ifndef ELFSYSTEM_H
#define ELFSYSTEM_H


#define Max_Elf_List 6 //精灵列表最大容量
#define EXP_PER_LEVEL 100//每一级升级所需要的经验
#define Skills_Num 4 //每只精灵的技能数量，包括一个防御技能，一个无属性技能，两个精灵本属性技能
#define Max_Elf_Bag 20 //背包最多能存下的精灵个数

//元素属性枚举
typedef enum {
    ATTR_NONE,//无属性
    ATTR_WATER,//水属性
    ATTR_GRASS,//草属性
    ATTR_FIRE//火属性
}ElementType;


//技能结构体
typedef struct {
    char skill[Skills_Num]; //精灵技能
    int skill_damage[Skills_Num]; //精灵技能的伤害
    ElementType skill_attribute;//精灵属性
}Skills_Str;

// 精灵结构体
typedef struct {
    int id;            //精灵的ID编号
    char name[20];     //精灵的名称
    int level;         //精灵的等级
    int hp;            //精灵的HP（生命值）
    int exp;           //精灵的总经验值
    Skills_Str skills; //精灵的技能
} Elf;

//声明精灵列表数组
extern Elf elf_list[Max_Elf_List];
//声明列表当前有多少只精灵
extern int elf_list_count;
//声明精灵背包数组
extern Elf elf_bag[Max_Elf_Bag];
//声明当前背包已存的精灵个数
extern int elf_bag_count;


// 函数声明
void OpenElfList(void);          // 显示精灵列表
void ElfLevelUp(Elf* elf);       // 精灵升级
void UpdateCollection(Elf elf_bag[], int elf_count); // 更新图鉴

#endif
