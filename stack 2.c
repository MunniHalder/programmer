//Suppose you are going to design a program that will reverse the\\
input String .Implement this program with stack.
#include<stdio.h>
#include<string.h>
#define MAX 20
 typedef struct stack {
     char arr[MAX];
     int top;
 }stack;
 void push( stack *s,char data){
     if(s->top == MAX -1){
        printf("Full");
     }
     else
     {
         s->top++;
         s->arr[s->top]=data;
     }
 }
 int pop(stack *s){
     char v;
     if(s->top == -1){
        printf("Empty");
        v=-1;
     }
     else
     {
        v=s->arr[s->top];
        s->top--;

     }
     return v;
 }
 int main(){
     int j;
     for(j=1;j<=2;j++){
            printf("Test Case : %d\n",j);
     stack s;
     s.top == -1;
     int i;
     char input[20];

       printf("\n");

        gets(input);
        for(i=0;i<strlen(input);i++)
        {
            push(&s,input[i]);
        }
    while(s.top != -1){
        printf("%c",pop(&s));
     }
     printf("\n");
     }
return 0;
 }
