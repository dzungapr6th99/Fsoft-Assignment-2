/*Code by Nguyen Tuan Dung*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap N: ";
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int sum = 0;
	int max = a[0];
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
		if (a[i] > max) max = a[i];
	}
	for (int i = n - 1; i >= 0; i--)
	{
		cout << a[i]<<" ";
	}
	cout << endl;
	cout << sum << endl;
	cout << max;
	return 0;
}