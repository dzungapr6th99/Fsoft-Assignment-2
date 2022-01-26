/*Code by Nguyen Tuan Dung*/
#include<iostream>
#include "binary.h"
#include <string>
using namespace std;
int main()
{
	binary c = binary("1110001000");
	binary d = binary("1100110");
	binary e = c << 2 ;
	cout << e;
	return 0;
}