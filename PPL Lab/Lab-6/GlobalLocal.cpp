#include <iostream>
using namespace std;

int x = 1;

void useLocal();
void useStaticLocal();
void useGlobal();

int main()
{
    cout << "x=" << x << '\n';
    int x = 5;
    cout << "x=" << x << '\n';
    {
        cout << "x=" << x << '\n';
        int x = 10;
        cout << "x=" << x << '\n';
    }
    cout << "x=" << x << '\n';
    useLocal();
    useStaticLocal();
    useGlobal();
    useLocal();
    useStaticLocal();
    useGlobal();

    return 0;
}

void useLocal()
{
    int x = 25;
    cout << "x= " << x << '\n';
    x++;
    cout << "x= " << x << '\n';
}

void useStaticLocal()
{
    static int x = 50;
    cout << "x= " << x << '\n';
    x++;
    cout << "x= " << x << '\n';
}

void useGlobal()
{

    cout << "x= " << x << '\n';
    x *= 10;
    cout << "x= " << x << '\n';
}
