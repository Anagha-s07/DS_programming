#include<stdio.h>
# define MAX 3
int stack[MAX],top=-1,element;
void push()
{
if(top==MAX-1)
{
printf("Stack overflow");
}
else
{
printf("Enter the element for push:\n");
scanf("%d",&element);
top=top+1;
stack[top]=element;
printf("%d pushed on to stack\n",element);
}}
void pop()
{
if(top==-1)
{printf("stack underflow\n");
}
else
{
element=stack[top];
top=top-1;
printf("%d popped from stack\n",element);
}}
void display()
{
if(top==-1)
{
printf("stack is empty\n");
}
else
{
printf("\n stack elements:");
for(int i=top;i>=0;i--)
{
printf("%d\t",stack[i]);
}
printf("\n");
}}

int main()
{
int c;
while(1)
{
printf("1.PUSH\n");
printf("2.POP\n");
printf("3.DISPLAY\n");
printf("4.EXIT\n");
printf("Select your choice:");
scanf("%d",&c);
switch(c)
{
case 1:push();break;
case 2:pop();break;
case 3:display();break;
case 4:printf("Exiting..\n");return 0;
default:printf("Invalid choice\n");
}} 
return 0;
}      




