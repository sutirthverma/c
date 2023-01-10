// Binary Search Algorithm

//Recursive
int binarySearch(int arr[], int size, int start, int end, int key)
{
    int start = arr[0];
    int end = arr[size--];
    int mid = (start + end) / 2;

    // Base Condition
    // If starting value is greater than end value, it means that key is not present in the list
    if (start > end)
        return -1;

    // If what key we want to find is == to mid programs ends.
    if (key == mid)
        return mid;

    // If key is greater than mid value, then we will perform binary search on the elements present at the *right* side of the mid val.
    if (key < mid)
        return binarySearch(arr, size, start, mid - 1, key);

    // If key is smaller than mid value, then we will perform binary search on the elements present at the *left* side of the mid val.
    if (key > mid)
        return binarySearch(arr, size, mid + 1, end, key);
}