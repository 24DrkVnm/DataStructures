#include<stdio.h>
#include<string.h> 

int priority(char element)
        {
            if(element=='^')
            	return 3;
            else if(element=='*'||element=='/')
            	return 2;
            else if(element=='+'||element=='-')
            	return 1;
            else 
            		return 0;
            }	

void main() 
{
    char infix[20];
    char stack[20];
    int top=-1;
    int i=0;
    char element;

    printf("Enter the infix expression :\n");
    scanf("%s",infix);
    
   // printf("%s", infix);
    
   // printf("\nIt's postfix expression is :\n");

    
    while (infix[i]!='\0') 
    {
        element = infix[i];
       
        if(/*(element >= '0' && element <= '9') ||*/ (element >= 'a' && element <= 'z') || (element >= 'A' && element <= 'Z'))
        {
            printf("%c ", element);
        }
       
        else if(element == '(')
        {
            top++;
            stack[top] = element;
        }
        else if(element == ')') 
        {
            while(top>= 0 && stack[top] != '(')
            {
                printf("%c ", stack[top]);
               // char x = stack[top];
                top--;
               // if (x != '(')
                
            }
            }
            
        else 
        {
            while(priority(stack[top])>=priority(element))
            {
               if(priority(element)<priority(stack[top]))
               {
                    printf("%c",(stack[top]));
                    top--;
                
               }
               else if(priority(element)==priority(stack[top]))
               {
                    printf("%c",(stack[top]));
                    top--;
                    
               }
               
             }
             top++;
             stack[top]=element;
         }
               i++;
        }
        while(top!=-1)
        {
        	printf("%c",stack[top]);
        	top--;
        }
          
        }

      

       
