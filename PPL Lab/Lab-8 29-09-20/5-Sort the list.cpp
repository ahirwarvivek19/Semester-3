// 5.	write a program in c/c++ to sort the linked list after implementation of question 2

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

//Function to sort the linked list
void sortList(node *list)
{
    node *temp1 = list;
    node *temp2 = NULL;

    while (temp1)
    {
        temp2 = temp1->next;
        while (temp2)
        {
            if (temp1->data > temp2->data)
            {
                swap(temp1->data, temp2->data);
            }
            else
            {
                temp2 = temp2->next;
            }
        }
        temp1 = temp1->next;
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

    sortList(head);

    cout << "List after sorting" << endl;
    print_List(head);
    cout << endl;

    return 0;
}