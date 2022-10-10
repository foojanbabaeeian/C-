#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    cout << "start" << endl;
    float a, b, c;
    cout << "what is a:";
    cin >> a;
    while (a == 0)
    {
        cout << "a not be 0, Enter another a:";
        cin >> a;
    }
    cout << "what is b:";
    cin >> b;
    cout << "what is c:";
    cin >> c;
    float D = b * b-(4 * a * c);
    if (D > 0)
    {
        double x_1 = (-b + sqrt(D)) / 2 * a;
        double x_2 = (-b-sqrt(D)) / 2 * a;
        cout << "x1 is :" << x_1;
        cout << "x2 is :" << x_2;
    }
    else if (D == 0)
    {
        cout << "x :" << (-b / 2 * a);
    }
    else
    {
        cout << "x doesnt have a value"<<endl;
    }

    cout << "end" << endl;
}