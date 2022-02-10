#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	double celsius=0;

		cout << "Digite a temperatura em graus Celsius " <<
						 "para conversao em Fahrenheit: \n";
		cin >> celsius;

		double fahrenheit=(9*celsius+160)/5;

		cout << "Graus em Fahrenheit: " << fahrenheit << endl;

	return 0;
}

/*
Professor, tenho uma dúvida nesse exercício.

Se eu colocar o 'double fahrenheit abaixo' abaixo do 'double celsius',
o valor sempre resulta em 32, considerando o valor '0' do celsius.
Porém se eu colocar o 'double fahrenheit abaixo' depois do 'cin >> celsius'
a conta funciona.

Por qual motivo isso acontece mesmo?

ex. do que eu citei acima:

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	double celsius=0;
	double fahrenheit=(9*celsius+160)/5;

		cout << "Digite a temperatura em graus Celsius " <<
						 "para conversao em Fahrenheit: \n";
		cin >> celsius;

		cout << "Graus em Fahrenheit: " << fahrenheit << endl;

	return 0;
}

*/
