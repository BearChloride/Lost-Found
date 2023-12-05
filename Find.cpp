#include"Find.h"
void Find()
{
	Item i;
	cout << "请输入查找物品" << endl;
	cout << "1.书本" << endl 
		<< "2.电子产品" << endl 
		<< "3.雨伞" << endl
		<<"4.其他"<<endl;
	int  n;
	cin >> n;
	i.Putchara(n);
	cout << "是否寻找到失物？" << endl
		<< "1.是" << endl << "2.否" << endl;
	int j=0;
	do
	{
		cin >> j;
		if (j == 1)
		{
			cout << "感谢使用" << endl
				<< "是否退出？" << endl
				<< "1.是" << endl << "2.否" << endl;
		}
		if (j == 2)
		{
			cout << "很抱歉" << endl
				<< "是否退出？" << endl
				<< "1.是" << endl << "2.否" << endl;
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