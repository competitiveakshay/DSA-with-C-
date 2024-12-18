#include<iostream>
#include<vector>

using namespace std;

void permutations(vector<int>& nums, int index, vector<vector<int>>& ans){
    if(index == nums.size()){
        ans.push_back({nums});
        return;
    }

    for(int i=index; i<nums.size(); i++){
        swap(nums[index], nums[i]);
        permutations(nums, index+1, ans);

        //Backtracking
        swap(nums[index], nums[i]);
    }
}

int main(){
    vector<int> nums = {1,2,3};
    vector<vector<int>> ans;

    permutations(nums, 0, ans);

    for (const vector<int>& val : ans) {
        cout << "[";
        for (size_t i = 0; i < val.size(); i++) {
            cout << val[i];
            if (i < val.size() - 1) cout << ", ";
        }
        cout << "] ";
    }
    cout << endl;


    return 0;
}