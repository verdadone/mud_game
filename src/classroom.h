#ifndef _CLASSROOM_H_
#define _CLASSROOM_H_
#include "place.h"
class classroom : public place
{
private:
    int studying_atmosphere; // from 0~100
public:
    classroom(int l, string s, int atmos = 50);
    void show();
    int select(const people &p);
    void learn_well(people &p);
    void fall_asleep(people &p);
    void can_t_understand(people &p);
    void find_a_friend(people &p);
    void find_a_gril_friend(people &p);
    virtual void event(people &player);
};
#endif