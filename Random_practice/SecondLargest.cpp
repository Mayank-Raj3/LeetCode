class Solution {
public:
    // Function returns the second
    // largest elements
    int print2largest(int arr[], int n) {

        int maxi = arr[0], sec = -1;
        for (int i = 0 ; i < n  ; i++) {
            if (maxi > arr[i]) {
                sec = maxi ;
                maxi = arr[i];
            } else if (arr[i] < maxi && arr[i] > sec) {
                sec = arr[i];
            }
        }

        return sec;
    }
};

class Solution2 {
public:
    // Function returns the second
    // largest elements
    int print2largest(int arr[], int n) {

        int maxi = arr[0], sec = -1;
        for (int i = 0 ; i < n  ; i++) {
            if (maxi < arr[i]) {
                sec = maxi ;
                maxi = arr[i];
            } else if (arr[i] < maxi && arr[i] > sec) {
                sec = arr[i];
            }
        }

        return sec;
    }
};