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

int rank(char c)
{
    if(c == '+' || c == '-')
    {
        return 2; 
    }
    if(c == '*' || c == '/' || c == '%')
    {
        return 3; 
    }

}

void inftopost(char *arr)
{
    char post[50];
    int p_ind = -1;  
    char stack[50]; 
    int top = -1; 
    int len = strlen(arr);

    for(int i = 0; i < len; i++)
    {
        // if see a oprand 
        // add in post 
        if(arr[i] >= 'a' && arr[i] <= 'z')
        {
            p_ind++; 
            post[p_ind] = arr[i]; 
        }
        else 
        {
            // ( 
             if(arr[i] == '(')
             {
                top++; 
                stack[top] = arr[i]; 
             }
             else if(arr[i] == ')')
             {
                // pop untill open para 
                while( stack[top] != '(' )
                {
                    p_ind++;
                    post[p_ind] = stack[top]; 
                    top--;
                }
                top--;
             }
             else 
             {
                // int topEleRank = rank(stack[top]);
                int incEleRank = rank(arr[i]);

                while(  top != -1 
                        && 
                        stack[top] != '(' 
                        &&  
                        rank(stack[top]) >= incEleRank)
                {
                    p_ind++;
                    post[p_ind] = stack[top]; 
                    top--;
                }
                // ele insert
                top++;
                stack[top] = arr[i]; 

             }
            
        }
    }

    // if stack is not empt 
    while(  top != -1 )
    {
        p_ind++;
        post[p_ind] = stack[top]; 
        top--;
    }

    printf("%s",post); 
}

int main()
{
 
    char arr[50] = "a*(b+c)/(d-e)*f%g+h";

    inftopost(arr); 
   

}