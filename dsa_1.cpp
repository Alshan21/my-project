
#include <iostream>

int maxSubArray(int nums[], int size) {
    if (size == 0) return 0; // Handle empty array case

    int maxSum = nums[0];
    int currentSum = nums[0];

    for (int i = 1; i < size; ++i) {
        currentSum = std::max(nums[i], currentSum + nums[i]);
        maxSum = std::max(maxSum, currentSum);
    }

    return maxSum;
}

int main() {
    int nums[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size = sizeof(nums) / sizeof(nums[0]);
    int result = maxSubArray(nums, size);
    std::cout << "Maximum subarray sum is: " << result << std::endl;
    return 0;
}
