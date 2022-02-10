#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	double valorProduto=0, percent=0.09;

	cout << "Diga o preco do produto: \n";
	cin >> valorProduto;

  double precoFinal = valorProduto-(valorProduto*percent);

	cout << "Preco final eh: " << setprecision(2) << fixed <<
					precoFinal << endl;


	return 0;
}
