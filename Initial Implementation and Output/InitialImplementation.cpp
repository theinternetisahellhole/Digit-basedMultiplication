#include <iostream>

using namespace std;

int main() {

    long long a, b;
    long long result = 0;
    long long place = 1;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    while (b > 0) {
        int digit = b % 10;
        long long partial = digit * place * a;
        cout << "Digit: " << digit << ", Place: " << place << ", Partial: " << partial << endl;
        result += partial;
        b /= 10;
        place *= 10;
    }
    cout << "Final Result: " << result << endl;

    return 0;
}
