#include <bits/stdc++.h>
using namespace std;
// About the problem
// V Level 1
// C Level 2
// M Level 3
// 
// Options:
// 1. Source in V
// C to V: c * t * 2
// M to V: m * 2t * 2
//
// 2. Source in C
// V to C: v * t * 2
// M to C: m * t * 2
// 
// 3. Source in M
// V to M: v * 2t * 2
// C to M: c * t * 2
int main() {
    int t, v, c, m;
        if (!(std::cin >> t >> v >> c >> m)) return 0;
    
        int min_result = std::min({
            ((c * t * 2) + (m * 2 * t * 2)),
            ((v * t * 2) + (m * t * 2)),
            ((c * t * 2) + (c * t * 2))
        });
    
        std::cout << min_result << "\n";
}