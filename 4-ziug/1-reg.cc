/*
 *  Solution of "Regaty (REG001)" problem on fourth ZIUG.
 *  The following code's complexity is of O(n).
 *  
 *  Authors: Stanisław J. Grams,
 *           Juliusz Korczakowski,
 *           Krzysztof Janikowski
 *
 *  19/05/2018
 */
#include <iostream>
#include <map>
#include <vector>

#define  DEFAULT_NOT_ANSWER "NIE"
using namespace std;

int main (void) {
  long long int a, b;

  map  <long long int, long long int> Map;
  pair <long long int, long long int> Pair;

  map <long long int, long long int>::iterator map_iter;
  map <long long int, long long int>::iterator max_obj;

  cin >> a;

  for (size_t i=0; i < (size_t) a; i++)
  {
    cin >> b;
    // O(1) -> thanks to unordered_map
    if (!Map.count (b)) {
      Pair.first = b;
      Pair.second = 1;
      Map.insert (Pair);
    }
    else {
      Map.find (b)->second++;
    }
  }

  // O(n) -> the easiest way to get maximum value of any container
  max_obj = Map.begin ();
  for (map_iter = Map.begin (); map_iter != Map.end (); map_iter++) {
    if (map_iter->second > max_obj->second) {
      max_obj = map_iter;
    }
  }

  if ((long double) max_obj->second > (long double) ((long double) a / 2.0)) {
    cout << max_obj->first << endl;
  }
  else {
    cout << DEFAULT_NOT_ANSWER << endl;
  }

  return 0;
}