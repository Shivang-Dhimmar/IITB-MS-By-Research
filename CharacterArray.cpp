/*
// Static character Array
#include<stdio.h>
int main(void) {
    char s1[] = "Hello";
    char s2[] = "World";
    s1[0] = 'h';
    printf("%s", s1);
}
*/
/*
// Pointer and Macro
#include<stdio.h>
#define XOR(a, b) (a) ^ (b)
void func(int *a, int *b )
{
    *a = XOR(*b, *a);
    *b = XOR(*a, *b);
    *a = XOR(*b, *a);
}
int main( )
{
    int a = 10, b = 20;
    func(&a, &b);
    printf("%d %d \n", a, b);
    return 0;

}
*/
/*
// Basics Of Recursion
#include<stdio.h>
int mystery(int n, int i) {
    if(i == n-1)
        return 1;
    else if(n % i == 0)
        return 0;
    else return mystery(n, i+1);
}
int main() {
    int n;
    printf("Enter number greater than 3: ");
    scanf("%d", &n);
    printf("%d\n", mystery(n, 2));
}
*/
/*
//Basics Of Reursion
#include<stdio.h>
int mystery(int num) {
    if(num < 10) {
        return num;
    }
    else {
        int x = num % 10;
        int y = mystery(num/10);
        return x + y;
    }
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d\n", mystery(num));
}
*/
/*
// Basics of Global and Local Variable and Pointer
#include<stdio.h>
int x;
void f1(int x) {
    x++;
    return;
}
void f2(void) {
    x++;
    return;
}
void f3(int *xptr) {
    *xptr += 3;
    return;
}
int main(void) {
    int y = 5;
    x = 10;
    f1(y);
    f2();
    x += 10;
    f3(&x);
    printf("%d\n", x);
}

*/
/*
// Basics of recursion, Structure and Pointer
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node * left;
    struct Node * right;
};

struct Node * newNode(int data){
    struct Node * node=(struct Node *)malloc(sizeof(struct Node));
    node->data=data;
    node->left=NULL;
    node->right=NULL;
};

struct Node * insert(struct Node * node,int data){
    if(node==NULL){
        return newNode(data);
    }
    if(node->data>data){
        node->left=insert(node->left,data);
    }
    else if(node->data<data){
        node->right=insert(node->right,data);
    }
    return node;
};

void recurse(struct Node * node){
    if(node==NULL){
        return;
    }
    recurse(node->right);
    printf("%d ",node->data);
    recurse(node->left);
}

int main(){
    struct Node * root=NULL;
    root=insert(root,5);
    insert(root,1);
    insert(root,4);
    insert(root,7);
    insert(root,10);
    recurse(root);
    return 0;
}
*/
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 5
int stack[MAXSIZE];
int top=-1;

void push(int data){
    if(top>=MAXSIZE-1){
        printf("Stack Overflow");
        return;
    }
    stack[++top]=data;
}

int pop(){
    if(top<0){
        printf("Stack Underflow");
        return -1;
    }
    return stack[top--];
}

void swap(int * a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void modify(int arr[],int start,int end){
    while(start<end){
        arr[start]++;
        arr[end]--;
        swap(&arr[start],&arr[end]);
        start++;
        end--;
    }
}


int main(){
    int arr[MAXSIZE]={1,2,3,4,5};
    for(int i=0;i<MAXSIZE;i++){
        push(arr[i]);
    }
    modify(stack,0,MAXSIZE-1);
    for(int i=0;i<MAXSIZE;i++){
        printf("%d ",pop());
    }
    return 0;
    return 0;
}
