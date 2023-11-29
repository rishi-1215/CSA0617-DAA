#include <stdio.h>

int binarySearch(int nums[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid; // Target found
        } else if (nums[mid] < target) {
            left = mid + 1; // Search in the right half
        } else {
            right = mid - 1; // Search in the left half
        }
    }

    return -1; // Target not found
}

int main() {
    int n, target;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int nums[n];

    // Input the sorted array
    printf("Enter the sorted array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Input the target value
    printf("Enter the target value: ");
    scanf("%d", &target);

    // Perform binary search
    int result = binarySearch(nums, 0, n - 1, target);

    // Output the result
    if (result != -1) {
        printf("Target found at index: %d\n", result);
    } else {
        printf("Target not found in the array.\n");
    }

    return 0;
}
