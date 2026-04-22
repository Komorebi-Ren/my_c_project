#ifndef WORLDEXPLORE_H
#define WORLDEXPLORE_H

// 玩家位置结构体
typedef struct {
    int x;
    int y;
} PlayerPos;

//资源枚举
typedef enum {
    RES_FRUIT,//果实
    RES_FLOWER,//花
    RES_ORE//矿石
}ResType;

//资源结构体
typedef struct {
    int id;            //资源唯一ID
    char name[20];     //资源名称
    ResType type;      //资源类型
    int x, y;          //资源坐标
    int collect_range; //采集范围
    int is_collected;  //是否被采集
}Resource;

//道具类型枚举
typedef enum {
    ITEM_BALL,//精灵球——0
    ITEM_FLOWER,//花朵——1
    ITEM_ORE,//矿石——2
    ITEM_FRUIT//果实——3
}ItemType;

//道具结构体
typedef struct {
    int id;         //道具编号
    char name[20];  //道具名称
    ItemType type;  //道具类型
}Item;

extern Item all_Item[4];         //所有道具
extern int my_Item[4];           //四种道具中，角色每中道具拥有的数量
extern PlayerPos* player_pos;    //全局玩家坐标变量
extern Resource all_resource[20];//地图上的所有资源

// 函数声明
void EnterMainMap(void);                   // 进入主地图
void MovePlayer(PlayerPos* pos, char key); // 玩家移动（WASD）
int TriggerSceneEvent(PlayerPos* pos);     // 触发场景事件
void InitResources(void);                  // 资源初始化
void CollectResources(PlayerPos* pos);     // 采集资源
void InitItems(Item all_Item[]);           // 初始化道具

#endif
