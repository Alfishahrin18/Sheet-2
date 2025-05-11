1.// Problem name: (J) Primes from 1 to n
2.// Course title: Competitive Programming Sessional
3.// Course code: CCE-2310
4.// Course teacher name: Mirza Raquib
5.// Date: 5/5/25

#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;

    bool a[n + 1];
    for (int i = 0; i <= n; i++) {
        a[i] = true;
    }
    for (int j = 2; j < sqrt(n+1); j++) {
    if (a[j] == true) {
    for (int k = j + j; k <= n; k += j) {
    a[k] = false;
  }
 }
}

for (int i = 2; i <= n; i++) {
 if (a[i]) {
    cout << i << " ";
    }
  }
 cout << endl;
}
