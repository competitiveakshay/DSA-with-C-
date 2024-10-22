#include<iostream>
#include<vector>

using namespace std;

vector<int> majorityElement(vector<int> nums){
    int n = nums.size();

    for(int val : nums){
        int frequency = 0;
        for(int i : nums){
            if(i == val){
                frequency++;
            }
        }
        if(frequency > n/2){
            return val;
        }
    }

}

int main(){

    vector<int> nums = {1,1,2,2,1};
    majorityElement(nums);

    return 0;
}