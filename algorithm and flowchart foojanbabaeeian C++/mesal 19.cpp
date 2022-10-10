#include <iostream>
using namespace std;

int main()
{
    cout << "start" << endl;
    int A,B,C,sort;
    cout << "Enter A and B and C respectively : " <<endl;
    cin >> A >>B >>C;
    if (A<B){
        sort=A;
        A=B;
        B=sort;
    }else if (A<C){
        sort=A;
        A=C;
        C=sort;
    }else if (B<C){
        sort=B;
        B=C;
        C=sort;
    }
    cout<< "sort is : " <<A<< " , " <<B << " , " <<C<<endl;
    cout << "end" << endl;
    return 0;
}