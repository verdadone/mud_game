#ifndef _COMPANY_H_
#define _COMPANY_H_
#include "place.h"
class company : public place
{
private:
    int pressure;
    int ini = 0;
    int is_im_w = 0;

public:
    company(int l, string s, int pressure);
    void show();
    virtual void event(people &player);
};
#endif