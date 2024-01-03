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
}

