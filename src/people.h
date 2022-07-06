#ifndef __PEOPLE_H__
#define __PEOPLE_H__
#include<string>
#include<iostream>
#include<vector>
using namespace std;
#define max_increment 8
#define delay_time 800
#define total_points 200
class people
{
private:

    string name; //姓名
    string sex;  //性别
    int happiness;
    int IQ;
    int EQ;
    int physique;
    int money;
    int attractiveness;
    bool is_die=0;
    //属性值中，除了money，范围全都为0到300
    vector<string> bag;
    vector<string> friends;
    string mate; //伴侣姓名，没有则为空字符串
public:
    int loc_r;
    int loc_c;
    bool player_die();
    void set_die();
    people();
    people(string name, string sex);
    //使用默认拷贝构造以及赋值函数即可
    ~people();
    void show();
    string get_name() const;
    string get_sex() const;
    int get_happiness() const;
    int get_IQ() const;
    int get_EQ() const;
    int get_physique() const;
    int get_attractiveness() const;
    int get_money() const;
    vector<string> get_bag() const;
    vector<string> get_friends() const;
    string get_mate() const;
    void happiness_change(int n);
    void IQ_change(int n);
    void EQ_change(int n);
    void physique_change(int n);
    void attractiveness_change(int n);
    void money_change(int n);
    void get_something(string t);
    void get_friend(string n);
    void get_mate(string n);
};
#endif