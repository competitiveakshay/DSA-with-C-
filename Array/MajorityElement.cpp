#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


// Brute Force Approach
// int majorityElement(vector<int> nums){
//     int n = nums.size();

//     for(int val : nums){
//         int frequency = 0;
//         for(int i : nums){
//             if(i == val){
//                 frequency++;
//             }
//         }
//         if(frequency > n/2){
//             return val;
//         }
//     }
//     return -1;
// }

// Optimal Approach
int majorityElement(vector<int> nums){
    int n = nums.size();

    sort(nums.begin(), nums.end());

    int frequency = 1, ans = nums[0];

    for(int i = 1; i<n; i++){
        if(nums[i] == nums[i-1]){
            frequency++;
        }
        else{
            frequency = 1;
            ans = nums[i];
        }

        if(frequency > n/2){
            return ans;
        }
    }
    return ans;
}

int main(){

    vector<int> nums = {1,1,2,2,1,3,3,3,3,3,3};
    cout<<majorityElement(nums);

    return 0;
}