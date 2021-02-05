//1.	write a program in c/c++ to insert 10 elements in a linked list.

#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *head = NULL;

//Function to insert element at last position
void insert_Last(int data)
{
    node *p = (node *)malloc(sizeof(node));
    p->data = data;
    p->next = NULL;

    //If list is empty
    if (head == NULL)
    {
        head = p;
    }
    else
    {
        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = p;
    }
}

//Function to traverse and print the list
void print_List(node *list)
{
    while (list != NULL)
    {
        if (list->next == NULL)
        {
            cout << list->data;
        }
        else
        {
            cout << list->data << " -> ";
        }

        list = list->next;
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the no. of element to insert: ";
    cin >> n;
    cout << "Enter " << n << " the elements of list" << endl;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        insert_Last(temp);
    }

    cout << endl
         << endl;

    cout << "Entered list: " << endl;
    print_List(head);
    cout << endl;

    return 0;
}