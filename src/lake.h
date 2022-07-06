#ifndef _LAKE_H_
#define _LAKE_H_
#include "place.h"
class lake:public place
{
private:
    
public:
    lake(int l,string s);
    void show();
    virtual void event(people &player);
};
#endif 