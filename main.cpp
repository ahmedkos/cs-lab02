#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
    int a,b;
    cin >> a >>b;
    cout << "A+B = " << a+b << endl;
    cout << "A-B = " << a-b << endl;
    cout << "A*B = " << a*b << endl;
    cout << "A/B = " << a/b << endl;
    if (a>b) cout << "Max number = " << a;
    else cout << "Max number = " << b;
}
