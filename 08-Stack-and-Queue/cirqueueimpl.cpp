#include <iostream>
using namespace std;

#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;
int cnt = 0;

void enqueue() {
    int value;

    if (cnt == SIZE) {
        cout << "Queue is full" << endl;
        return;
    }

    if (rear == -1) {
        front = 0;
        rear = 0;
    } else {
        rear = (rear + 1) % SIZE;
    }

    cout << "Enter element: ";
    cin >> value;

    queue[rear] = value;
    cnt++;
}

void dequeue() {
    if (cnt == 0) {
        cout << "Queue is empty" << endl;
        return;
    }

    cout << "Deleting: " << queue[front] << endl;

    front = (front + 1) % SIZE;
    cnt--;
}

void display() {
    if (cnt == 0) {
        cout << "Queue is empty" << endl;
        return;
    }

    int i = front;

    for (int c = 0; c < cnt; c++) {
        cout << queue[i] << " ";
        i = (i + 1) % SIZE;
    }

    cout << endl;
}

void isEmpty() {
    if (cnt == 0)
        cout << "Queue is empty" << endl;
    else
        cout << "Queue is not empty" << endl;
}

void isFull() {
    if (cnt == SIZE)
        cout << "Queue is full" << endl;
    else
        cout << "Queue is not full" << endl;
}

int main() {
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    enqueue();

    isFull();
    display();

    dequeue();
    display();

    enqueue();
    display();

    isEmpty();
    isFull();

    return 0;
}