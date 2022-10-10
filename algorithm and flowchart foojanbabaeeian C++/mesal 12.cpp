#include <iostream>
using namespace std;

int main()
{
    cout << "start" << endl;
    int N;
    cout << "what is N :";
    cin >> N;
    while (N<=0){
        cout <<"N must be bigger than 0" << N <<endl;
    }
    double S=0;
    for (float I=2; I<=N; I++){
        S=S+(I-1)/I;
    }
    cout << "S is: : " <<S <<endl;
    cout << "end" << endl;
    return 0;
}
