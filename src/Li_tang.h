#ifndef _LI_TANG_H_
#define _LI_TANG_H_
#include "place.h"
class litang:public place{
private:

public:
    litang(int l,string s);
    void show();
    virtual void event(people &player);
};
#endif 