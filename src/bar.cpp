#include "bar.h"
    bar::bar(int l, string s) : place(s, l) {}
    void bar::show()
    {
        cout << "欢迎来到酒吧" << endl;
        cout << "********************************" << endl;
        cout << "*   表演舞台       *    *       *" << endl;
        cout << "*                  *   *    吧 *" << endl;
        cout << "********************   *    台 *" << endl;
        cout << "*                      *       *" << endl;
        cout << "*                      *       *" << endl;
        cout << "*                      *       *" << endl;
        cout << "*                      *       *" << endl;
        cout << "************门门门**************" << endl;
        cout << "摇滚的音乐充斥着整个酒吧，有在台下蹦迪的，也有在一旁喝闷酒的，空气中弥漫着一股荷尔蒙的气息。" << endl;
    }
    void bar::drink(people &player, int &drunk_record)
    {
        cout << "“请问您想点些什么？”服务员问。0，啤酒；1，白酒；2，鸡尾酒" << endl;
        int wine;
        cin >> wine;
        if (wine == 0)
        {
            cout << "这是您的啤酒，请用。" << endl;
            player.money_change(-3);
            cout << "你喝着手中的啤酒，听着摇滚的音乐，暂时忘记了生活的烦恼。" << endl;
            player.happiness_change(2);
            drunk_record++;
        }
        else if (wine == 1)
        {
            cout << "这是您的白酒，请用。" << endl;
            player.money_change(-8);
            cout << "你喝着手中的白酒，听着摇滚的音乐，暂时忘记了生活的烦恼。" << endl;
            player.happiness_change(2);
            drunk_record += 5;
        }
        else if (wine == 2)
        {
            cout << "调酒师一顿操作猛如虎，给你调制了一杯色彩鲜艳的鸡尾酒。" << endl;
            player.money_change(-10);
            cout << "你抿了一口，感觉味道非常不错，眯着眼睛看着表演。" << endl;
            player.happiness_change(3);
            drunk_record += 3;
            if (player.get_attractiveness() > 80)
            {
                if (rand() % 2)
                {
                    cout << "一位妩媚少女朝你走了过来，你开始心跳加速" << endl;
                    cout << "你们开始一起蹦迪，并互相留了联系方式。" << endl;
                    cout << "分别前，她给你抛了一个意味深长的媚眼。" << endl;
                    player.happiness_change(6);
                }
            }
        }
        else
        {
            cout << "抱歉，我们这里不卖旺仔牛奶。" << endl;
            cout << "感受到周围异样的视线，你想找个地洞钻进去。" << endl;
            player.happiness_change(-1);
        }
    }
    void bar::drunk(people &player)
    {
        cout << "你醉了，不过好像胆子大了不少" << endl;
        player.physique_change(-1);
        if (rand() % 2)
        {
            cout << "这时你突然看见了一个好漂亮的小姐姐" << endl;
            while (1)
            {
                cout << "请问你要去搭讪吗？0,不要；1，要" << endl;
                int dashan_choice;
                cin >> dashan_choice;
                if (dashan_choice == 0)
                {
                    cout << "你挣扎了一番后还是没有选择上前" << endl;
                    break;
                }
                else if (dashan_choice = 1)
                {
                    cout << "趁着酒劲，你上前搭讪了。" << endl;
                    if (player.get_attractiveness() > 70)
                    {
                        cout << "你们相聊甚欢，并且一起离开了酒吧..." << endl;
                        if (rand() % 4)
                        {
                            cout << "你腰子被噶了" << endl;
                            player.physique_change(-30);
                        }
                        else
                        {
                            cout << "你度过了一段美妙的时光" << endl;
                            player.happiness_change(6);
                        }
                    }
                    else
                    {
                        cout << "女生没有理会你，你伤心极了" << endl;
                        player.happiness_change(-3);
                    }
                    break;
                }
                else
                {
                    cout << "请输入正确的行动" << endl;
                }
            }
        }
    }
    void bar::dance(people &player)
    {
        cout << "你加入到了正在狂欢的人群中，开始放飞自我。" << endl;
        if (rand() % 3 == 0)
        {
            cout << "你开始感到空虚与生活的无意义，你不想跳了。" << endl;
            player.happiness_change(-1);
        }
        else if (rand() % 2)
        {
            cout << "你在狂欢中感到了自由，忘记了烦恼。" << endl;
            player.happiness_change(1);
        }
        else
        {
            cout << "你跳舞的技巧精进了一些" << endl;
            player.attractiveness_change(2);
        }
    }
    void bar:: event(people &player)
    {
        int drunk_record = 0;
        // show();
        while (1)
        {
            cout << "请选择你的行动.0，喝酒；1，加入蹦迪" << endl;
            int action1;
            cin >> action1;
            if (action1 == 0)
            {
                drink(player, drunk_record);
                break;
            }
            else if (action1 == 1)
            {
                dance(player);
                break;
            }
            else
            {
                cout << "请输入正确的行动" << endl;
            }
        }
        if (drunk_record >= 5)
        {
            drunk(player);
        }
    }
