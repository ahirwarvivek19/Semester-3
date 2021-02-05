#include <iostream>
using namespace std;

typedef struct node node;

struct node
{
    int data;
    node *next;
};
node *List = NULL;

void insert_first(int item)
{
    //create a new node
    node *p = (node *)malloc(sizeof(node));

    //initialise the node
    p->data = item;
    p->next = NULL;

    //case I
    if (List == NULL)
    {
        List = p;
    }
    else
    {
        p->next = List;
        List = p;
    }
}

void printList(node *p)
{
    while (p)
    {
        cout << p->data << "->";
        p = p->next;
    }
}

int main()
{
    cout << "Insert at first" << endl;
    insert_first(1);
    insert_first(2);
    insert_first(3);
    printList(List);

    return 0;
}