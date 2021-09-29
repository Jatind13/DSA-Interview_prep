#include <iostream>
using namespace std;
// Function to find majority element
int findMajority(int arr[], int n)
{
    int i, ele = -1, count = 0;
    // Finding majority candidate
    for (i = 0; i < n; i++) {
        if (count == 0) {
            ele = arr[i];
            count = 1;
        }
        else {
            if (arr[i] == ele)
                count++;
            else
                count--;
        }
    }
    int counts = 0;
    // Checking if majority candidate occurs more than n/2
    // times
    for (i = 0; i < n; i++) {
        if (arr[i] == ele)
            counts++;
    }
 
    if (counts > n / 2)
        return ele;
    return -1;
}
int main()
{
    int arr[] = { 1, 1, 1, 1, 2, 3, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int majority = findMajority(arr, n);
    cout << " The majority element is : " << majority;
    return 0;
}