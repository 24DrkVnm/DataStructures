#include <stdio.h>
#include <string.h> 

int priority(char element)
        {
            if(element=='^')
            	return 3;
            if(element=='*'||element=='/')
            	return 2;
            if(element=='+'||element=='-')
            	return 1;
            //else 
            	//	return -1;
            }	

int main() {
    char infix[20];
    char stack[20];
    int top = -1;
    int i = 0;
    char element;

    printf("Enter the infix expression :\n");
    scanf("%s", infix);
    
   // printf("%s", infix);
    
   // printf("\nIt's postfix expression is :\n");

    
    while (infix[i] != '\0') {
        char element = infix[i];

       
        if (/*(element >= '0' && element <= '9') ||*/ (element >= 'a' && element <= 'z') || (element >= 'A' && element <= 'Z')) {
            printf("%c ", element);
        }
       
        else if (element == '(')
        {
            top++;
            stack[top] = element;
        }
        else if (element == ')') 
        {
            while (top >= 0 && stack[top] != '(')
            {
                printf("%c ", element);
               // char x = stack[top];
                top--;
               // if (x != '(')
                
            }}
            
        else {
            while(priority(stack[top])>=priority(infix[i])){
               if(priority(infix[i])<priority(stack[top]))
               {
                    printf("%c",(stack[top]));
                    top--;
                
               }
               else if(priority(infix[i])==priority(stack[top]))
               {
                    printf("%c",(stack[top]));
                    top--;
                    
               }}
               stack[top]=infix[i];
               }
        }
          i++;
        }

      

       
