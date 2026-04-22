#include "GameStart.h"
#include <stdio.h>
#include <string.h>
#include <easyx.h>

/*
    负责人：xxx
    GameInit功能：
        1.加入音乐
        2.初始化游戏音量
    参数：void
    返回值：void
*/
void GameInit(void) {

}

/*
    负责人：xxx
    ShowStartMenu功能：显示主菜单界面
        1.用easyx写主菜单界面
        2.给按钮设置鼠标触碰光标
        3.用鼠标点击按钮会跳转到对应函数
    参数：void
    返回值：void
*/
void ShowStartMenu(void) {
    printf("===== 洛克王国（简易版）=====\n");
    printf("1. 登录\n2. 注册\n3. 设置\n4. 退出\n");
    // 菜单选择逻辑可以在这里写
}


/*
    负责人：xxx
    RegisterAccount功能：注册账号
        1.设计注册界面
        2.用鼠标点击用户名框可以输入用户名
        3.点击密码框可以输入密码
        4.设置两个按钮，一个“返回”按钮，一个“注册”按钮，也需要有光标，点击可转到对应函数
        5.点击“注册”后，用函数：VerifyAccount判断密码和用户名是否已存在以及是否符合格式，
        如果存在给于用户提示，不存在保存并进入游戏
    参数：acc——账号结构体指针
    返回值 ：bool ——成功返回true，失败返回false
*/
bool RegisterAccount(Account* acc) {
    printf("请输入用户名：");
    scanf("%s", acc->username);
    printf("请输入密码：");
    scanf("%s", acc->password);
    acc->is_logged_in = 1;
    return true; // 注册成功
}


/*
    负责人：xxx
    LoginAccount功能：登录账号
        1.1.设计登录界面
        2.用鼠标点击用户名框可以输入用户名
        3.点击密码框可以输入密码
        4.设置两个按钮，一个“返回”按钮，一个“登录”按钮，也需要有光标，点击可转到对应函数
        5.点击“登录”后，用函数：VerifyAccount判断密码和用户名是否存在以及格式是否符合，
        如果存在进入游戏，不存在给于用户提示
    参数：acc——账号结构体指针
    返回值 ：bool ——成功返回true，失败返回false
*/
bool LoginAccount(Account* acc) {
    // 简单示例：直接设为登录成功
    acc->is_logged_in = 1;
    printf("登录成功！\n");
    return true;
}


/*
    负责人：xxx
    VerifyAccount功能：账号验证
        1.验证传入账号结构体的用户名与密码是否符合要求：
        （用户名只能输入英文，并且字符个数为1到10个）
        （密码只能用大小写英文和数字，密码大小在10到16位）
        如果不符合要求给于用户提示
        2.验证该用户名与密码是否已注册
    参数：acc——账号结构体指针
    返回值 ：bool ——成功返回true，失败返回false
*/
bool VerifyAccount(Account* acc) {
    // 简单校验：用户名长度≥3，密码长度≥6
    if (strlen(acc->username) < 3 || strlen(acc->password) < 6) {
        printf("账号或密码不符合要求！\n");
        return false;
    }
    return true;
}

/*
    负责人：xxx
    OpenSettings功能：在主菜单打开设置
        绘制设置界面，包括音量，音效，操作指南
    参数：void
    返回值：void
*/
void OpenSettings(void) {

}