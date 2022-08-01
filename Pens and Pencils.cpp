#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    int a, b, c, d, k;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c >> d >> k;
        int ans = 0;
        int temp1 = 0, temp2 = 0;
        if ((a % c) == 0) {
            temp1 += a / c;
        }
        else {
            temp1 += (a / c) + 1;
        }
        if ((b % d) == 0) {
            temp2 += b / d;
        }
        else {
            temp2 += (b / d) + 1;
        }
        if ((temp1 + temp2) > k) {
            cout << -1 << "\n";
        }
        else {
            cout << temp1 << " " << temp2 << "\n";
        }
    }
    return 0;
}
