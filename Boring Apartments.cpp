#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        int ans = 0;
        if (1 == x) {
            ans = 1;
        }
        else if (11 == x) {
            ans = 3;
        }
        else if (111 == x) {
            ans = 6;
        }
        else if (1111 == x) {
            ans = 10;
        }
        if (2 == x) {
            ans = 11;
        }
        else if (22 == x) {
            ans = 13;
        }
        else if (222 == x) {
            ans = 16;
        }
        else if (2222 == x) {
            ans = 20;
        }
        if (3 == x) {
            ans = 21;
        }
        else if (33 == x) {
            ans = 23;
        }
        else if (333 == x) {
            ans = 26;
        }
        else if (3333 == x) {
            ans = 30;
        }
        if (4 == x) {
            ans = 31;
        }
        else if (44 == x) {
            ans = 33;
        }
        else if (444 == x) {
            ans = 36;
        }
        else if (4444 == x) {
            ans = 40;
        }
        if (5 == x) {
            ans = 41;
        }
        else if (55 == x) {
            ans = 43;
        }
        else if (555 == x) {
            ans = 46;
        }
        else if (5555 == x) {
            ans = 50;
        }
        if (6 == x) {
            ans = 51;
        }
        else if (66 == x) {
            ans = 53;
        }
        else if (666 == x) {
            ans = 56;
        }
        else if (6666 == x) {
            ans = 60;
        }
        if (7 == x) {
            ans = 61;
        }
        else if (77 == x) {
            ans = 63;
        }
        else if (777 == x) {
            ans = 66;
        }
        else if (7777 == x) {
            ans = 70;
        }
        if (8 == x) {
            ans = 71;
        }
        else if (88 == x) {
            ans = 73;
        }
        else if (888 == x) {
            ans = 76;
        }
        else if (8888 == x) {
            ans = 80;
        }
        if (9 == x) {
            ans = 81;
        }
        else if (99 == x) {
            ans = 83;
        }
        else if (999 == x) {
            ans = 86;
        }
        else if (9999 == x) {
            ans = 90;
        }
        cout << ans << endl;
    }
    return 0;
}
