/*
 *  Solution of "Student (STU001)" problem on third ZIUG.
 * 
 *  Stanisław J. Grams
 *
 *  08/06/2018
 */
#include <iostream>
using namespace std;

int main (void) {
  int i, j, N, buf, ret;
  cin >> N;
  
  for (i = 0; i < N; i++)
  {
    cin >> buf;
    for (j = 5, ret = 0; buf/j >= 1; j *= 5)
      ret += buf/j;
    cout << ret << endl;
  }
  return 0;
}