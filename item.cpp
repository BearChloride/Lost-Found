#include"item.h"
void Item::Getchara(int n)
{
	string tem;
	cout << "物品：";
	cin >> tem;
	i_Name = tem;
	cout << "颜色：";
	cin >> tem;
	i_Color = tem;
	cout << "发现地点：";
	cin >> tem;
	i_Location = tem;
	cout << "发现时间：";
	cin >> tem;
	i_Date = tem;
	
}
 void Item::Putchara(int n)
{
	 fstream ifs;
	 switch (n)
	 {
	 case 1:
		 ifs.open(BOOK_FILE, ios::in); break;
	 case 2:
		 ifs.open(ELECTRONICS, ios::in); break;
	 case 3:
		 ifs.open(UMBBRELLA, ios::in); break;
	 default:
		 ifs.open(OTHERS, ios::in); break;

	 }
	 string buf;
	 while (getline(ifs, buf))
	 {
		 cout << buf << endl;
	 }
}
void Item::Save(int n)
{
	fstream ofs;
	ofs.open(ITEM_FILE, ios::app);
	ofs << this->i_Name << " "
		<< this->i_Color << " "
		<< this->i_Location << " "
		<< this->i_Date << " "
		<<endl;
	ofs.close();
	switch (n)
	{
	case 1:
		ofs.open(BOOK_FILE, ios::app); break;
	case 2:
		ofs.open(ELECTRONICS, ios::app); break;
	case 3:
		ofs.open(UMBBRELLA, ios::app); break;
	default:
		ofs.open(OTHERS, ios::app); break;
		
	}
	ofs << this->i_Name << " "
		<< this->i_Color << " "
		<< this->i_Location << " "
		<< this->i_Date << " "
		<< endl;
	ofs.close();
	cout << i_Name << "已保存" << endl;
}
void Item::exitSystem()
{
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);
	

}
