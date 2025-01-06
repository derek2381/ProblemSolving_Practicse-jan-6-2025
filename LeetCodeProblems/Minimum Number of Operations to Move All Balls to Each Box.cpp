// problem link
// https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box/description/


// Source Code

class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> arr(boxes.length(), 0);

        for(int i = 0;i < boxes.length();i++){
            if(boxes[i] == '1'){
                for(int j = 0;j < i;j++){
                    arr[j] += abs(i-j);
                }
            }
        }

        for(int i = boxes.length()-1;i >= 0;i--){
            if(boxes[i] == '1'){
                for(int j = boxes.length()-1;j > i;j--){
                    arr[j] += abs(i-j);
                }
            }
        }

       


        return arr;
    }
};