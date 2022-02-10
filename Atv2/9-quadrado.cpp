#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double lado;

		cout << "Informe o lado do quadrado: \n";
		cin >> lado;

	double area = pow(lado, 2);
	double perimetro = lado*4;

  cout << "Area: " << area << endl;
	cout << "Perimetro: " << perimetro << endl;

	return 0;
}
