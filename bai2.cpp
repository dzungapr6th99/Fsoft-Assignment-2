/*Code by Nguyen Tuan Dung*/
#include <iostream>
#include <string>
using namespace std;
double result(string f)
{
	double r;
	int pos = 0;
	while (f[pos] >= '0' && f[pos] <= '9')
	{
		pos++;
	}
	int i = 0;
	double a, b;
	string a1 = "", b1 = "";
	for (int i = 0; i < pos; i++)
		a1 += f[i];
	for (int j = pos + 1; j < f.size(); j++)
		b1 += f[j];
	a = stoi(a1);
	b = stoi(b1);

	switch (f[pos])
	{
	case '+': return a + b;
	case '-': return a - b;
	case '*': return a * b;
	case '/': return a / b;
	default: return 0;
	}
}

int main()
{
	string f;
	while (true)
	{
		getline(cin, f);
		if (f == "e") break;
		cout << result(f) << endl;
	}
	return 0;
}