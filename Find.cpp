#include"Find.h"
void Find()
{
	Item i;
	cout << "�����������Ʒ" << endl;
	cout << "1.�鱾" << endl 
		<< "2.���Ӳ�Ʒ" << endl 
		<< "3.��ɡ" << endl
		<<"4.����"<<endl;
	int  n;
	cin >> n;
	i.Putchara(n);
	cout << "�Ƿ�Ѱ�ҵ�ʧ�" << endl
		<< "1.��" << endl << "2.��" << endl;
	int j=0;
	do
	{
		cin >> j;
		if (j == 1)
		{
			cout << "��лʹ��" << endl
				<< "�Ƿ��˳���" << endl
				<< "1.��" << endl << "2.��" << endl;
		}
		if (j == 2)
		{
			cout << "�ܱ�Ǹ" << endl
				<< "�Ƿ��˳���" << endl
				<< "1.��" << endl << "2.��" << endl;
		}
	} while (j != 1 && j != 2);
	int k = 0;
	cin >> k;
	do {
		if (k == 1)
		{
			i.exitSystem();
		}
		if (k == 2)
		{
			system("cls");

		}
	} while (k != 1 && k != 2);


}