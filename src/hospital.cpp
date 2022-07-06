#include"hospital.h"
void hospital::show()
    {    
        if (ini == 0){
            cout << "这是你第一次来到医院" << endl;
            Sleep(delay_time);
            cout<<"当你的健康值低于一定程度的时候，你可以通过支付金钱得到治疗"<<endl;
            ini++;
        }
        cout << "*******************************" << endl;
        cout << "*   医生 *                    *" << endl;
        cout << "*        *                    *" << endl;
        cout << "**********                    *" << endl;
        cout << "*                大厅         *" << endl;
        cout << "*                             *" << endl;
        cout << "*                             *" << endl;
        cout << "*                             *" << endl;
        cout << "************门门门**************" << endl;
    }
    void hospital::kanbing(people &player){
        if(rand()%((int)(capacity*1.3))>capacity){
            cout<<"你一直在排队，然而一直都没有轮到你"<<endl;
            player.happiness_change(-2);
        }
        else{
            cout<<"医生在得知你的状况后，"<<endl;
            if(player.get_physique()>=100){
                cout<<"说你健康的很，没有必要来医院。"<<endl;
                player.money_change(-5);
            }
            else if(player.get_physique()<50&&player.get_physique()>=20){
                cout<<"给你开了一些药"<<endl;
                player.physique_change(5);
                player.money_change(-20);
            }   
            else{
                cout<<"表情变得凝重起来，把你拉进了重症室"<<endl;
                player.physique_change(5);
                player.money_change(-50);
            }
        }
    }
    
    void hospital::event(people &player)
    {
        // show();
        cout<<"你进入了医院"<<endl;
        Sleep(delay_time);
        cout<<"你想要看病吗？1,要；0，不要"<<endl;
        int kb;
        cin>>kb;
        if(kb){
            kanbing(player);
        }
    }