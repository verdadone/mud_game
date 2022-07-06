#ifndef _PLACE_H_
#define _PLACE_H_
#include<string>
#include<iostream>
#include<windows.h>
#include"people.h"
#include "utils.h"
#define delay_time 800
using namespace std;
class place
{ //所有地点类的基类，属性表示每个地点类都会有的属性
private:
    int location; //从0开始，地点坐标
    string name;

public:
    place(string s = "", int l = 0);
    virtual void show();
    virtual ~place();
    virtual void event(people &player);
    //使用默认拷贝构造以及赋值函数即可
};






#endif
