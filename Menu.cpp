#include"Menu.h"
void Show_menu()
{
	
	int select=1;
	while (true) {
		cout << "��ӭʹ��ʧ������ϵͳ��"<<endl
			 <<"������Ʒ��ѡ��1��Ѱ����Ʒ��ѡ��2, �˳���ѡ��0:";
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
			cout << "�������������ѡ��" << endl;
			system("pause");
			system("cls");
		}
	}
}
void Exit_system()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);
}