class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int element = INT_MIN;
        int count = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            if(nums[i] == element){
                count++;
            }
            else{
                count--;
            }

            if(count <= 0){
                element = nums[i];
                count = 1;
            }
        }
        return element;
    }
};
