// https://codeforces.com/problemset/problem/71/A
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        string temp;
        cin >> temp;
        if (temp.size() > 10) {
            cout << temp[0] << temp.size() - 2 << temp[temp.size() - 1] << "\n";
        }
        else {
            cout << temp << "\n";
        }
    }
    return 0;
}
