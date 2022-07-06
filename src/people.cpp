#include"people.h"

#include<windows.h>
bool people::player_die()
{
    return is_die;
}
void people::set_die()
{
    is_die=1;
}
people::people(){}
people::people(string name, string sex) : name(name), sex(sex), happiness(0), IQ(0), EQ(0), physique(0), money(50), mate(""), attractiveness(0)
{ //角色创建
    cout << "你来到了这个城市。请开始你的人生。" << endl;
}
//使用默认拷贝构造以及赋值函数即可
people::~people()
{
    // cout << "你死了" << endl;
}
void people::show()
{
    cout << "姓名:" << name << endl;
    cout << "性别:" << sex << endl;
    cout << "幸福度:" << happiness << endl;
    cout << "智商:" << IQ << endl;
    cout << "情商:" << EQ << endl;
    cout << "体魄:" << physique << endl;
    cout << "颜值:" << attractiveness << endl;
    cout << "金钱:" << money << endl;
    cout << "伴侣:" << mate << endl;
    cout << "你的朋友们:" << endl;
   
    Sleep(delay_time);
    for (auto it = friends.begin(); it != friends.end(); it++)
    {
        if (it == friends.begin())
        {
            cout << *it;
        }
        else
        {
            cout << "," << *it;
        }
        cout << endl;
    }
    cout << "你所拥有的物品:" << endl;
    for (auto it = bag.begin(); it != bag.end(); it++)
    {
        if (it == bag.begin())
        {
            cout << *it;
        }
        else
        {
            cout << "," << *it;
        }
        cout << endl;
    }
    cout << "************分割线*************" << endl;
}
string people::get_name() const
{
    return name;
}
string people::get_sex() const
{
    return sex;
}
int people::get_happiness() const
{
    return happiness;
}
int people::get_IQ() const
{
    return IQ;
}
int people::get_EQ() const
{
    return EQ;
}
int people::get_physique() const
{
    return physique;
}
int people::get_attractiveness() const
{
    return attractiveness;
}
int people::get_money() const
{
    return money;
}
vector<string> people::get_bag() const
{
    return bag;
}
vector<string> people::get_friends() const
{
    return friends;
}
string people::get_mate() const
{
    return mate;
}
void people::happiness_change(int n)
{
    if (happiness + n < 300)
    {
        Sleep(delay_time*0.7);
        cout << "幸福度变化" << n << endl;
        Sleep(delay_time * 0.7);
        happiness += n;
    }
    else
    {
        Sleep(delay_time * 0.7);
        cout << "恭喜你！你成为了世界上最幸福的人。" << endl;
        cout << "幸福度=" << 300 << endl;
        Sleep(delay_time * 0.7);
    }
}
void people::IQ_change(int n)
{
    if (IQ + n < 300)
    {
        Sleep(delay_time * 0.7);
        cout << "智商变化" << n << endl;
        Sleep(delay_time * 0.7);
        IQ += n;
    }
    else
    {
        Sleep(delay_time * 0.7);
        cout << "恭喜你！你成为了世界上最聪明的人。" << endl;
        cout << "智商=" << 300 << endl;
        Sleep(delay_time * 0.7);
    }
}
void people::EQ_change(int n)
{
    if (EQ + n < 300)
    {
        Sleep(delay_time * 0.7);
        cout << "情商变化" << n << endl;
        EQ += n;
        Sleep(delay_time * 0.7);
    }
    else
    {
        Sleep(delay_time * 0.7);
        cout << "恭喜你！你成为了世界上情商最高的人。" << endl;
        cout << "情商=" << 300 << endl;
        Sleep(delay_time * 0.7);
    }
}
void people::physique_change(int n)
{
    if (physique + n < 300)
    {
        Sleep(delay_time * 0.7);
        cout << "体魄变化" << n << endl;
        // cout << "体魄+=" << n << endl;
        physique += n;
        Sleep(delay_time * 0.7);
    }
    else
    {
        Sleep(delay_time * 0.7);
        cout << "恭喜你！你成为了世界上最强壮的人。" << endl;
        cout << "体魄=" << 300 << endl;
        Sleep(delay_time * 0.7);
    }
}
void people::attractiveness_change(int n)
{
    if (attractiveness + n < 300)
    {
        Sleep(delay_time * 0.7);
        cout << "颜值变化" << n << endl;
        // cout << "颜值+=" << n << endl;
        attractiveness += n;
        Sleep(delay_time * 0.7);
    }
    else
    {
        Sleep(delay_time * 0.7);
        cout << "恭喜你！你成为了世界上颜值最高的人。" << endl;
        // cout << "颜值=" << 300 << endl;
        Sleep(delay_time * 0.7);
    }
}
void people::money_change(int n)
{
    Sleep(delay_time * 0.7);
    cout << "金钱变化" << n << endl;
    // cout << "money+=" << n << endl;
    money += n;
    Sleep(delay_time * 0.7);
}
void people::get_something(string t)
{
    Sleep(delay_time * 0.7);
    cout << "你获得了" << t << endl;
    bag.push_back(t);
    Sleep(delay_time * 0.7);
}
void people::get_friend(string n)
{
    Sleep(delay_time * 0.7);
    cout << "你结识了一个新朋友——" << n << endl;
    friends.push_back(n);
    Sleep(delay_time * 0.7);
}
void people::get_mate(string n)
{
    Sleep(delay_time * 0.7);
    cout << "你脱单了！你的另一半名为" << n << endl;
    mate = n;
    Sleep(delay_time * 0.7);
}
