#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    int n, x;
    while (t--) {
        cin >> n >> x;
        if (n <= 2) {
            cout << 1 << "\n";
        }
        else {
            n -= 2;
            if ((n % x) == 0) {
                cout << (n / x) + 1 << "\n";
            }
            else {
                cout << (n / x) + 2 << "\n";
            }
        }
    }
    return 0;
}
