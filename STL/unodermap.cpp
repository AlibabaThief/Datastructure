#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
        unordered_map<char,int> m;
        m['a']=2;
        m['f']=4;
        m['A']=10;
        m[' ']=0;
        cout<<m.size()<<endl;
        if(m.count(' ')==1){
            cout<<m[' ']<<endl;
        }

        for (auto it = m.begin();it!=m.end();it++){
            cout<<it->first<<" "<<it->second<<endl;
        }
        return 0;
}