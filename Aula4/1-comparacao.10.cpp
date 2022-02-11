#include <iostream>
using namespace std;

int main()
{
	int x;
	
	cin >> x;
	
	
	if(x == 10)
	{
		cout << "numero escolhido igual a 10\n";
	}
	
	else if(x > 10)
	{
		cout << "numero escolhido maior que 10\n";
	}
	else
	{
		cout << "numero escolhido menor que 10\n";
	}
	
	cout << "numero digitado: " << x;
	
	return 0;
		
}
