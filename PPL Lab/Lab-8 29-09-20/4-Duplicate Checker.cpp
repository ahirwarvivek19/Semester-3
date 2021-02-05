// 4.	write a program in c/c++ to detect duplicate node(s) if exists in a linked list.

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

//Function to insert a element at postion of (n/2 + 2)th
void insertAtPos(int data)
{
    node *temp = head, *prev = NULL;
    int n = 0;

    //Counting the elements of list
    while (temp)
    {
        n++;
        temp = temp->next;
    }

    //Inserting a node at (n/2 + 2) th  position
    int pos = (n / 2) + 2;

    node *p = (node *)malloc(sizeof(node));
    p->data = data;
    p->next = NULL;

    temp = head;
    while ((pos)-- > 1 && temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }

    prev->next = p;
    p->next = temp;
}

//Function to delete nth last node from list
void delete_List(int pos)
{
    int n = 0;
    node *temp = head, *prev = NULL;
    while (temp)
    {
        n++;
        temp = temp->next;
    }

    int posFromFirst = n - pos;
    temp = head;

    while (posFromFirst-- > 0 && temp != NULL)
    {
        prev = temp;
        temp = temp->next;
    }

    prev->next = temp->next;
    free(temp);
    cout << "Last " << n << "th Element succesfully deleted" << endl;
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

void checkDuplicate(node *list)
{
    int count = 0;
    node *temp = list, *ptr = NULL;
    int index = 0, i2 = 0;
    while (temp != NULL && temp->next != NULL)
    {
        index++;
        ptr = temp->next;
        count = 0;
        i2 = index;
        while (ptr != NULL)
        {
            i2++;
            if (temp->data == ptr->data)
            {
                count++;
                cout << temp->data << " is a duplicate element at index " << i2 << endl;
            }
            ptr = ptr->next;
        }

        temp = temp->next;
    }
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

    // Inserting node at  (n/2 + 2)th index
    cout << "Enter value to insert at (n/2 + 2)th index: ";
    int temp;
    cin >> temp;
    insertAtPos(temp);
    cout << endl;

    cout << "List after 1st operation (inserting at n/2 + 2)" << endl;
    print_List(head);
    cout << endl;

    delete_List(3);

    cout << "\nList after 2nd operation (deleting last 3rd element)" << endl;
    print_List(head);
    cout << endl;

    checkDuplicate(head);

    return 0;
}