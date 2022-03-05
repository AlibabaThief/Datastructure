#include <iostream>
#include<unordered_set>

using namespace std;
class solution {

    public:
    bool containDuplicate(vector<int>& nums){
        unordered_set<int> s;
        for(int x:nums){
            if(s.find(x)!=s.end()){
                return true;
            }
            s.insert(x);
        }
    }
    return false;
}