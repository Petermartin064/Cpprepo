#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = -1;
int rear = -1;

void enqueue(int elem) {
    if (rear == MAX_SIZE - 1) {
        printf("Queue is full\n");
        return;
    }
    if (front == -1) {
        front = 0;
        rear = 0;
        queue[rear] = elem;
        return;
    }
    int i;
    for (i = rear; i >= front; i--) {
        if (elem > queue[i]) {
            queue[i + 1] = queue[i];
        } else {
            break;
        }
    }
    queue[i + 1] = elem;
    rear++;
}

int dequeue() {
    if (front == -1) {
        printf("Queue is empty\n");
        return -1;
    }
    int elem = queue[front];
    if (front == rear) {
        front = -1;
        rear = -1;
    } else {
        front++;
    }
    return elem;
}

void display() {
    if (front == -1) {
        printf("Queue is empty\n");
        return;
    }
    int i;
    for (i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    enqueue(5);
    enqueue(8);
    enqueue(2);
    enqueue(9);
    display();
    printf("Dequeueing: %d\n", dequeue());
    display();
    printf("Dequeueing: %d\n", dequeue());
    display();
    enqueue(11);
    display();
    return 0;
}


