#include<stdio.h>
#include<string.h>

int stack[5];
int size = 5; 
int top = -1 ;

void push(int val)
{
    if(top == size - 1)
    {
        printf("stack overflow");
    }
    else 
    {
        top++;
        stack[top] = val; 
    }
}
void pop()
{
    if(top == -1)
    {
        printf("underflow");
    }
    else 
    {
        top--; 
    }
}
int peek()
{
    if(top == -1)
    {
        printf("underflow");
    }
    else 
    {
        return stack[top]; 
    }
}

int validPara(char *arr)
{
    int r = strlen(arr); 
    char stack[50]; 
    int top = -1; 
    for(int i = 0; i < r; i++)
    {
        if(arr[i] == '(' || 
            arr[i] == '[' ||
                arr[i] == '{') 
         {
            top++; 
            stack[top] = arr[i]; 
         }
         else 
         {
            if(arr[i] == '}' && 
                stack[top] == '{')
                {
                    top--;
                }
            else if(arr[i] == ')' && 
                stack[top] == '(')
                {
                    top--;
                }
            else if(arr[i] == ']' && 
                stack[top] == '[')
                {
                    top--;
                }
            else 
            {
                return 0; 
            }
         }
    }

    if(top != -1)
    {
        return 0;  
    }
    else 
    {
        return 1; 
    }
} 
int main()
{
    char arr[50] = "({})[{}]"; 
    int ans = validPara(arr); 
    printf("%d", ans); 

    // a*(b+c)/(d-e)*f%g+h
    // 
}