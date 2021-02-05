#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};
node *List = NULL;

void Insert_First(int item)
{
    //Create a new node
    node *p = (node *)malloc(sizeof(node));

    //Initialize the node
    p->data = item;
    p->next = NULL;

    // Case I
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

void Insert_Last(int item)
{
    // Create a new node and initialize
    node *p = (node *)malloc(sizeof(node));
    p->data = item;
    p->next = NULL;

    // Case I
    if (List == NULL)
    {
        List = p;
    }

    else
    {
        node *temp = List;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = p;
    }
}

void Inert_At_Position(int pos,int item)
{
    node * temp = List;






    


}

void Delete_First()
{
    if(List==NULL)
    {
        cout<<"List is empty"<<endl;
    }

    else
    {
        node * temp= NULL;
        temp = List;
        List = List->next;
        free(temp);
    }
    
}

void Delete_Last()
{
    node * temp = List,*temp1=NULL;

    while (temp->next->next!=NULL)
    {
        temp = temp->next;
    }
    temp1 = temp->next;
    temp->next=NULL;
    free(temp1);
}

void printList()
{
    node * temp = List;
    while (temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    
}

int main()
{
    cout<<endl;
    Insert_First(1);
    Insert_First(2);
    Insert_Last(3);
    Insert_Last(4);
    Insert_Last(5);
    Insert_Last(6);
    printList();
    Delete_First();
    Delete_Last();

    return 0;
}