// #include<bits/stdc++.h>
// using namespace std;
// int pr(char ch){
//     if(ch=='+' || ch=='-') return 1;
//     return 2;
// }
// string solve(string val1,string val2,char ch){
//     string s="";
//     s+=val1;
//     s+=val2;
//     s.push_back(ch);
//     return s;
// }
// int main(){
//     string s="(7+9)*4/8-3";
//     stack<string> val;
//     stack<char> op;
//     for(int i=0;i<s.size();i++){
//         if(s[i]>=48 && s[i]<=57 ){
//             //cout<<s[i]<<endl;
//             val.push(to_string(s[i]-48));
//         }
//         else{
//             if(op.size()==0) op.push(s[i]);
//             else if(s[i]=='(') op.push(s[i]); 
//             else if(op.top()=='(' ) op.push(s[i]);
//             else if(s[i]==')'){
//                 while(op.top()!='('){
//                     char ch=op.top();
//                     op.pop();
//                     string val2=val.top();
//                     val.pop();
//                     string val1=val.top();
//                     val.pop();
//                     string ans=solve(val1,val2,ch);
//                     val.push(ans);  
//                     //cout<<ans<<endl; 
//                 }
//                 op.pop();
//             }
//             else if(pr(s[i])>pr(op.top())) op.push(s[i]); 
//             else {
//                 while(op.size()>0 && pr(s[i])<=pr(op.top())){
//                     char ch=op.top();
//                     op.pop();
//                     string val2=val.top();
//                     val.pop();
//                     string val1=val.top();
//                     val.pop();
//                     string ans=solve(val1,val2,ch);  
//                     val.push(ans);
//                     //cout<<ans<<endl; 
//                 }
//                 op.push(s[i]);
//             }

//         }
//     }
//     while(op.size()>0){
//         char ch=op.top();
//         op.pop();
//         string val2=val.top();
//         val.pop();
//         string val1=val.top();
//         val.pop();
//         string ans=solve(val1,val2,ch);  
//         val.push(ans);
//         //cout<<ans<<endl;
//     }
//     cout<<val.top()<<endl;
//     cout<<1+(5*8)+6/2;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <ctype.h>
// #include <string.h>

// #define MAX 100

// // Stack structure and functions
// char stack[MAX];
// int top = -1;

// void push(char item) {
//     if (top >= MAX - 1) {
//         printf("Stack Overflow\n");
//     } else {
//         stack[++top] = item;
//     }
// }

// char pop() {
//     if (top == -1) {
//         printf("Stack Underflow\n");
//         return -1;
//     } else {
//         return stack[top--];
//     }
// }

// char peek() {
//     return stack[top];
// }

// // Function to check if the character is an operator
// int isOperator(char symbol) {
//     return (symbol == '+' || symbol == '-' || symbol == '*' || symbol == '/');
// }

// // Function to define precedence of operators
// int precedence(char symbol) {
//     switch (symbol) {
//         case '+':
//         case '-':
//             return 1;
//         case '*':
//         case '/':
//             return 2;
//         default:
//             return 0;
//     }
// }

// // Function to convert infix expression to postfix
// void infixToPostfix(char* infix, char* postfix) {
//     int i = 0, j = 0;
//     char item;
//     char x;

//     while (infix[i] != '\0') {
//         item = infix[i];

//         // If the character is an operand, add it to the postfix expression
//         if (isalnum(item)) {
//             postfix[j++] = item;
//         }
//         // If the character is '(', push it to the stack
//         else if (item == '(') {
//             push(item);
//         }
//         // If the character is ')', pop and add to postfix until '(' is found
//         else if (item == ')') {
//             while (peek() != '(') {
//                 postfix[j++] = pop();
//             }
//             pop();  // Remove '(' from stack
//         }
//         // If the character is an operator
//         else if (isOperator(item)) {
//             while (top != -1 && precedence(peek()) >= precedence(item)) {
//                 postfix[j++] = pop();
//             }
//             push(item);
//         }
//         i++;
//     }

//     // Pop all remaining operators from the stack
//     while (top != -1) {
//         postfix[j++] = pop();
//     }

//     postfix[j] = '\0'; // Null terminate the postfix expression
// }

// int main() {
//     char infix[MAX], postfix[MAX];

//     // Get the infix expression from user
//     printf("Enter an infix expression: ");
//     gets(infix);

//     infixToPostfix(infix, postfix);

//     // Output the postfix expression
//     printf("Postfix expression: %s\n", postfix);

//     return 0;
// }

