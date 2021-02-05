
// 4. Write a program in c/c++ to calculate HCF(M,N) where M>N using "Euclid's division method" using recursion.

#include <iostream>
using namespace std;

//GCD=HCF
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    int M, N;
    cout << "Enter two number M & N to find HCF" << endl;
    cin >> M >> N;
    cout << "HCF of " << M << " & " << N << "  =  " << gcd(M, N);

    return 0;
}