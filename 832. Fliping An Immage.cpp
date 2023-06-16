class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& Image) {
        for (int i = 0; i < Image.size(); i++) { // iterating  the matrix //{ [i==0] ,[i==1]  , [i==3] }
            int lo = 0, hi = Image[0].size() - 1; // now in inside the row like for i = 0 [ 0, 1 , 1 ]  -- we have to make this - rev =>110 => then 001
            while (lo <= hi) {                                                       // ^      ^
                //    ^

                if (Image[i][lo] == Image[i][hi]) {  // P1-i=0,lo =0,hi=2 is 0==1-no l++,h--| p2 - is 1==1 yes
                    Image[i][lo] = 1 - Image[i][lo];//p2 - 1----> 0 chages to 0  // Image[0] = [0 0 1]
                    Image[i][hi] = Image[i][lo];  //
                }
                lo++;
                hi--;
            }
        }

        return Image;

    }
};