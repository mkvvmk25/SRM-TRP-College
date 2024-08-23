#include<stdio.h>
struct TreeNode
{
    int val; 
    struct TreeNode *leftAdd; 
    struct TreeNode *rightAdd; 
};

int main()
{
    struct TreeNode a,b,c; 
    a.val = 10;
    b.val = 20; 
    c.val = 30;

    a.leftAdd = &b; 
    a.rightAdd= &c;  

    printf("%d", a.leftAdd->val); 
    printf("%d", a.rightAdd->val); 

    
}