#include <iostream>

using namespace std;
int main()
{
	int a;
	a = 2;
	int* pa = &a;
	
	cout << ++ * pa << endl;
	cout << a << endl;
	return 0;
}
