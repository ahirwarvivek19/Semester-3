#include <iostream>
using namespace std;

void conversion1(int n, int k)
{
    if (n == 0)
        return;
    conversion1(n / k, k);
    if (n % k <= 9)
        cout << n % k;
    else
        cout << char(64 + n % k - 9);
}
void conversion2(double n, int k, int cnt)
{
    if (n == 0 || cnt == 0)
        return;
    int t = (int)n ;
    if (t <= 9)
        cout << t;
    else
        cout << char(64 + t - 9);
    n = n - t;
    conversion2(n * k, k, cnt - 1);
}
int main()
{
    cout << "Vivek Kumar Ahirwar - 191112419" << endl << endl;
    double n, q;
    cout << "Enter the number in decimal form with radix point\n";
    cin >> n;
    int k, p;
    p = (int)n;
    q = n - p;
    cout << "Enter the radix base\n";
    cin >> k;
    cout << "The entered number in base " << k << " is:\n";
    conversion1(p, k);
    if (p == 0)
        cout << 0;
    cout << ".";
    conversion2(q * k, k, 4); //this will bring max of 4 decimal places
    if (q == 0)
        cout << 0;
    cout << endl;
    return 0;
}
