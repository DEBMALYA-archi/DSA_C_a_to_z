#include<stdio.h>
int main()
{
    
}
int dequeue()// check underflow...1st check
{
    int data,front , rear ;
    if (front==-1)
    {
        printf("the queue is empty");
        return 0;
    }
data = a[front];

if (front == rear)
{
    front = rear = -1;
}
else
{
    front++;
}

return data;
}