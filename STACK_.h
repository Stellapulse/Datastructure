//Stack implementation using array 
//also make it header file so that we cam use further 
#ifndef STACK_H
#define STACK_H
#include<iostream>
using namespace std;
#define MAX 100//maximum size of stack

class node{
    public:
    int data;
    node *next;

};

class stack{
    private:
       
       node *top;
       
    public:
    stack(){
        top=NULL;
    }
    void push(int x);
    int pop();
    int peek(int pos);
    void display();
    bool isEmpty();
    ~Stack();
};


#endif









