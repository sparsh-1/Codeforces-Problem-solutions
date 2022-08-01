#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, even = 0, odd = 0;
        cin >> n;
        vector <int> arr;
        int temp;
        for (int i = 0; i < n; i++) {
            cin >> temp;
            if ((temp % 2) == 0) {
                even++;
            }
            else {
                odd++;
            }
            arr.push_back(temp);
        }
        int sume = 0;
        if ((even >= 1 && odd >= 1) || (accumulate(arr.begin(), arr.end(), sume) % 2 == 1)){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
