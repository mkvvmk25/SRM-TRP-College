#include<stdio.h>
#include<vector>
#include<queue>
#include<stdlib.h>
using namespace std; 
struct TreeNode
{
    int val; 
    struct TreeNode *leftAdd; 
    struct TreeNode *rightAdd; 
};


struct TreeNode *createNewNode(int val)
{
    int r = sizeof(struct TreeNode); 
    struct TreeNode *newNode = 
            (struct TreeNode*)malloc(r); 

    newNode->leftAdd = NULL; 
    newNode->rightAdd = NULL; 
    newNode->val = val; 

    return newNode; 
}

void bfs(struct TreeNode *root)
{
    queue<struct TreeNode*> que; 
    que.push(root);
    while(que.empty() != 1)
    {
        struct TreeNode *popAdd = que.front(); 
        que.pop(); 
        if(popAdd->leftAdd != NULL)
        {
            que.push(popAdd->leftAdd); 
        }
        if(popAdd->rightAdd != NULL)
        {
            que.push(popAdd->rightAdd); 
        }

        printf("%d ",popAdd->val);

    } 
}


void inorder(
    struct TreeNode *root)
{
    if(root != NULL)
    {
    inorder(root->leftAdd);
    printf("%d ",root->val);
    inorder(root->rightAdd); 
    }
    // return; 
}
int heighttree(struct TreeNode *root)
{
    if(root == NULL){
        return 0; 
    }
    int lh = heighttree(root->leftAdd);
    int rh = heighttree(root->rightAdd);  
    if(lh < rh){
        return rh + 1; 
    }
    return lh + 1; 
}
//  https://bit.ly/RA-230824 


void preorder(
    struct TreeNode *root)
{
    if(root != NULL)
    {
    printf("%d ",root->val);
    preorder(root->leftAdd);
    preorder(root->rightAdd); 
    }
    // return; 
}
void postorder(
    struct TreeNode *root)
{
    if(root != NULL)
    {
    postorder(root->leftAdd);
    postorder(root->rightAdd); 
    printf("%d ",root->val);
    }
    // return; 
}


int main()
{
    struct TreeNode *a, *b, *c, *d, *e; 

    a = createNewNode(10);
    b = createNewNode(20);
    c = createNewNode(30);
    d = createNewNode(40);
    e = createNewNode(50);

    a->leftAdd = b; 
    a->rightAdd = c; 
    b->rightAdd = d;
    d->leftAdd = e;  

    bfs(a); 
    inorder(a);




}


// // printf("%d", a.leftAdd->val); 
//     // printf("%d", a.rightAdd->val); 
//     int arr[5]; 
//     // vector<int> vrr;
//     // vrr.push_back(45); 
//     // vrr.push_back(55); 
//     // vrr.push_back(10); 
//     // vrr.push_back(20); 

//     // vrr.pop_back(); 
//     // vrr.


//     // for(int i = 0; i < vrr.size(); i++)
//     // {
//     //     printf("%d ", vrr[i]); 
//     // }

//     queue<int> que; 
//     que.push(10);
//     que.push(20);
//     que.push(30);
//     que.push(40);

//     int d = que.front();
//     int r = que.back();
//     int f = que.size();
//     printf("%d ",f);

