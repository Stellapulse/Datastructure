//stack using array

#include <iostream>
using namespace std;
#define MAX 100//maximum size of stack
class stack{

    private:

         int size;
         int top;
         int *s;

    public:

    stack(int size){
        this->size=size;
        top=-1;
        s=new int[size];
    }
    ~stack(){
        delete []s;
    }
    void push(stack *st,int x){
        if(st->top==st->size-1){
            cout<<"Stack Overflow"<<endl;
        }
        else{
            st->top++;
            st->s[st->top]=x;
        }
    }
    int pop(stack *st){
        int x=-1;
        if(st->top==-1){
            cout<<"stack underflow"<<endl;

        }
        else{
            x=st->s[st->top--];

        }
        return x;
    }

    int peek(stack *st,int index){
        int x=-1;
        if(st->top-index+1<0){
            cout<<"invalid index"<<endl;
        }
        else{
            x=st->s[st->top-index+1];
        }
        return x;
    }

    int stackTop(stack st){
        if(st.top==-1){
            return -1;
        }
        else{
            return st.s[st.top];
        }
        
        
    }
    int imEmpty(stack st){
        if (st.top==-1) return 1;
        else return 0;  
    }  
    int isFull(stack st){
        if(st.top==st.size-1)return 1;
        else return 0;
    }
    void display(stack st){
        for(int i=st.top;i>=0;i--){
            cout<<st.s[i]<<" ";
        }
        cout<<endl;
    }

};
