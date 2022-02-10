#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double cat1=0, cat2=0, hipotenusa;

		cout << "Informe dois catetos de um triangulo retangulo: \n";
		cin >> cat1 >> cat2;

	hipotenusa = pow(cat1,2) + pow(cat2,2);

  cout << "A hipotenusa eh: " << sqrt(hipotenusa) << endl;

	return 0;
}
