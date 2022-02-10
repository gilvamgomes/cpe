#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	int dollar=0;
	double cotacaoDollar=0;

	cout << "Quantos dolares tem no cofre?\n";
	cin >> dollar;

  cout << "Diga qual a cotacao do dollar atual:\n";
	cin >> cotacaoDollar;

	double reais = dollar*cotacaoDollar;

	cout << "Voce tem " << setprecision(2) << fixed << reais
			 << " reais." << endl;


	return 0;
}
