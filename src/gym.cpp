#include"gym.h"
// gym class
gym::gym(int l, string s) : place(s, l) {}
void gym::show()
{
    Sleep(delay_time);
    cout << "欢迎来到浙江大学体育馆" << endl;
    Sleep(delay_time);
    cout << "*************************************************" << endl;
    cout << "*       羽毛球     *                 *          *" << endl;
    cout << "*                  *                 *          *" << endl;
    cout << "********************     网球        *   乒乓球  " << endl;
    cout << "*                  *                 *          *" << endl;
    cout << "*       篮球       *                 *          *" << endl;
    cout << "*                  *                 *          *" << endl;
    cout << "*                  *                 *          *" << endl;
    cout << "*                  *                 *          *" << endl;
    cout << "*************************************************" << endl;
    Sleep(delay_time);
}
void gym::basketball(people &player)
{

    int r = rand() % 30;
    if (r <= 5)
    {
        Sleep(delay_time);
        cout << "你刚走进篮球场，一颗硕大的篮球砸中你的脑门" << endl;
        Sleep(delay_time);
        cout << " ****  " << endl;
        cout << "*    *             " << endl;
        cout << "*    *     -->>   头" << endl;
        cout << " ****" << endl;
        cout << "获得医药费 20" << endl;
        Sleep(delay_time);
        player.happiness_change(-2);
        player.physique_change(0);
        player.money_change(20);
        return;
    }
    int now_num = rand() % (cap0 * 2);
    //   cout<<"余量："<<now_num<<endl;
    if (now_num <= cap0 - 1)
    {
        Sleep(delay_time);
        cout << "篮球场还有余量" << endl;
        if (player.get_physique() <= 10)
        {
            cout << "你太瘦弱了！没人愿意和你组队" << endl;
            Sleep(delay_time);
            player.happiness_change(-2);
            player.physique_change(0);
            return;
        }
        else
        {
            Sleep(delay_time);
            cout << "你打得非常开心，你和球友们成为了好朋友" << endl;
            player.physique_change(2);
            player.happiness_change(3);
            player.attractiveness_change(1);
            return;
        }
    }
    else
    {
        Sleep(delay_time);
        cout << "篮球场没有余量了！" << endl;
        Sleep(delay_time);
        cout << "你有如下选择" << endl;
        Sleep(delay_time);
        cout << "0.离开" << endl;
        Sleep(delay_time * 2);
        cout << "1.抢夺一个场地" << endl;
        int choice;
        cin >> choice;
        if (choice == 0)
        {
            Sleep(delay_time);
            player.physique_change(0);
            player.happiness_change(-1);
            player.attractiveness_change(0);
            return;
        }
        if (choice == 1)
        {
            Sleep(delay_time);
            if (player.get_physique() >= 45)
            {
                cout << "你以一敌十，击退了众人" << endl;
                player.physique_change(5);
                Sleep(delay_time);
                cout << "但最后没有人和你一起打球，你只能孤单地离开了" << endl;
                player.happiness_change(-2);
                return;
            }
            else
            {
                cout << "你冲向篮球场，恰巧一个壮汉正在救球" << endl;
                Sleep(delay_time);
                cout << "你们撞再了一起，你飞出了5m远" << endl;
                player.physique_change(-2);
                player.happiness_change(-1);
                Sleep(delay_time);
                cout << "你需要支付医药费20" << endl;
                if (player.get_money() < 20)
                {
                    Sleep(delay_time);
                    cout << "你死了" << endl;
                    player.set_die();
                }
                else
                {
                    Sleep(delay_time);
                    return;
                }
            }
        }
    }
}
void gym::badminton(people &player)
{
    int now_num = rand() % (cap0 * 2);
    //   cout<<"余量："<<now_num<<endl;
    if (now_num <= cap0 - 1)
    {
        cout << "羽毛球场还有余量" << endl;
        if (player.get_attractiveness() <= 10)
        {
            Sleep(delay_time);
            cout << "你的颜值过低，没人愿意和你打球！" << endl;
            Sleep(delay_time);
            player.happiness_change(-2);
            player.physique_change(0);
            return;
        }
        else
        {
            Sleep(delay_time);
            cout << "你和另一位同学打得非常开心，你们成为了好朋友" << endl;
            player.physique_change(2);
            player.happiness_change(3);
            player.attractiveness_change(1);
            return;
        }
    }
    else
    {
        cout << "羽毛球场没有容量！" << endl;
        Sleep(delay_time);
        cout << "你有如下选择" << endl;
        Sleep(delay_time);
        cout << "0.离开" << endl;
        Sleep(delay_time * 2);
        cout << "1.抢夺一个场地" << endl;
        int choice;
        cin >> choice;
        if (choice == 0)
        {
            Sleep(delay_time);
            player.physique_change(0);
            player.happiness_change(-1);
            player.attractiveness_change(0);
            return;
        }
        if (choice == 1)
        {
            Sleep(delay_time);
            cout << "勇敢者的选择！" << endl;
            Sleep(delay_time);
            cout << "你目光转向了那个身材瘦弱的同学" << endl;
            Sleep(delay_time);
            cout << "要选择他吗？（输入y or n）" << endl;
            string yes;
            cin >> yes;
            if (yes == "y")
            {
                cout << "“给我滚开！”你大喝道。" << endl;
                Sleep(delay_time);
                if (player.get_physique() <= 10)
                {
                    cout << "对方使出了“佛山无影脚”，你被击倒在地" << endl;
                    Sleep(delay_time);
                    cout << "你灰溜溜地跑了" << endl;
                    player.physique_change(0);
                    player.happiness_change(-2);
                    player.attractiveness_change(-2);
                    return;
                }
                else
                {
                    Sleep(delay_time);
                    cout << "对方望向高大威猛的你，丢下球拍跑了" << endl;
                    Sleep(delay_time);
                    cout << "获得物品，球拍*1" << endl;
                    player.get_something("球拍");
                    Sleep(delay_time);
                    cout << "你和另一位同学打得非常开心，你们成为了好朋友" << endl;
                    player.physique_change(2);
                    player.happiness_change(3);
                    player.attractiveness_change(1);
                    return;
                }
            }
        }
    }
}
void gym::event(people &player)
{
    // show_gym();
    cout << "请输入序号以选择一个场地" << endl;
    cout << "0.羽毛球 1.篮球" << endl;
    int choice;
    cin >> choice;
    if (choice == 0)
    {
        badminton(player);
    }
    if (choice == 1)
    {
        basketball(player);
    }
}
