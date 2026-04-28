#include <bits/stdc++.h>
using namespace std;

// About the problem
// How many t-shirts I can delivery and what will be my profit?
//
// 3 T-Shirts
// Alfa
// Beta
// Gama
//
// which one has:
// minimum of tissue
// profit
//
// Receive:
// int T: Width of tissue to make t-shirts where (1 <= T <= 1000, T >= Q)
// each T-SHIRT has:
// int Q: How much tissue is necessary to make t-shirts Where (1 <= Q <= T)
// int L: Profit of T-Shirt Where (1 <= L <= 10000)
//
//
// return int: Maximum profit

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int t;
  if (!(cin >> t)) return 0;
  
  int max_profit = 0;
  for (int i = 0; i < 3; i++) {
      int q, l;
      cin >> q >> l;
      max_profit = max(max_profit, t / q * l);
  }
  cout << max_profit << "\n";
  return 0;
}
