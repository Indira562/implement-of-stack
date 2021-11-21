#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
int main()
{
    top=-1;
    printf("Enter the size of STACK:");
    scanf("%d",&n);
    printf("STACK OPERATIONS USING ARRAY");
    printf("1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("EXIT POINT\n");
                break;
            }
            default:
            {
                printf ("Please Enter a Valid Choice");
            }
                
        }
    }
    while(choice!=4);
    return 0;
}
void push()
{
    if(top==n-1)
    {
        printf("STACK is over flow");
        
    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("Stack is under flow");
    }
    else
    {
        printf("The popped elements is %d",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("The elements in STACK \n");
        for(i=top; i>=0; i--)
        printf("%d\n",stack[i]);
        printf("Press Next Choice");
    }
    else
    {
        printf("The STACK is empty");
    }
   
}

