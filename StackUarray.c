#include <stdio.h>
#include <conio.h>
#define Max 10
int Stack[Max], top = -1;

// Function declaration
void push();
void pop();
void display();

// Main Function
void main()
{

    int ch;
    do
    {
        printf("\n-----------STACK OPERATION-------");
        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");
        printf("\n----------------------------------");
        printf("\nEnter your choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;

        default:
            printf("Please Enter a Valid choice");
            break;
        }
    } while (ch != 4);
}

// Functions Implementation

void push()
{
    if (top == Max - 1)
        printf("\nStack is full.");
    else
    {
        int el;
        printf("\nEnter the Element:");
        scanf("%d", &el);
        top++;
        Stack[top] = el;
        printf("\nWork Done");
    }
}
void pop()
{
    if (top == -1)
        printf("\nStack is empty.");
    else
    {
        int el;
        el = Stack[top];
        top--;
        printf("\nPoped Element : %d", el);
    }
}
void display()
{
    if (top == -1)
        printf("\nStack is empty.");
    else
    {
        printf("\nElements of Stack :");
        for (int i = top; i >= 0; i--)
        {
            printf("\n%d", Stack[i]);
        }
    }
}
