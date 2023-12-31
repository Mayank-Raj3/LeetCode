#include <bits/stdc++.h>

using namespace std;

vector < int > FindUnion(int arr1[], int arr2[], int n, int m) {
  int i = 0, j = 0; // pointers
  vector < int > Union; // Uninon vector
  while (i < n && j < m) {
    if (arr1[i] <= arr2[j]) {
      if (Union.size() == 0 || Union.back() != arr1[i])
        Union.push_back(arr1[i]);
      i++;
    } else {
      if (Union.size() == 0 || Union.back() != arr2[j])
        Union.push_back(arr2[j]);
      j++;
    }
  }

  while (i < n) // IF any element left in arr1
  {
    if (Union.back() != arr1[i])
      Union.push_back(arr1[i]);
    i++;
  }
  while (j < m) // If any elements left in arr2
  {
    if (Union.back() != arr2[j])
      Union.push_back(arr2[j]);
    j++;
  }
  return Union;
}

int main()

{
  int n = 10, m = 7;
  int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int arr2[] = {2, 3, 4, 4, 5, 11, 12};
  vector < int > Union = FindUnion(arr1, arr2, n, m);
  cout << "Union of arr1 and arr2 is  " << endl;
  for (auto & val : Union)
    cout << val << " ";
  return 0;
}

/*::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

class Solution {
public:
  //arr1,arr2 : the arrays
  // n, m: size of arrays
  //Function to return a list containing the union of the two arrays.
  vector<int> findUnion(int arr1[], int arr2[], int n, int m)
  {
    vector<int> ans ;
    set<int> st;
    for (int i = 0 ; i < n ; i++) {
      st.insert(arr1[i]);
    }
    for (int i = 0 ; i < m ; i++) {
      st.insert(arr2[i]);
    }

    for (auto it : st) {
      ans.push_back(it);
    }
    return ans;
  }
};