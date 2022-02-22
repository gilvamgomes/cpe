#include <iostream>
using namespace std;

int main()
{
	int a=0, b=0;
	int resultado=0;

	cin >> a >> b;

	if(a==b)
	{
		resultado = a+b;
	}
	else
	{
		resultado = a*b;
	}

	cout << resultado;
	
	return 0;
}
