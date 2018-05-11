#include <bits/stdc++.h>

using namespace std;

int main()
{
  double valor;
  long int centavos;
  // Ordened vector with 
  long int notas[] = { 10000, 5000, 2000, 1000, 500, 200 };
  long int moedas[] = { 100, 50, 25, 10, 5, 1 };

  cin >> valor;
  
  // Transform total value in integer
  centavos = valor * 100;

  cout.precision(2);
  cout << "NOTAS:" <<endl;
  for (int i = 0; i < 6; i++)
  {
    cout << centavos/notas[i] << " nota(s) de R$ " << fixed << notas[i]/100.00 << endl;
    centavos %= notas[i];
  }

  cout << "MOEDAS:" <<endl;
  for (int i = 0; i < 6; i++)
  {
    cout << centavos/moedas[i] << " moeda(s) de R$ " << fixed << moedas[i]/100.00 << endl;
    centavos %= moedas[i];
  }



  return 0;
}

