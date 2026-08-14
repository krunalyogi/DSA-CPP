#include <iostream>
using namespace std;

#define SIZE 5

int q[SIZE];
int front = -1;
int rear = -1;

void enqueue()
{
    int value;

    if (rear == SIZE - 1)
    {
        cout << "Queue is full" << endl;
        return;
    }

    cout << "Enter element in queue: ";
    cin >> value;

    rear++;
    q[rear] = value;

    if (front == -1)
        front = 0;
}

void dequeue()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue is empty" << endl;
        return;
    }

    cout << "Deleted: " << q[front] << endl;
    front++;
}

void display()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue is empty" << endl;
        return;
    }

    for (int i = front; i <= rear; i++)
    {
        cout << q[i] << " ";
    }

    cout << endl;
}

int main()
{
    enqueue();
    enqueue();

    display();

    dequeue();

    display();

    return 0;
}