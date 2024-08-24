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
        if(popAdd->leftAdd != NULL){
            que.push(popAdd->leftAdd); 
        }
        if(popAdd->rightAdd != NULL){
            que.push(popAdd->rightAdd); 
        }
        printf("%d ",popAdd->val);
    } 
}
void CBTinsert(
    struct TreeNode **root, 
        int val)
{
    struct TreeNode *newNode = 
                createNewNode(val); 

    if(*root == NULL)
    {
        *root = newNode; 
        return; 
    }
    queue<struct TreeNode*> que; 
    que.push(*root);
    while(que.empty() != 1)
    {
        struct TreeNode *popAdd = que.front(); 
        que.pop(); 
        if(popAdd->leftAdd != NULL){
            que.push(popAdd->leftAdd); 
        }
        else 
        {
            // instert 
            popAdd->leftAdd = newNode;
            return; 
        }
        if(popAdd->rightAdd != NULL){
            que.push(popAdd->rightAdd); 
        }
        else 
        {
            // instert 
            popAdd->rightAdd = newNode;
            return; 
        }
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



//// BST 

struct TreeNode* insertBst(struct TreeNode *root, int val
)
{
    if(root == NULL)
    {
        return createNewNode(val); // a6
    }
    else if(val < root->val)
    {
        root->leftAdd = 
        insertBst(root->leftAdd, val);
    }
    else if(val > root->val)
    {
        root->rightAdd = 
        insertBst(root->rightAdd, val); 
    }

    return root; 

}

int main()
{
    struct TreeNode *root = NULL;
    root = insertBst(root, 6); 
    root = insertBst(root, 10); 
    root = insertBst(root, 3); 
    root = insertBst(root, 4); 
    root = insertBst(root, 11); 
    root = insertBst(root, 50); 
    root = insertBst(root, 8); 
    root = insertBst(root, 15); 

    inorder(root);
    printf("\n");
    preorder(root);
    printf("\n");
    postorder(root);
    printf("\n");
    // bfs(root); 
    https://bit.ly/ZO-240824 
}

