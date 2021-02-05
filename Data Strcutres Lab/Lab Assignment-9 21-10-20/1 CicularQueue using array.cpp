// Circular Queue  Using Array
#include <iostream>
using namespace std;

#define size 5
int Queue[size];
int Front = 0, Rear = 0;

void insert(int item)
{
    if (Front == (Rear + 1) % size)
        cout << "Queue Full" << endl;
    else
    {
        Rear = (Rear + 1) % size;
        Queue[Rear] = item;
    }
}

int Remove()
{
    int item_removed;
    if (Front == Rear)
    {
        cout << "Queue Empty" << endl;
    }
    else
    {
        Front = (Front + 1) % size;
        item_removed = Queue[Front];
    }
    return item_removed;
}

void display()
{
    int i = Front + 1;
    while (i != (Rear + 1) % size)
    {

        cout << Queue[i] << " ";
        i = (i + 1) % size;
    }

    cout << endl;
}

int main()
{

    insert(1);
    insert(2);
    insert(3);
    display();
    insert(3);
    insert(3);
    display();

    return 0;
}
