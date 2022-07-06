#ifndef _UTILS_H_
#define _UTILS_H_
#include<string>
#include<iostream>
#include"people.h"
using namespace std;
void generate_name(string &n);

int generate_increment(int n, int range);

void show_medal(people &player,int day);

void show_res(people &player,int day);// 死亡结语

void start_view(); //起始的展示


void distribute_point(people &player);

#endif
