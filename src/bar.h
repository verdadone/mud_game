#ifndef _BAR_H_
#define _BAR_H_
#include"place.h"
//只有晚上能来酒吧
class bar:public place{
private:
public:
    bar(int l,string s);
    void show();
    void drink(people &player,int& drunk_record);
    void drunk(people &player);
    void dance(people &player);
    virtual void event(people &player);
};
#endif