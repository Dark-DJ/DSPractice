#include <iostream>

using namespace std;

struct Role {
    char *name; // 姓名
    int level;  // 等級
    int hp; // hit points 血量
    int ap; // attack power 攻擊力
    int dp; // defence power 防禦力
    int sp; // spirit power 精神能量
};

void dump_role(Role& role) {
    cout << "名稱：   " << role.name << endl;
    cout << "等級：   " << role.level << endl;
    cout << "血量：   " << role.hp << endl;
    cout << "攻擊力： " << role.ap << endl;
    cout << "防禦力： " << role.dp << endl;
    cout << "精神能量: " << role.sp <<endl; 
}

void test_role() {
    char name[] = "路人甲";

    struct Role role;

    role.name = name;
    role.level = 1;
    role.hp = 10;
    role.ap = 1;
    role.dp = 1;
	role.sp = 100;
	
    dump_role(role);
}

int main(int argc, char *argv[]) {
    test_role();
}
