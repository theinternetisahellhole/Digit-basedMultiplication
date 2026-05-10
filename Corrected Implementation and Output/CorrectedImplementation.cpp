#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void print128(__int128 x) {
    if (x == 0) { cout << "0"; return; }
    if (x < 0) { cout << "-"; x = -x; }
    string s;
    while (x > 0) { s.push_back('0' + x % 10); x /= 10; }
    reverse(s.begin(), s.end());
    cout << s;
}

int main() {

    __int128 a, b;
    __int128 result = 0;
    __int128 place = 1;
    long long ta, tb;
    cout << "Enter the first number: "; cin >> ta; a = ta;
    cout << "Enter the second number: "; cin >> tb; b = tb;
    while (b > 0) {
        __int128 digit = b % 10;
        __int128 partial = digit * place * a;
        cout << "Digit: "; print128(digit);
        cout << ", Place: "; print128(place);
        cout << ", Partial: "; print128(partial);
        cout << endl;
        result += partial;
        b /= 10;
        place *= 10;
    }
    cout << "Final Result: "; print128(result); cout << endl;
    
    return 0;
}
