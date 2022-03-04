#include<iostream>
using namespace std;

class Stack{
    private :
    int num;
    int idx;
    int *data;
    public:
    Stack(int n){
        this->num=num;
        this->idx=-1;
        this->data= new int[n];
    }
    ~Stack(){
        delete[] this->data;
    }
    bool empty(){
        return this->idx==-1;
    }
    bool full(){
        return this->idx==this->num-1;
    }
    void push(int x){
        if(this->full()){
            cout<<"Over Flow"<<endl;return ;
        }
        this->data[++this->idx]=x;
    }
    void pop(int x){
        if(this->empty()){
            cout<<"EMpty"<<endl;
            return ;
        }
        this->idx--;
    }
    int top(){
        if(this->empty()){
            cout<<"under flow"<<endl;
            return ;
        }
        return this->data[this->idx];
    }

};