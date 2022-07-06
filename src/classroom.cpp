#include "classroom.h"
// classroom class
classroom::classroom(int l, string s, int atmos /*= 50*/) : place(s, l), studying_atmosphere(atmos) {}
void classroom::show()
{
    Sleep(delay_time);
    cout << "欢迎来到浙江大学教室！" << endl;
    Sleep(delay_time);
    cout << "*******************************" << endl;
    cout << "*                             *" << endl;
    cout << "*            学生             *" << endl;
    cout << "*                             *" << endl;
    cout << "*                             *" << endl;
    cout << "*        ************         *" << endl;
    cout << "*        *   讲台   *         *" << endl;
    cout << "*        *          *         *" << endl;
    cout << "*****门门门*********************" << endl;
}
int classroom::select(const people &p)
{ //返回选中的事件,计数从0开始
    if (p.get_sex() == "m" && p.get_IQ() > 100 && p.get_EQ() > 100 && p.get_friends().size() > 3)
    { //事件4，找到npy,cgh版
        if (!(rand() % 4))
        {
            return 4;
        }
    }
    int chance0 = generate_increment(p.get_IQ() + studying_atmosphere + 300, 600);
    int chance1 = (max_increment - generate_increment(p.get_IQ() + studying_atmosphere, 400));
    int chance3 = generate_increment(p.get_EQ() + studying_atmosphere + 300, 600);
    if (!(rand() % chance0))
    { //越聪明，教室学习氛围越好，越容易听懂;
        return 0;
    }
    if (!(rand() % chance1))
    { //越聪明，教室学习氛围越好，越不容易睡着;
        return 1;
    }
    if (!(rand() % chance3))
    { // EQ越高，教室学习氛围越好,越容易沟通;
        return 3;
    }
    return 2;
}
void classroom::learn_well(people &p)
{
    Sleep(delay_time);
    cout << "你专心听讲，觉得老师讲的条理十分清晰，完全理解了这节课的内容。你从中体会到了知识的乐趣。" << endl;
    //越**，加的越少
    p.IQ_change(generate_increment(p.get_IQ(), 300));
    p.happiness_change(2);
    if (studying_atmosphere < 100)
    {
        studying_atmosphere++;
    }
}
void classroom::fall_asleep(people &p)
{
    Sleep(delay_time);
    cout << "你觉得很困，于是你睡着了。" << endl;
    if (studying_atmosphere > 0)
    {
        studying_atmosphere--;
    }
}
void classroom::can_t_understand(people &p)
{
    Sleep(delay_time);
    cout << "你试图去理解老师讲的内容，但是发现你完全做不到。你很痛苦。" << endl;
    p.happiness_change(-2);
}
void classroom::find_a_friend(people &p)
{
    Sleep(delay_time);
    cout << "你在课后与同学交流起了题目，你们在交流中加深了对知识的理解。" << endl;
    p.IQ_change((generate_increment(p.get_IQ(), 300)));
    p.EQ_change(1);
    if (rand() % 2)
    {
        cout << "在交流过程中，你发现一位同学与你意趣相投，你们交换了微信。你认识了一位新朋友。" << endl;
        string name;
        generate_name(name);
        p.get_friend(name);
        p.happiness_change(1);
    }
}
void classroom::find_a_gril_friend(people &p)
{ //陈淦豪版
    Sleep(delay_time);
    cout << "热爱学习的你发现每次都有一个女生和你一样，早早地来到教室，坐在第一排。你们之前也会不时讨论问题，交流心得，"
            "你们慢慢熟络。今天恰好是5月20日，那个女生低着头过来给了你一封信......"
         << endl;
    string name;
    generate_name(name);
    p.get_mate(name);
    p.happiness_change(10);
}
void classroom::event(people &player)
{ // player进入该地点
    Sleep(delay_time);
    show();
    // cout << "你在0号教室" << endl;
    int sel = select(player);
    if (sel == 0)
    {
        learn_well(player);
    }
    else if (sel == 1)
    {
        fall_asleep(player);
    }
    else if (sel == 2)
    {
        can_t_understand(player);
    }
    else if (sel == 3)
    {
        find_a_friend(player);
    }
    else if (sel == 4)
    {
        find_a_gril_friend(player);
    }
    else
    {
        Sleep(delay_time);
        cout << "没有这个地点" << endl; //此处应抛出异常
    }
}