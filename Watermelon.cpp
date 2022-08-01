// https://codeforces.com/problemset/problem/4/A
#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int w;
    cin >> w;
    if ((w % 2) == 0 && w != 2) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
