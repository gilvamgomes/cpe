#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	double a, b, c, d;

		cout << "Digite 4 numeros: \n";
		cin >> a >> b >> c >> d;

	double mediaPonderada = (((a*1)+(b*2)+(c*3)+(d*4))/10);

		cout << "A media ponderada deles eh: " << mediaPonderada << endl;

	return 0;
}
