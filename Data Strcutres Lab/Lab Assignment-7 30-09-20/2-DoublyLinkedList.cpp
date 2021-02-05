#include <bits/stdc++.h>
using namespace std;

struct node
{
    node *prev;
    int data;
    node *next;
};
node *List = NULL;

void Insert_First(int item)
{
    node *p = (node *)malloc(sizeof(node));
    p->prev = NULL;
    p->data = item;
    p->next = NULL;

    if (List == NULL)
    {
        List = p;
    }
    else
    {
        p->next = List;
        List->prev = p;
        List = p;
    }
}

void Insert_Last(int item)
{
    node *p = (node *)malloc(sizeof(node));
    p->prev = NULL;
    p->data = item;
    p->next = NULL;

    if(List==NULL)
    {
        List = p;
    }
    else
    {
        node * temp = List;
        while (temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = p;
        p->prev = temp;
        
    }
    
}

void Delete_First()
{
    if(List ==NULL)
    {
        cout<<"Empty Linked List"<<endl;
    }
    else if(List->next == NULL)
    {
        node* temp = List;
        List =NULL;
        free(temp);
        
    }
    else
    {
        node * temp = List;
        temp->next->prev = NULL;
        List = temp->next;
        free(temp);
    }
    
    

}

void Delete_Last()
{
    node * temp = List;

    


}


int main()
{

    return 0;
}