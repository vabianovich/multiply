#include <iostream>
using namespace std;

int multiply(int a, int b) {
    return a * b;
}

void multiply_and_log(int a, int b) {
    int result = multiply(a, b);
    cout << "result:" << endl;
    cout << result << endl;
}

int main() {
    int a, b;
    cout << "first number" << endl;
    cin >> a;
    cout << "second number" << endl;
    cin >> b;
    multiply_and_log(a, b);
    system("pause");
    return 0;
}