class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int> ans=nums;
        int s=0,e=nums.size()-1;

while (s<=e)
{
  swap(nums[s],nums[e]);
  s++;
  e--;
}
    
    for (int x : nums) {        
            ans.push_back(x);
        }
        return ans;
    }
};