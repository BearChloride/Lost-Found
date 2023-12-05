#include"Add.h"
void Add()
{
	Item i;
	cout<<"请输入物品类型："<<endl
		<< "1.书本" << endl
		<< "2.电子产品" << endl
		<< "3.雨伞" << endl
		<< "4.其他" << endl;
	int n;
	cin >> n;
	i.Getchara(n);
	i.Save(n);
}