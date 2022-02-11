#include <iostream>
using namespace std;

int main()
{
	int a, b, menu;
	
	cout << "Escolha dois numeros:\n";
	cin >> a >> b;
	
	cout << "Escolha uma das opcoes:\n" << "1 para soma\n" <<
	"2 para subtracao\n" << "3 para multiplicacao\n" << "4 para divisao\n";
	
	cin >> menu;
	switch (menu)
	{
		case 1:
			cout << "A soma dos num. eh: " << a+b;
			break;
		case 2:
			cout << "A subtracao dos num. eh: " << a-b;
			break;
		case 3:
			cout << "A mult. dos num. eh: " << a*b;
			break;
		case 4:
			cout << "A div. dos num. eh: " << a/b;
			break;
		default:
			cout << "Opcao invalida";
			break;	
	}
				
	return 0;
		
}
