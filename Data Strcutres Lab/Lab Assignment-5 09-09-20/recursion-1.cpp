#include <iostream>
using namespace std;

int count = 0;
int func(int n)
{
    if (n <= 2)
    {
        count++;
        return 5;
    }
    else
    {
        count = count + 1;
        return (func(n - 1) + func(n / 2));
    }
}

int main()
{
    int num, result;

    cout << "Enter the value of argument: ";
    cin >> num;
    result = func(num);
    cout << result;
    cout << "Number of times function call= %d\n"
         << count;

    return 0;
}
