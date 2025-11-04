#include<stdio.h>
#define MAX 3
int queue[MAX];
int front=-1,rear=-1;
void enqueue()
{
 int value;
 if(rear==MAX-1)
 {
  printf("Queue Overflow\n");
 }
 else
 {
  printf("Enter the elements into queue\n");
  scanf("%d",&value);
  if(front==-1)
  front=0;
  queue[++rear]=value;
  printf("%d added to the queue\n",value);
 }
}
void dequeue()
{
 if(front==-1)
 {
  printf("Queue Underflow\n");
 }
 else
 { 
  printf("%d removed from the queue\n",queue[front++]);
  if(front>rear)
  {
   front=rear=-1;
  }
 }
}
void display()
{
 if(front==-1||front>rear)
 {
  printf("queue is empty\n");
 }
 else
 {
  printf("Queue elements:");
  for(int i=front;i<=rear;i++)
  {
   printf("%d\t",queue[i]);
  }
  printf("\n");
 }
}
int main()
{
 int c;
 while(1)
 {
  printf("1.ENQUEUE\n");
  printf("2.DEQUEUE\n");
  printf("3.DISPLAY\n");
  printf("4.EXIT\n");
  printf("Select your choice\n");
  scanf("%d",&c);
  switch(c)
  {
   case 1:enqueue();break;
   case 2:dequeue();break;
   case 3:display();break;
   case 4:printf("Exiting..\n");return 0;
   default:printf("Invalid Choice\n");
  } 
 }
 return 0;
}
