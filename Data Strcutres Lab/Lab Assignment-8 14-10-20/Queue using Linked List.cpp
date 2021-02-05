// Queue using Linked List

#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;

} *front = NULL, *rear = NULL;

void insert(int x)
{
    struct Node *t = (Node *)malloc(sizeof(Node));
    if (t == NULL)
        cout << "Queue Full" << endl;

    else
    {
        t->data = x;
        t->next = NULL;

        if (front == NULL)
        {
            front = t;
            rear = t;
        }
        else
        {
            rear->next = t;
            rear = t;
        }
    }
}

int remove()
{
    int x = -1;
    struct Node *t;
    if (front == NULL)
        printf("Queue is Empty\n");
    else
    {
        x = front->data;
        t = front;
        front = front->next;
        free(t);
    }
    return x;
}

void Display()
{
    Node *temp = front;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    //Inserting Elements
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    Display();
    int x = remove();
    cout << "Deleted Element: " << x << endl;
    x = remove();
    cout << "Deleted Element: " << x << endl;

    Display();

    return 0;
}
