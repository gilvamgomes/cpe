#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	double lado1, lado2;
	char menu;

	cout << "Digite dois numeros\n";
	cin >> lado1 >> lado2;

	if(lado1<=0 || lado2<=0)
	{
		cout << "erro\n";
	}
	else
	{
		cout << "Escolha uma das opcoes:\n" << "'A' para ver a area\n\n"
			   << "'P' para perimetro\n";

		cin >> menu;
		switch (menu)
		{
			case 'A':
				cout << "Area do retangulo: " << lado1*lado2 << endl;
				break;
			case 'P':
				cout << "Perimetro do retangulo: " << lado1*2 + lado2*2 << endl;
				break;
		}
	}

	return 0;
}
