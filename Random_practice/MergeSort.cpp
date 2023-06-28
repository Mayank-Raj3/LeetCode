//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
/*

phle mid se tore jana ha torte jana ha jab tak 1 , 1 nhi ho jata lenght
then use merge algorithms
[3,3,4,5,6,1]
    [3,3,4]             [5,6,1]
[3,3]     [4]       [5,6]       [1]
[3] [3]    [4]     [5]  [6]      [1]


when we have called both the function we call the merge function to sorr the array

[3,3]           [5,6]

[3,3,4]          [1,5,6]

[1,2,2,3,4,5,6]
the recursion will be like  a treee

tc O(nlogn )
log n for recursing and n for the merge function

*/

// } Driver Code Ends
class Solution {
public:
    void mergeSort(int arr[], int l, int r) {

        function<void(int, int)> ms = [&](int lo, int hi ) {
            if (lo >= hi) return ;
            int mid = (lo + hi) / 2;
            ms(lo, mid);
            ms(mid + 1, hi);
            vector<int> temp;
            int left = lo, right = mid + 1;
            while (left <= mid && right <= hi) {
                if (arr[left] <= arr[right]) {
                    temp.push_back(arr[left++]);
                }
                else {
                    temp.push_back(arr[right]);
                    right++;
                }
            }
            while (left <= mid) {
                temp.push_back(arr[left]);
                left++;
            }
            while (right <= hi) {
                temp.push_back(arr[right]);
                right++;
            }
            for (int i = lo; i <= hi; i++) {
                arr[i] = temp[i - lo];
            }
        };

        ms(l, r);

    }
};

//{ Driver Code Starts.


int main()
{
    int n, T, i;

    scanf("%d", &T);

    while (T--) {

        scanf("%d", &n);
        int arr[n + 1];
        for (i = 0; i < n; i++)
            scanf("%d", &arr[i]);

        Solution ob;
        ob.mergeSort(arr, 0, n - 1);
        printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends