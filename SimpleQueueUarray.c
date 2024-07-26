#include <stdio.h>
#include <conio.h>
#define Max 10
int Queue[Max];
int front = 0, rear = -1;

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
        printf("\n-----------QUEUE OPERATION-------");
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
    if (rear == Max - 1)
        printf("\nQueue is full");
    else
    {
        int el;
        printf("\nEnter a Element : ");
        scanf("%d", &el);
        rear++;
        Queue[rear] = el;
        printf("Inserted...")
    }
}

void delete()
{
    if (front > rear)
        printf("\nQueue is Empty");
    else
    {
        int el;
        el = Queue[front];
        front++;
        printf("Deleted Element: %d",el);
    }
}

void display()
{
    if (front > rear)
        printf("\nQueue is empty");
    else
    {
        printf("\nElements of Queue : ");
        for (int i = rear; i >= front; i--)
        {
            printf("\n%d", Queue[i]);
        }
    }
}