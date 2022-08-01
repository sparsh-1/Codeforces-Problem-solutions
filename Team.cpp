// https://codeforces.com/problemset/problem/231/A
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int cnt = 0;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a == 1 and b == 1) || (b == 1 && c == 1) || (c == 1 && a == 1)) {
            cnt ++;
        }
    }
    cout << cnt;
    return 0;
}
