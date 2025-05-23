1.// Problem name:  (R) Sequence of Numbers and Sum.
2.// Course title: Competitive Programming Sessional
3.// Course code: CCE-2310
4.// Course teacher name: Mirza Raquib
5.// Date: 19/5/25

#include <bits/stdc++.h>
using namespace std;
int main() {
    
while (true) {
    long long a, b, sum = 0;
    cin >> a >> b;

    if (a <= 0 || b <= 0)
    break;

    long long min_v = min(a, b);
    long long max_v = max(a, b);

   for (long long k = min_v; k <= max_v; k++) {
    cout << k << " ";
    sum +=k;
    }

    cout << "sum =" << sum << endl;
    }
    return 0;
}
