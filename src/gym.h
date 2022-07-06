#ifndef _GYM_H_
#define _GYM_H_
#include "place.h"
class gym : public place
{
private:
    int cap0 = 20;
    int cap1 = 20;
    int cap2 = 20;
    int cap3 = 20;

public:
    gym(int l, string s);
    void show();
    void basketball(people &player);
    void badminton(people &player);
    virtual void event(people &player);
};
#endif