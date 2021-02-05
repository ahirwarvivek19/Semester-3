#include <iostream>
using namespace std;
int count = 1;
void func(int n)
{
    count += 1;
    if (n <= 2)
        return;
    else
        func(n - 1);
    func(n - 1);
}

int main()
{
    int num, result;
    cout << "Enter the value of argument: ";
    cin >> num;
    func(num);
    cout << "Number of times function call= " << count;

    return 0;
}
