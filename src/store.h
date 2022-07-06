#ifndef _STORE_H_
#define _STORE_H_
#include "place.h"
#include <map>
class store:public place{
private:
    map<string,int> item_price;
public:
    store(int l, string s, map<string, int> item_price);
    void show_store();
    void show_item();
    virtual void event(people &p);
    void buy(string item, people &p);
};

#endif