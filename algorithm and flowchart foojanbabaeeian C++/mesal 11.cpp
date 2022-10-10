#include <iostream>
using namespace std;

int main()
{
    cout << "start" << endl;
    int n,S=0,W=0;
    cout << "what is n :";
    cin >> n;
    for (int I=1; I<=n; I=I+2){
        cout << "Odd numbers smaller than n are : " <<I <<endl;
        W++;
        S=S+I;
    }
    cout <<"Sum is :"<<S<<"\n"<<"Count of Odd numbers are :"<<W<<endl;
    cout << "end" << endl;
    return 0;
}
