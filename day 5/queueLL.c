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

void enqueue(struct Node **head,
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


void dequeue(struct Node **head )
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
    else 
    {
        struct Node *temp = *head;
        *head = (*head)->nextAddress; 
        temp->nextAddress = NULL; 
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
    struct Node *linkhead1 = NULL; 
    struct Node *linkhead2 = NULL; 

    insertNodeInEnd(&linkhead1, 10); 
    insertNodeInEnd(&linkhead1, 20); 
    insertNodeInEnd(&linkhead1, 30); 
    insertNodeInEnd(&linkhead1, 40); 
    insertNodeInEnd(&linkhead1, 50); 
    insertNodeInEnd(&linkhead1, 60); 

    insertNodeInEnd(&linkhead2, 11);
    insertNodeInFront(&linkhead2, 70); 
    insertNodeInFront(&linkhead2, 75); 
    insertNodeInFront(&linkhead2, 78); 
    deleteNodeInBeg(&linkhead2); 
    // printf("%d",linkhead1->nextAddress->nextAddress->value); 


    struct Node *temp;
    temp = linkhead2; 
    while(temp != NULL)
    {
        printf("%d ", temp->value); 
        temp = temp->nextAddress; 
    }


    // int a = 10;
    // int *b = &a;
    // int **c = &b; 

}


// /* 
//  struct Node *a, *b, *c; 
//     a = createNewNode(10); // 1001
//     b = createNewNode(20); // 2001
//     c = createNewNode(30); // 3001





// //     int d = sizeof(int);  // 4
// //    int *p; 
// //    p = (int*)malloc( d ); 


// struct classroom 
// {
//     int size;
//     float height; 
//     char section;  
// };


//  // creatting nodes 
//     struct Node a;
//     a.value = 10;
//     a.nextAddress = NULL;
//     struct Node b;
//     b.value = 20; 
//     b.nextAddress = NULL;
//     struct Node c;
//     c.value = 30; 
//     c.nextAddress = NULL;
//     struct Node d;
//     d.value = 40; 
//     d.nextAddress = NULL;
//     struct Node e;
//     e.value = 50;  
//     e.nextAddress = NULL;


//     // connect the nodes 
//     a.nextAddress = &b; 
//     b.nextAddress = &c; 
//     c.nextAddress = &d; 
//     d.nextAddress = &e; 
    
//     // traversing linked list 
//     struct Node *head;
//     head = &a; // 1001  

//     struct Node *temp;
//     temp = head; // 1001 

//     while(temp != NULL) // 5 times
//     {
//         printf("%d ",temp->value); 
//         temp = temp->nextAddress; // nu1ll 
//     }




//     // /* 
//     //     member accessing opr 
//     //         ->  arrow opr   is for pointer var  
//     //         .   dot opr      is for normal struct variable 
//     //  */
//     // struct classroom  semhall, csehall, labroom; 
//     // semhall.height = 4.54f; 
//     // semhall.section = 'e';
//     // semhall.size = 45; 
//     // csehall.size = 50; 

//     // struct classroom *ptr, *btr; 
//     // ptr = &semhall; 
//     // btr = &csehall; 

//     // printf("%d ",ptr->size); 
//     // printf("%d",btr->size); 

