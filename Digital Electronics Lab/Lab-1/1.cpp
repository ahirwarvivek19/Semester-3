#include <iostream>
using namespace std;

void covertToBase(int n, int r)
{
    if (n == 0)
        return;
    covertToBase(n / r, r);
    if (n % r <= 9)
        cout << n % r;
    else
        cout << (char)(64 + n % r - 9);
}
int main()
{
    int n, r;

    cout << "Vivek Kumar Ahirwar - 191112419" << endl << endl;
    cout << "Enter the number in decimal form: ";
    cin >> n;
    cout << "Enter the radix base: ";
    cin >> r;
    cout << "The number "<<n<<" in base " << r << " is:\n";
    covertToBase(n, r);
    cout << endl;

    return 0;
}
