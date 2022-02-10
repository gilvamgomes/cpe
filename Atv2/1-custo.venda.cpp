#include <iostream>
using namespace std;

int main()
{
	double custo=0, percent=0;

	cout << "Diga o preco do produto: \n";
	cin >> custo;

  cout << "Diga o percentual do produto: \n";
	cin >> percent;

	double precoFinal = ((percent/100)*custo)+custo;

	cout << "Preco final eh: " << precoFinal << endl;


	return 0;
}
