/*
 *  Solution of "Czekolada (CZE)" problem on first ZIUG.
 * 
 *  Stanisław J. Grams
 *
 *  08/06/2018
 */
#include <iostream>

using namespace std;

int main (void) {
  int i, N, buf_1, buf_2, ret;
  cin >> N;

  for (i = 0; i < N; i++)
  {
    ret = 0;
    cin >> buf_1 >> buf_2;
    for (; buf_1 && buf_2; buf_1--, buf_2--)
    {
      ret += buf_1 * buf_2;
    }
    cout << ret << endl;
  }
  return 0;
}