#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue(int x){
    if(rear == MAX - 1){
        printf("Queue Overflow\n");
    }
    else{
        if(front == -1)
            front = 0;
        rear++;
        queue[rear] = x;
        printf("%d enqueue\n", x);
    }
}

void dequeue(){
    if(front == -1 || front > rear){
        printf("Queue Underflow\n");
    } 
    else {
        printf("%d dequeue\n", queue[front]);
        front++;
    }
}

void peek(){
    if(front == -1 || front > rear){
        printf("Queue is Empty\n");
    } 
    else {
        printf("Front element is %d\n", queue[front]);
    }
}

void display(){
    if(front == -1 || front > rear){
        printf("Queue is Empty\n");
    } 
    else {
        printf("Queue elements: ");
        for(int i = front; i <= rear; i++){
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main(){
    enqueue(10);
    peek();
    enqueue(20);
    peek();
    enqueue(30);
    peek();
    display();
    return 0;
}
