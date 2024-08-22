#include<stdio.h>
#include<stdlib.h>

struct Node 
{
    int value; // 4
    struct Node *nextAddress;  // 8 
};

struct Node* createNewNode(int val)
{
    int r = sizeof(struct Node);  
    struct Node *ptr;
    ptr = (struct Node*) malloc(r); // 1001
    ptr->value = val;
    ptr->nextAddress = NULL; 
    return ptr; 
}

void push(struct Node **head,
        int val)
{
    // to create a node 
    struct Node *newNode = createNewNode(val); // 2001

    if(*head == NULL)
    {
        // this tell linked list is empty 
        *head = newNode; 
    }
    else 
    {
        // how to get last node address 
        struct Node *temp;
        temp = *head; 
        while(temp->nextAddress != NULL)
        {
            temp = temp->nextAddress; 
        }

        temp->nextAddress = newNode; 
    }

}

void pop(struct Node **head )
{
    // 1
    if(*head == NULL)
    {
        printf("no ele is there"); 
    }
    // 2
    else if( (*head)->nextAddress == NULL) 
    {
        *head = NULL; 
    }
    // 3 
    else 
    {
        struct Node *temp = *head; 
        while(temp->nextAddress->nextAddress != NULL)
        {
            temp = temp->nextAddress; 
        }

        // t = a2 
        temp->nextAddress = NULL; 
    }
}


int peekEle(struct Node **head)
{
    if(*head == NULL)
    {
        printf("no ele is there"); 
    }
    else 
    {
        struct Node *temp;
        temp = *head; 
        while(temp->nextAddress != NULL)
        { 
            temp = temp->nextAddress; 
        }
        return temp->value; 
    }
}

void printLL(struct Node **head)
{
    struct Node *temp;
    temp = *head; 
    while(temp != NULL)
    {
        printf("%d ", temp->value); 
        temp = temp->nextAddress; 
    }
    printf("\n");
}

int main()
{

}
