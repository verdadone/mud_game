#include "lake.h"
#include <algorithm>

using namespace std;
lake::lake(int l, string s):place(s,l){}
void lake:: show()
{
    Sleep(delay_time);
    cout<<"这是湖泊。"<<endl;
    Sleep(delay_time);
    cout << "***************************" << endl;
    cout << "*     ~~~~     ~~~        *" << endl;
    cout << "*     ~~~ ~~~ ~~          *" << endl;
    cout << "*      ~~~  ~~~~    ~~~   *" << endl;
    cout << "*   ~~~~      ~~~   ~~~   *" << endl;
    cout << "*         ~~~~   ~~       *" << endl;
    cout << "*     ~~~~    ~~~~        *" << endl;
    cout << "*          ~~~        ~~~ *" << endl;
    cout << "***************************" << endl;
}
void lake::event(people &player)
{
    // show();
    Sleep(delay_time*0.8);
    int choice;
    cout<<"你站在湖泊旁，若有所思。"<<endl;
    Sleep(delay_time * 0.8);
    cout<<"你可以选择 0.游泳 1.钓鱼"<<endl;
    cin>>choice;
    Sleep(delay_time * 0.8);
    if(choice==0)
    {
        if(player.get_physique()<50)
        {
            cout << "你没游一会儿，感觉体力不支" << endl;
            Sleep(delay_time * 0.8);
            cout<<"你拼命想往岸边游，发现自己不能做到"<<endl;
            Sleep(delay_time * 0.8);
            cout<<"你发现眼前的风景越来越模糊，你的身体越来越沉重"<<endl;
            Sleep(delay_time * 0.8);
            cout<<"你永远沉睡在湖底"<<endl;
            player.set_die();
            return;
        }else{
            cout << "你游得非常开心" << endl;
            Sleep(delay_time * 0.8);
            player.physique_change(2);
            player.happiness_change(2);
            return;
        }
    }
    if(choice==1)
    {
        
        cout << "你所拥有的物品:" << endl;
        Sleep(delay_time * 0.8);
        for (auto it = player.get_bag().begin(); it != player.get_bag().end(); it++)
        {
            if (it == player.get_bag().begin())
            {
                cout << *it;
            }
            else
            {
                cout << "," << *it;
            }
            cout << endl;
        }
        Sleep(delay_time * 0.8);
        std::vector<std::string>::iterator iter = player.get_bag().begin();
        iter = find(player.get_bag().begin(), player.get_bag().end(), "钓鱼竿");
        if(iter !=player.get_bag().end())
        {
            int i=rand()%2;
            if(i==1)
            {
                cout<<"你没钓到鱼！"<<endl;
                player.happiness_change(-5);
            }else
            {
                cout << "你钓到了 鱼*1" << endl;
                Sleep(delay_time * 0.8);
                player.get_bag().push_back("鱼");
                player.happiness_change(2);
            }
        }else{
            cout<<"你没有钓鱼竿！"<<endl;
            Sleep(delay_time * 0.8);
            player.happiness_change(-3);
            return;
        }
    }
}