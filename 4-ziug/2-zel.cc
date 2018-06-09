/*
 *  Solution of "Żelki (ZEL)" problem on fourth ZIUG.
 * 
 *  The following code's complexity is of O(n).
 *  Program implements Kadane's algorithm.
 *  
 *  Stanisław J. Grams
 *
 *  08/06/2018
 */
#include <iostream>
using namespace std;

int main (void) {
  int i, N, max_sum, max_sum_cur;
  int buf, *tab;

  cin >> N;
  tab = new int[N];

  for (i = 0; i < N; i++)
  {
    cin >> buf;
    tab[i] = buf;
  }

  max_sum = max_sum_cur = 0;

  for (i = 0; i < N; i++) {
    max_sum_cur = max_sum_cur + tab[i];
    if (max_sum_cur > max_sum) {
      max_sum = max_sum_cur;
    }

    if (max_sum_cur < 0) {
      max_sum_cur = 0;
    }
  }

  cout << max_sum << endl;

  delete[] tab;
  return 0;
}
