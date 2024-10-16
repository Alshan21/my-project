#include <iostream>

int findKthLargest(int nums[], int size, int k) {
    // Create a simple array to store the largest k elements
    int largest[100]; // Assuming the array will not exceed size 100
    int count = 0;

    for (int i = 0; i < size; i++) {
        // Insert the current element into the largest array if it's one of the largest k elements
        if (count < k) {
            largest[count++] = nums[i];
        } else {
            // Find the smallest in the largest array
            int minIndex = 0;
            for (int j = 1; j < k; j++) {
                if (largest[j] < largest[minIndex]) {
                    minIndex = j;
                }
            }
            // If the current number is larger than the smallest in largest[], replace it
            if (nums[i] > largest[minIndex]) {
                largest[minIndex] = nums[i];
            }
        }
    }

    // Find the smallest element in the largest array, which is the k-th largest element
    int kthLargest = largest[0];
    for (int i = 1; i < k; i++) {
        if (largest[i] < kthLargest) {
            kthLargest = largest[i];
        }
    }

    return kthLargest;
}

int main() {
    int nums[] = {3, 2, 1, 5, 6, 4};
    int size = sizeof(nums) / sizeof(nums[0]);
    int k = 2;

    int result = findKthLargest(nums, size, k);
    std::cout << k << "th largest element is: " << result << std::endl;  // Output: 5

    return 0;
}

