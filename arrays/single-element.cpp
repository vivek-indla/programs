#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    int singleElement(vector<int>& arr){
        int ans=0;
        for(auto i:arr){
            ans^=i;
        }
        return ans;
    }
};
int main(){
    Solution sol;
    vector<int> arr={1,1,2,2,4,4,5,5,8,9,9};
    int result=sol.singleElement(arr);
    cout<<result<<endl;
    return 0;
}