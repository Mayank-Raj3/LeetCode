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

    hame har bar pivot dundna ha and usko uski correct position mea dalna
    and uske left side usse chote element and right side usse bade element hona chiye


    then again call recursion for left part and right part


*/

// } Driver Code Ends
class Solution
{
public:
    int partition (int arr[], int lo, int hi)
    {
        int pivot = arr[lo];
        int i = lo ,  j = hi;
        while (i < j) {
            while (i <= hi && arr[i] <= pivot) i++;
            while (j >= lo && arr[j] > pivot) j--;
            if (j > i)
                swap(arr[i], arr[j]);
        }
        swap(arr[lo], arr[j]);
        return j ;

    }

public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int lo, int hi)
    {
        if (lo < hi) {
            int part = partition(arr, lo, hi);
            quickSort(arr, lo, part - 1);
            quickSort(arr, part + 1, hi);
        }
    }


};


//{ Driver Code Starts.
int main()
{
    int arr[1000], n, T, i;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &n);
        for (i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        Solution ob;
        ob.quickSort(arr, 0, n - 1);
        printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends