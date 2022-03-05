#include<iostream>
using namespace std;
const int N=100000;
int head,e[N],ne[N],idx;

void init(){
    head=-1;
    idx=0;
}
void add_to_head(int x){//将x插入到头节点
        e[idx]=x;
        ne[idx]=head;
        head=idx;
        idx++;

}
void add(int k,int x){
    //将x插入到下标是k的点后面.
    e[idx]=x;
    ne[idx]=ne[k];
    ne[k]=idx;
    idx++;
    
}
void remove(int k){
    ne[k]=ne[ne[k]];
}
int main(){

}