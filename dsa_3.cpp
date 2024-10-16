#include <iostream>

int findEquilibriumIndex(int arr[], int size) {
    // Calculate the total sum of the array
    int totalSum = 0;
    for (int i = 0; i < size; i++) {
        totalSum += arr[i];
    }

    // Initialize the left sum
    int leftSum = 0;

    // Traverse the array to find the equilibrium index
    for (int i = 0; i < size; i++) {
        // Right sum is total sum minus left sum and current element
        int rightSum = totalSum - leftSum - arr[i];

        // Check if left sum equals right sum
        if (leftSum == rightSum) {
            return i; // Return the equilibrium index
        }

        // Update the left sum for the next iteration
        leftSum += arr[i];
    }

    return -1; // Return -1 if no equilibrium index exists
}

int main() {
    int arr[] = {1, 3, 5, 2, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    int index = findEquilibriumIndex(arr, size);
    if (index != -1) {
        std::cout << "Equilibrium index is: " << index << std::endl; // Output: 2
    } else {
        std::cout << "No equilibrium index exists." << std::endl;
    }

    return 0;
}

