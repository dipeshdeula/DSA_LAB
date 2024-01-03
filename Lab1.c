/* Implementation of different operations related to stack


#include<stdio.h>
#define MAXSIZE 5
void PUSH();
void display();
void POP();
int isFull();
int isEmpty();
void search();
int top=-1;
int arr[MAXSIZE];
int main(){
    PUSH(50);
    PUSH(40);
    PUSH(30);
    PUSH(20);
    PUSH(10);
    PUSH(5);
    display();
    search(10);
    search(5);
    POP();
    display();
}
void PUSH(int a){
    if(isFull()){
        printf("Stack Overflow\n");
    }else
    {
       top=top+1;
       arr[top]=a;
       printf("%d pushed into the Stack\n",a);
    }
    
}
void display(){
    if(isEmpty()){
        printf("Stack Underflow \n");
    }else{
        for(int i=top;i>=0;i--){
            printf("\n%d\t ",arr[i]);
        }
    }
}
void POP(){
    if(isEmpty()){
        printf("Stack Underflow\n");
    }else{
        printf("\n%d Poped from the Stack\n",arr[top]);
        top=top-1;
    }
}
void search(int x){
    int i;
    for(i=0;i<=top;i++){
        if(arr[i]==x){
            printf("\nElement found at position %d\n",x);
            break;
        }
    }
    if(i==top+1){
        printf("\n%dElement not Found in the Stack\n",x);
    }
}
int isFull(){
    return (top == MAXSIZE - 1) ? 1 : 0;
}
int isEmpty(){
    return (top == -1) ? 1 : 0;
}

*/
/*


//Implementation of different operations related to linear queue

#include<stdio.h>
#include<stdbool.h>
#define MAX_SIZE 5

//structure to represent a linear queue
struct linearQueue{
    int queue[MAX_SIZE];
    int front, rear;
    };
//Function to check if the queue is empty
bool isEmpty(struct linearQueue *q){
    return q->front==-1;
}
//Function to check if the queue is full
bool isFull(struct linearQueue *q){
    return ((q->rear + 1)%MAX_SIZE==q->front);
}
//function to enqueue an element into the queue
void enqueue(struct linearQueue* q, int x){
    //If the queue is already full then print "Overflow"
    if(isFull(q)){
        printf("Queue is full. Cannot enqueue %d\n",x);
        return ;
    }
    //Insert at the end of the queue and increment the rear index
    if(isEmpty(q)){
        q->front=q->rear=0;
    }else{
        q->rear=(q->rear+1)%MAX_SIZE;
    }
    q->queue[q->rear]=x;
}

//Function to dequeue an element from the queue
int dequeue(struct linearQueue *q){
    if(isEmpty(q)){
        printf("Queue is empty. Cannot dequeue\n");
        return -1; //return a sentinel value to indicate failure
    }
    int x=q->queue[q->front];
    if(q->front==q->rear){
        //The queue has only one element
        q->front=q->rear=-1;
    }else{
        q->front=(q->front+1)%MAX_SIZE;
    }
    return x;
}
//function to display the elements of the queue
void display(struct linearQueue *q){
    if(isEmpty(q)){
        printf("Queue is empty.\n");
        return;
    }
    int i=q->front;

    do{
        printf("%d ",q->queue[i]);
        i=(i+1)%MAX_SIZE;
        }while(i!=(q->rear+1)%MAX_SIZE);

    
    printf("\n");
}
int main(){
    struct linearQueue queue;
    queue.front=queue.rear=-1;

    //Enqueue some elements
    enqueue(&queue,1);
    enqueue(&queue,2);
    enqueue(&queue,3);
    enqueue(&queue,4);
    enqueue(&queue,5);
    //Display the elements in the queue
    printf("Queue:");
    display(&queue);

    //Dequeue some elements
    int x1=dequeue(&queue);
    int x2=dequeue(&queue);

    printf("Dequeued:%d,%d\n",x1,x2);

    printf("Queue after dequeue:");
    display(&queue);
    return 0;
}

*/