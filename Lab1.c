/* Implementation of different operations related to stack
*/

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