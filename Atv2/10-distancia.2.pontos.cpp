#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double distFinal=0, velInicial=0;


	cout << "Informe a distância (km): \n";
	cin >> distFinal;
	cout << "Informe a velocidade (km/h): \n";
	cin >> velInicial;

	double velMedia = distFinal/velInicial;
	//velocidadeMedia = (Variação da distância)/(variação do tempo)

	cout << "Tempo medio referente aos dados passados: \n"
			 << setprecision(2) << fixed << velMedia << " m/s" << endl;

 	double velMetroSeg = velMedia/3.6;
	//conversão de km/h para m/s é a divisão por 3,6.

	cout << "Velocidade em metros por segundos: \n"
			 << setprecision(2) << fixed << velMetroSeg << " m/s" << endl;


	return 0;
}
