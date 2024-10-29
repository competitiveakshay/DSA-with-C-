#include <iostream>
using namespace std;

// Brute Force Approach
// int mostWater(int height[], int maxWater, int n){
//     for(int i = 0; i<n; i++){
//         for(int j = i+1; j<n; j++){
//             int width = j - i;
//             int heightOfContainer = min(height[i], height[j]);
//             int area = width * heightOfContainer;
//             maxWater = max(maxWater, area);
//         }
//     }
//     return maxWater;
// }

// Optimal Approach(2 Pointer)
int mostWater(int height[], int maxWater, int n)
{
    int leftPointer = 0, rightPointer = n - 1;

    while (leftPointer < rightPointer)
    {
        int width = rightPointer - leftPointer;
        int heightOfContainer = min(height[leftPointer], height[rightPointer]);
        int currWater = width * heightOfContainer;
        maxWater = max(maxWater, currWater);

        height[leftPointer] < height[rightPointer] ? leftPointer++ : rightPointer--;
    }

    return maxWater;
}

int main()
{

    int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = sizeof(height) / sizeof(height[0]);
    int maxWater = 0;

    cout << mostWater(height, maxWater, n);

    return 0;
}