#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <ctime>
#include <fstream>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <sstream>
#include <stdlib.h>
#include <string>
#include <vector>
#include <list>
#include <math.h>
using namespace std;
 
#define INFILE FILE * in = fopen("main.in", "r");
#define INCIN ifstream cin("main.in");
 
 
 
int main() {
  map<char, int> m;
  char temp;
  while (cin >> temp) {
    m[temp]++;
  }
 
  int sum = 0;
  for (auto i : m) {
    if (i.second % 2 == 1) {
      sum++;
    }
  }
  if (sum % 2 == 1 || sum == 0) {
    cout << "First" << endl;
  } else {
    cout << "Second" << endl;
  }
}
