#include <iostream>

using namespace std;

int sumaIterativa(int n)
{
    int suma = 0;
    while (n > 9)
    {
        suma += n % 10;
        n /= 10;
    }
    return (suma + n);
}

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

    cout << "Ingresa un numero: ";
    cin >> numero;

    int sumaIterativaResultado = sumaIterativa(numero);
    int sumaRecursivaResultado = sumaRecursiva(numero);

    cout << "Suma iterativa: " << sumaIterativaResultado << std::endl;
    cout << "Suma recursiva: " << sumaRecursivaResultado << std::endl;


    system("pause");
    return 0;
}