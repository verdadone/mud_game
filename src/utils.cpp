#include"utils.h"
#include<windows.h>
void generate_name(string &n)
{ //产生一个随机的名字
    char name[4] = {0};
    name[0] = 97 + rand() % 26;
    name[1] = 97 + rand() % 26;
    name[2] = 97 + rand() % 26;
    n = name;
}

int generate_increment(int n, int range)
{ //值越大，increment越小 可以加异常
    if (n >= 0 && n < range / 6)
    {
        return 6;
    }
    if (n >= range / 6 && n < range / 3)
    {
        return 5;
    }
    if (n >= range / 3 && n < range / 2)
    {
        return 4;
    }
    if (n >= range / 2 && n < 2 * range / 3)
    {
        return 3;
    }
    if (n >= 2 * range / 3 && n < 5 * range / 6)
    {
        return 2;
    }
    if (n >= 5 * range / 6 && n <= range)
    {
        return 1;
    }
    return 0; //此处应该抛出异常
}
void show_medal(people &player,int day)
{
    Sleep(delay_time);
    //day
    if(day<=10)
        cout<<"********英年早逝*********"<<endl;
    if(day>10&&day<=40)
        cout<<"********勉强生存*********"<<endl;
    if(day>40)
        cout<<"********成功立足*********"<<endl;
    //happiness
    if(player.get_happiness()>=150)
        cout<<"*******非常幸福********"<<endl;
    if (player.get_happiness() < 150 && player.get_happiness()>=60)
        cout << "*****勉强幸福********" << endl;
    if (player.get_happiness() < 60 && player.get_happiness() >= 30)
        cout << "*****福祸相依********" << endl;
    if (player.get_happiness() < 30 )
        cout << "*****悲惨世界********" << endl;
    //money
    if (player.get_money() >= 150)
        cout << "*******富可敌国********" << endl;
    if (player.get_money() < 150 && player.get_money() >= 100)
        cout << "*******打工皇帝********" << endl;
    if (player.get_money() < 100 && player.get_money() >= 50)
        cout << "*******全面小康********" << endl;
    if (player.get_money() < 50 && player.get_money() >= 20)
        cout << "*******温饱线********" << endl;
    if (player.get_money() < 50 && player.get_money() >= 1)
        cout << "*******扶贫对象********" << endl;
    if (player.get_money() ==0)
        cout << "*******特别成就：身无分文********" << endl;
}
void show_res(people &player,int day)
{ //死亡结语
    player.show();
    cout << "无论你生前如何，现在你永远的闭上了眼睛，一切归零。";
    

    cout <<"根据您生前的所作所为，恭喜您获得了"<<endl;
    show_medal(player,day);
}

void start_view() //起始的展示
{
    // cout << "//*******************************************************************************************************************//" << endl;
    // cout << "//模拟人生" << endl;
    // Sleep(delay_time);
    // cout << "//该游戏是一个人生模拟mud游戏" << endl;
    // Sleep(delay_time);
    // cout << "//" << endl;
    // Sleep(delay_time);
    // cout << "//people类： " << endl;
    // Sleep(delay_time);
    // cout << "//1.属性：幸福度、智商、情商、体力、金钱、伴侣" << endl;
    // Sleep(delay_time);
    // cout << "//2.物品栏" << endl;
    // Sleep(delay_time);
    // cout << "//" << endl;
    // Sleep(delay_time);
    // cout << "//place类：该类为base类，其下继承了各种子类，比如教室、体育馆、实验室、工地、酒吧、网吧、办公楼等" << endl;
    // Sleep(delay_time);
    // cout << "//该类用于表征所有地点类都会具有的信息" << endl;
    // Sleep(delay_time);
    // cout << "//每个地点类：" << endl;
    // Sleep(delay_time);
    // cout << "//1.属性：这个视地点而定，每个地点有自己特定的属性；不如说教室类就有学习氛围属性" << endl;
    // Sleep(delay_time);
    // cout << "//2.函数：主要分为两类；" << endl;
    // Sleep(delay_time);
    // cout << "//第一类为生成事件函数，目标是根据输入的人的属性以及一定的随机值生成相应的事件" << endl;
    // Sleep(delay_time);
    // cout << "//第二类为事件函数，输出发生的事件，并且对人的属性进行修改" << endl;
    // Sleep(delay_time);
    // cout << "//*******************************************************************************************************************//" << endl;
    // Sleep(delay_time);
    // cout << "按下任意键开始" << endl;
    // Sleep(delay_time);
    cout << "你出生在了一个陌生的城市，您将在这个城市生活一百天，在这一百天里，您可以自由生活，尽情探索这个城市。" << endl;
    Sleep(delay_time);
    system("pause");
    Sleep(delay_time);
    cout << "根据您的最终点数，我们会生成荣誉勋章" << endl;
    Sleep(delay_time);
    cout << "请享受游戏!" << endl;
    Sleep(delay_time);
    cout << "按下任意键开始" << endl;
    Sleep(delay_time);
    system("pause");
}

void distribute_point(people &player)
{
    Sleep(delay_time);
    cout<<"您现在一共有200点，请您分配到幸福、IQ、EQ、体魄上"<<endl;
    Sleep(delay_time);
    cout<<"请在下方输入(幸福 IQ EQ 体魄 颜值)的点数，注意要使和保持在200,每项的点数最少为30"<<endl;
    
    int h,I,E,p,a;
    while(1)
    {   
        cin>>h>>I>>E>>p>>a;
        if((h+I+E+p+a)==200&&h>=30&&I>=30&&E>=30&&p>=30&&a>=30)
        {
            break;
        }
        else{
            Sleep(delay_time);
            cout<<"点数和不符合要求！请重新输入"<<endl;
            Sleep(delay_time);
        }
    }
    player.EQ_change(E);
    player.IQ_change(I);
    player.happiness_change(h);
    player.physique_change(p);
    player.attractiveness_change(a);
}