/*
 *  Solution of "Kasjer (KAS)" problem on third ZIUG.
 * 
 *  Stanisław J. Grams
 *
 *  08/06/2018
 */
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main (void) {
  int i, N;
  long long int *tab;
  long double sum, ret;

  cin >> N;

  tab = new long long int[N];

  for (i = 0; i < N; i++)
  {
    cin >> tab[i];
  }

  sort (tab, tab+N);

  for (i = 1; i < N; i++)
  {
    tab[i] += tab[i-1];
  }

  for (i = 0, sum = 0; i < N-1; i++)
  {
    sum += tab[i];
  }

  ret = sum * (1.0 / N);

  cout << fixed << setprecision (2) << ret << endl;

  delete[] tab;
  return 0;
}