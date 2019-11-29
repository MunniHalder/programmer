#include<stdio.h>
#include<string.h>
#define MAX 20
 typedef struct stack {
     int arr[MAX],top;
 }stack;
 void push( stack *s,int data){
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
     int v;
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
            printf("Test Case : %d",j);
     stack s;
     s.top =-1;
     int n,m,i;
     scanf(" %d %d",&n,&m);
     printf("\nN : %d",n);
     printf("\nM : %d",m );
     int input;
     for(i=0;i<n;i++){
        scanf("%d",&input);
        push(&s,input);
     }
     for(i=0;i<m;i++){
        printf(" %d \n",pop(&s));
     }
     printf("\n");
    }
     return 0;
     }




