#include "BattleSystem.h"
#include <stdio.h>
#include <stdlib.h>

/*
    负责人：xxx
    StartBattle功能：开始战斗
        1.初始化战斗界面和双方精灵状态
        2.判断是NPC精灵还是野生精灵，
        如果为野生精灵，可以选择“捕捉”“逃跑”和释放技能，
        如果为NPC精灵，就只能选择“逃跑”和释放技能
        3.捕捉成功概率通过生成1到100的随机数，当随机数大于50时，则捕捉成功，反之则失败
    参数：player_elf——角色精灵
          enemy_elf——对手精灵/野生精灵
    返回值：void
*/
void StartBattle(Elf* player_elf, Elf* enemy_elf) {
    printf("遭遇野生%s！\n", enemy_elf->name);
}

/*
    负责人：xxx
    BattleTurn功能：回合流程
        控制战斗的回合循环，处理玩家选择、攻击、胜负判断
        技能被敌方精灵使用防御技能伤害/2
    参数：
    返回值：int——1胜利，0继续战斗，-1失败
*/
int BattleTurn(Elf* player_elf, Elf* enemy_elf) {
    // 玩家攻击
    int damage = CalculateDamage(player_elf, enemy_elf);
    enemy_elf->hp -= damage;
    printf("你造成了 %d 点伤害！\n", damage);
    if (enemy_elf->hp <= 0) return 1; // 胜利

    // 敌人攻击
    damage = CalculateDamage(enemy_elf, player_elf);
    player_elf->hp -= damage;
    printf("敌人造成了 %d 点伤害！\n", damage);
    if (player_elf->hp <= 0) return -1; // 失败

    return 0; // 继续战斗
}

/*
    负责人：xxx
    CalculateDamage功能：伤害计算
        根据属性克制规则来计算造成伤害：
        火克草，草克水，水克火，克制使得造成伤害乘2，被克制伤害/2，无属性正常伤害
    参数：attacker——进攻方
          defender——防守方
    返回值：int——造成伤害
*/
int CalculateDamage(Elf* attacker, Elf* defender) {
    int damage = 15;
    return damage;
}

/*
    负责人：xxx
    EnemyChooceSkill功能：对手技能伤害
        1.生成随机数1到4，用于选择对手精灵的技能
        2.判断技能对于我方精灵的克制关系
    参数：enemy_elf——对手精灵
*/
int EnemyChooceSkill(Elf* enemy_elf) {
    int damage = 15;
    return damage;
}


/*
    负责人：xxx
    BattleEnd功能：战斗结束
        根据战斗结果，处理后续逻辑并回到地图
*/
void BattleEnd(int result) {
    if (result == 1) {
        printf("战斗胜利！获得经验！\n");
    }
    else if (result == -1) {
        printf("战斗失败...\n");
    }
}
