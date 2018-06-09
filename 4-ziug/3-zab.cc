/*
 *  Solution of "Żabki (ZAB001)" problem on fourth ZIUG.
 *  
 *  Stanisław J. Grams
 *
 *  08/06/2018
 */
#include <iostream>
#define DEFAULT_NOT_ANSWER "NIE"
#define INFINITY 2147483647
using namespace std;

int main (void) {
  int i, j, N, buf, *tab, dist;
  cin >> dist >> N;

  tab = new int[dist+1];
  tab[0] = 0;

  for (i = 1; i <= dist; i++)
  {
    tab[i] = INFINITY;
  }

  for (i = 1; i <= N; i++)
  {
    cin >> buf;
    for (j = 0; j <= dist-buf; j++) 
    {
      if (tab[j] < INFINITY)
        if (tab[j]+1 < tab[j+buf])
          tab[j+buf] = tab[j] + 1; 
    }
  }
  
  if (tab[dist] == INFINITY)
    cout << DEFAULT_NOT_ANSWER << endl;
  else
    cout << tab[dist] << endl;

  delete[] tab;
  return 0;
}