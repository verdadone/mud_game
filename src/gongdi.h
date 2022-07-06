#ifndef __GONGDI_H__
#define __GONGDI_H__
#include "place.h"
#include <vector>
#include <algorithm>
#include <math.h>
//只有晚上能来酒吧
class gongdi : public place
{
private:
    int wanchengdu;

public:
    gongdi(int l, string s, int wan = 50);
    void show();
    void banzhuan(people &player);
    void drive(people &player);
    void beiza(people &player);
    void zhihui(people &player);
    void finish(people &player);
    virtual void event(people &player);
};
#endif