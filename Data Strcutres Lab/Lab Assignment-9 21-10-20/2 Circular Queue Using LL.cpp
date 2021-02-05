// Circular Queue  Using Linked List

#include <bits/stdc++.h>
using namespace std;

// Node
struct Node
{
    int data;
    struct Node *link;
};
// Queue
struct Queue
{
    struct Node *front, *rear;
};

// Creating Circular queue
void enQueue(Queue *q, int value)
{
    struct Node *temp = new Node;
    temp->data = value;
    if (q->front == NULL)
        q->front = temp;
    else
        q->rear->link = temp;

    q->rear = temp;
    q->rear->link = q->front;
}

// Delete element from Circular Queue
int deQueue(Queue *q)
{
    if (q->front == NULL)
    {
        cout << "Queue is empty";
        return INT_MIN;
    }

    int value;
    // If this is the last node to be deleted
    if (q->front == q->rear)
    {
        value = q->front->data;
        free(q->front);
        q->front = NULL;
        q->rear = NULL;
    }
    else // if more than one nodes
    {
        struct Node *temp = q->front;
        value = temp->data;
        q->front = q->front->link;
        q->rear->link = q->front;
        free(temp);
    }

    return value;
}

// Display the elements of Circular Queue
void displayQueue(struct Queue *q)
{
    struct Node *temp = q->front;
    cout << "\nElements in Circular Queue are: ";
    while (temp->link != q->front)
    {
        cout << temp->data;
        temp = temp->link;
    }
    cout << temp->data;
}

//  Driver code
int main()
{
    // Creating a queue
    Queue *q = new Queue;
    q->front = q->rear = NULL;

    // Inserting elements
    enQueue(q, 14);
    enQueue(q, 22);
    enQueue(q, 6);

    // Display elements
    displayQueue(q);

    // Deleting elements
    cout << "\nDeleted value = " << deQueue(q);
    cout << "\nDeleted value = " << deQueue(q);

    // Display elements
    displayQueue(q);

    // Again Inserting elements
    enQueue(q, 9);
    enQueue(q, 20);

    // Display elements
    displayQueue(q);

    return 0;
}
