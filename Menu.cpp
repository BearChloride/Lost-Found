#include"Menu.h"
void Show_menu()
{
	
	int select=1;
	while (true) {
		cout << "欢迎使用失物招领系统！"<<endl
			 <<"增加物品请选择1，寻找物品请选择2, 退出请选择0:";
		cin >> select;
		switch (select)
		{
		case 0:
			Exit_system();
			break;
		case 1:
			Add();
			break;
		case 2:
			Find();
			break;
		default:
			cout << "输入错误，请重新选择" << endl;
			system("pause");
			system("cls");
		}
	}
}
void Exit_system()
{
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);
}