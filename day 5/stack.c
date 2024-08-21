#include<stdio.h>


struct classroom 
{
    int size;
    float height; 
    char section;  
};

struct Node 
{
    int value;
    struct Node *nextAddress; 
};


int main()
{
    // creatting nodes 
    struct Node a;
    a.value = 10;
    a.nextAddress = NULL;
    struct Node b;
    b.value = 20; 
    b.nextAddress = NULL;
    struct Node c;
    c.value = 30; 
    c.nextAddress = NULL;
    struct Node d;
    d.value = 40; 
    d.nextAddress = NULL;
    struct Node e;
    e.value = 50;  
    e.nextAddress = NULL;


    // connect the nodes 
    a.nextAddress = &b; 
    b.nextAddress = &c; 
    c.nextAddress = &d; 
    d.nextAddress = &e; 
    
    // traversing linked list 
    struct Node *head;
    head = &a; // 1001  

    struct Node *temp;
    temp = head; // 1001 

    while(temp != NULL) // 5 times
    {
        printf("%d ",temp->value); 
        temp = temp->nextAddress; // nu1ll 
    }




    // /* 
    //     member accessing opr 
    //         ->  arrow opr   is for pointer var  
    //         .   dot opr      is for normal struct variable 
    //  */
    // struct classroom  semhall, csehall, labroom; 
    // semhall.height = 4.54f; 
    // semhall.section = 'e';
    // semhall.size = 45; 
    // csehall.size = 50; 

    // struct classroom *ptr, *btr; 
    // ptr = &semhall; 
    // btr = &csehall; 

    // printf("%d ",ptr->size); 
    // printf("%d",btr->size); 



}
