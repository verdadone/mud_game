#include "company.h"
// company class
company::company(int l, string s, int pressure) : place(s, l), pressure(pressure) {}
void company::show()
{

    Sleep(delay_time);
    if (ini == 0)
    {
        cout << "这是你第一次来到公司" << endl;
        Sleep(delay_time);
        cout << "公司，市场经济的重要成分" << endl;
        Sleep(delay_time);
        cout << "你可以从公司获取金钱（money），但与此同时，你要付出一些东西" << endl;
        Sleep(delay_time);
        cout << "公司的压力氛围与你的属性的差异会导致不同事件的发生" << endl;
        Sleep(delay_time);
        cout << "你是并不是一名全日制员工，你可以选择一直不来公司" << endl;
        Sleep(delay_time);
    }
    cout << "*******************************" << endl;
    cout << "*   老板 *                    *" << endl;
    cout << "*        *                    *" << endl;
    cout << "**********                    *" << endl;
    cout << "*                员工         *" << endl;
    cout << "*                             *" << endl;
    cout << "*                             *" << endl;
    cout << "*                             *" << endl;
    cout << "************门门门**************" << endl;
}

void company::event(people &player)
{
    // show();
    cout << "你进入了公司" << endl;
    Sleep(delay_time);
    int temp = rand();
    if (temp % 2 == 0 && pressure <= 30)
    {
        cout << "没有特别的任务，你可以选择做一些日常性的事物" << endl;
        Sleep(delay_time);
        cout << "0.打扫卫生 1.摸鱼 2.整理文件" << endl;
        Sleep(delay_time);
        int choice;
        cin >> choice;
        if (choice == 0)
        {
            cout << "你开始打扫卫生" << endl;
            Sleep(delay_time);
            cout << "打扫完成" << endl;
            player.money_change(10);
            player.physique_change(5);
            pressure += 5;
        }
        if (choice == 1)
        {
            cout << "你开始摸鱼" << endl;
            Sleep(delay_time);
            cout << "摸鱼结束" << endl;
            player.money_change(10);
            player.physique_change(0);
            pressure += 10;
        }
        if (choice == 2)
        {
            cout << "你开始整理" << endl;
            Sleep(delay_time);
            cout << "整理结束" << endl;
            player.money_change(10);
            player.physique_change(2);
            pressure += 5;
        }
    }
    else if (temp % 2 == 1 && is_im_w == 0)
    {
        cout << "“" << player.get_name() << "，这里有一样艰巨的任务交给你”，老板说道" << endl;
        Sleep(delay_time);
        cout << "什么任务？你问道" << endl;
        Sleep(delay_time);
        cout << "我需要你去找一个羽毛球拍" << endl;
        Sleep(delay_time);
        cout << "尽管任务很奇怪，你还是接受了" << endl;
        player.money_change(0);
        is_im_w = 1;
    }
    else if (temp % 2 == 1 && is_im_w == 1)
    {
        Sleep(delay_time);
        cout << "“任务完成了吗?”老板问道" << endl;
        Sleep(delay_time);
        cout << "0.完成了 1.没有完成" << endl;
        Sleep(delay_time);
        int choice;
        cin >> choice;
        if (choice == 0)
        {
            int find = 0;
            for (auto it : player.get_bag())
            {
                if (it == "球拍")
                    find = 1;
            }
            if (find == 1)
            {

                cout << "“你真是我的最佳员工！”老板说道" << endl;
                player.money_change(50);
                player.happiness_change(50);
            }
            else
            {
                cout << "“你个骗子！”老板骂道" << endl;
                Sleep(delay_time);
                cout << "你被罚款了" << endl;
                player.money_change(-10);
                player.happiness_change(-10);
            }
        }
        else
        {
            cout << "那就快去做！" << endl;
            player.money_change(0);
            player.happiness_change(-10);
        }
    }
}
