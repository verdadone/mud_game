#include"place.h"
class hospital:public place{
private:
    const int capacity;
    int ini=0;
public:
    hospital(int l,string s,int c=100):place(s,l),capacity(c){}
    void show();
    void kanbing(people &player);
    virtual void event(people &player);
};