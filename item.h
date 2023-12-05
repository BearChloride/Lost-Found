#pragma once
#include <string>
#include<iostream>
#include<stdio.h>
#include<fstream>
#include"globalFile.h"
 
using namespace std;
class Item
{
public:
	void Getchara(int);//存物品
	void Putchara(int);//找物品
	void Save(int);
	void exitSystem();
private:
	string i_Name;
	string i_Color;
	string i_Location;
	string i_Date;
};
