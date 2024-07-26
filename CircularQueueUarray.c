#include <stdio.h>
#define Max 10
int CircularQ[Max];
int front = -1, rear = -1;

// Function declaration
void insert();
void delete();
void display();


// Main Function
void main()
{

    int ch;
    do
    {
        printf("\n-----------CIRCULAR OPERATION-------");
        printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit");
        printf("\n----------------------------------");
        printf("\nEnter your choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            delete();
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

// Function defination
void insert()
{
    if ((rear+1)%Max==front)
        printf("\nQueue is full");
    else
    {
        int el;
        printf("\nEnter a Element : ");
        scanf("%d", &el);
        if (rear==-1)
        {
            rear=0;
            front=0;
        }
        else{
            rear=(rear+1)%Max;
        }
        CircularQ[rear] = el;
        printf("Inserted...");
    }
}

void delete()
{
    if (rear==-1 && front==-1)
        printf("\nQueue is Empty");
    else
    {
        int el;
        el = CircularQ[front];

        if (front==rear)
        {
            front=-1;
            rear=-1;
        }
        else{
            front=(front+1)%Max;
        }
        printf("Deleted Element: %d",el);
    }
}

void display()
{
    if (front==-1 && rear==-1)
        printf("\nQueue is empty");
    else
    {
        printf("\nElements of Queue : ");
        int i = front;
        while (i != rear)
        {
            printf("\n%d", CircularQ[i]);
            i=(i+1)%Max;
        }
        printf("\n%d", CircularQ[i]);
    }
}