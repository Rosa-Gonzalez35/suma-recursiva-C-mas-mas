#include <iostream>

using namespace std;

int sumaRecursiva(int n)
{ 
	
	if (n <= 9)
		return n;
	else
		return sumaRecursiva(n / 10) + n % 10;
}
int main()
{
	int numero;
	cout << "introduce un numero: " << endl;
	cin >> numero;
	cout << " el resultado es: " << (numero);
	return 0;
}