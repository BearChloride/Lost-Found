#include"Add.h"
void Add()
{
	Item i;
	cout<<"��������Ʒ���ͣ�"<<endl
		<< "1.�鱾" << endl
		<< "2.���Ӳ�Ʒ" << endl
		<< "3.��ɡ" << endl
		<< "4.����" << endl;
	int n;
	cin >> n;
	i.Getchara(n);
	i.Save(n);
}