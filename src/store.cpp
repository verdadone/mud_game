#include "store.h"
store::store(int l, string s, map<string, int> item_price):place(s,l),item_price(item_price){}
void store:: show_store(){
    Sleep(delay_time*0.8);
    cout<<"你到达了商店，你可以在这购买物品"<<endl;
    Sleep(delay_time*0.8);
    cout << "************************************************" << endl;
    cout << "*                                              *" << endl;
    cout << "*                   童叟无欺                   *" << endl;
    cout << "*                                              *" << endl;
    cout << "************************************************" << endl;
    cout << "*                                              *" << endl;
    cout << "*                     商店                     *" << endl;
    cout << "*                                              *" << endl;
    cout << "*                                              *" << endl;
    cout << "*                                              *" << endl;
    cout << "*                                              *" << endl;
    cout << "*                                              *" << endl;
    cout << "*                                              *" << endl;
    cout << "************************************************" << endl;
    Sleep(delay_time*0.8);
}
void store::show_item(){
    Sleep(delay_time * 0.8);
    cout<<"商店的商品及价格如下："<<endl;
    Sleep(delay_time * 0.8);
    for(auto it:item_price)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
}
void store::buy(string item,people &p)
{
    map<string,int>::iterator it;
    it=item_price.find(item);
    if(it==item_price.end())
    {
        cout<<"商店中无此商品！"<<endl;

        Sleep(delay_time * 0.8);
    }else{
        
        cout<<"购买成功！"<<endl;
        Sleep(delay_time * 0.8);
        cout<<"您获得了"<<" "<<item<<endl;
        Sleep(delay_time * 0.8);
        p.money_change(-1*item_price[item]);
        item_price.erase(item);
        p.get_bag().push_back(item);

    }
}
void store::event(people &p)
{
//     cout<<"您可以选择 0.购买 1.抢劫"<<endl;
//     int choice;
//     cin>>choice;
    // if(choice==0)
    // {
        // show_item();
        Sleep(delay_time*0.8);
        int flag=1;
        while (flag==1)
        {
            /* code */
            cout << "请输入要够买的物品"<<endl;
            string temp;
            cin >> temp;
            buy(temp,p);
            cout<<"0.继续购买 1.结束够买"<<endl; 
            int c;
            cin>>c;
            flag=c;
        }        
    // }
    // if(choice==1)
    // {

    // }
}