// https://codeforces.com/problemset/problem/1501/B
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector <long long> arr(n), ans(n);
        for (long long i = 0; i < n; i++)
            cin >> arr[i];
        long long i = n - 1;
        while (i >= 0) {
            if (arr[i]) {
                long long j = i - 1;
                long long temp = arr[i] - 1;
                ans[i] = 1;
                while (j >= 0 && temp > 0 && arr[j] < temp) {
                    ans[j--] = 1;
                    temp--;
                }
                i = j;
            }
            else
                i--;
        }
        for (long long i = 0; i < n; i++)
            cout << ans[i] << " ";
        cout << "\n";
    }
    return 0;
}