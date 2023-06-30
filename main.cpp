#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
    double a,b;
    cin >> a >>b;
    cout << "A+B = " << a+b << endl;
    cout << "A-B = " << a-b << endl;
    cout << "A*B = " << a*b << endl;
    cout << "A/B = " << a/b << endl;
    if (a>b) cout << "Max number = " << a<<endl;
    else cout << "Max number = " << b << endl;
    if (a<b) cout <<"Min number = " << a <<endl;
    else cout << "Min number = " << b << endl;

}
