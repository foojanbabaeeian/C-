#include <iostream>

using namespace std;

int main() {
    cout << "start" << endl;
    float a;
    cout << "a=";
    cin >> a;
    while (a == 0) {
        cout << "a can't be 0, give me another a: ";
        cin >> a;
    }
    float b, c;
    cout << "What is b :";
    cin >> b;
    cout << "What is c :";
    cin >> c;
    float X;
    X = ((c - b) / a);
    cout << "X is the answer :" << X << endl;

    cout << "end" << endl;
    return 0;
}