#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector <long long> arr;
    long long temp;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end());
    if ((n % 2) != 0) {
        cout << arr[n / 2];
    }
    else {
        cout << arr[(n / 2) - 1];
    }
    return 0;
}

/* Setter's Solution
#include <bits/stdc++.h>

using namespace std;

int a[1000];

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a, a + n);

  cout << a[(n - 1) / 2];
}
*/
