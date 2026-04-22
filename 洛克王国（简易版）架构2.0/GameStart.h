#ifndef GAMESTART_H
#define GAMESTART_H


// 账号结构体
typedef struct {
    char username[11];     //用户名
    char password[17];     //用户密码
    bool is_logged_in;      // 判断是否已注册 false未注册 true已已注册
} Account;

// 函数声明
void GameInit(void);                 //游戏初始化
void ShowStartMenu(void);            // 主菜单界面
bool RegisterAccount(Account* acc);  // 注册账号
bool LoginAccount(Account* acc);     // 登录账号
bool VerifyAccount(Account* acc);    // 账号验证
void OpenSettings(void);             //在主菜单打开设置

#endif
