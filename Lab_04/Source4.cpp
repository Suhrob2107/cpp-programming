#include <iostream>
using namespace std;
int main()
{
	float sum = 0, fact = 1;
	for (int i = 1; i <= 7; i++)
	{
		fact = fact * i;
		sum += i / fact;
	}
	cout << "Sum is : " << sum << endl;
	system("pause");
	return 0;
}
