#ifndef BATTLESYSTEM_H
#define BATTLESYSTEM_H

#include "ElfSystem.h"


// 函数声明
void StartBattle(Elf* player_elf, Elf* enemy_elf);  // 开始战斗
int BattleTurn(Elf* player_elf, Elf* enemy_elf);    // 回合流程
int CalculateDamage(Elf* attacker, Elf* defender);  // 伤害计算
int EnemyChooceSkill(Elf* enemy_elf);				// 对手技能伤害
void BattleEnd(int result);                         // 战斗结束

#endif
