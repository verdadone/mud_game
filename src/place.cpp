#include"place.h"
using namespace std;
//place base class
place::place(string s/*=""*/ , int l/*=0*/ ) : name(s), location(l) {}
void place::show()
{
    cout << "位置:" << location << endl;
    cout << "地点:" << name << endl;
}
place::~place(){}
void place::event(people &player) {}



