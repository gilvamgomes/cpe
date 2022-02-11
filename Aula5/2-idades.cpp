#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int idade1=0, idade2=0;
	float peso1=0, peso2=0;

	cout << "Idade e peso da primeira pessoa: ";
	cin >> idade1 >> peso1;
	
	cout << "Idade e peso da segunda pessoa: ";
	cin >> idade2 >> peso2;


	if(idade1 > idade2)
	{
		cout <<"A primeira pessoa eh mais velha, com " << idade1 << " anos." << endl;
	}
	else
	{
		if(idade1==idade2)
		{
			cout <<"Ambos tem a mesma idade.\n";
		}
		else
		{
			cout <<"A segunda pessoa eh mais velha, com " << idade2 << " anos." << endl;;
		}
			
	}
		
	
	if(peso1 < peso2)
	{
		cout <<"A primeira pessoa eh mais leve, com " << setprecision(2) 
			 << fixed<< peso1 << " kg." << endl;
	}
	else
	{
		if(peso1==peso2)
		{
			cout <<"Ambos tem o mesmo peso.\n";
		}
		else
		{
			cout <<"A primeira pessoa eh mais leve, com " << setprecision(2) 
			 << fixed<< peso2 << " kg." << endl;
		}
	}
		
	
	return 0;
}


