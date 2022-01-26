/*Code by Nguyen Tuan Dung*/
#include <iostream>
#include <string>
using namespace std;

struct Employee
{
	string name;
	string gender;
	int workingYear;
	int level;
	Employee()
	{ }
	Employee(string n, string gen, int wy, int l)
	{
		name = n;
		gender = gen;
		workingYear = wy;
		level = l;
	}
	void display()
	{
		cout << "Ho ten: " << name << endl;
		cout << "Gioi tinh: " << gender << endl;
		cout << "Working Year: " << workingYear << endl;
		cout << "Level: " << level << endl;
	}
	void getInfo()
	{
		cout << "Nhap ho ten: ";
		getline(cin, name);
		cout << "Nhap gioi tinh: ";
		getline(cin, gender);
		cout << "So nam lam viec: ";
		cin >> workingYear;
		cout << "Nhap trinh do: ";
		cin >> level;
	}
};
int main()
{
	int n;
	cout << "Nhap so nhan vien: ";
	cin >> n;
	Employee *c=new Employee[n];
	for (int i = 0; i < n; i++)
		c[i].getInfo();
	for (int i = 0; i < n; i++)
		c[i].display();
	return 0;
}