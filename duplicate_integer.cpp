class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        //vector<int> num2;
        
        vector<int>::iterator iter, iter1;

        //num2.push_back(nums.at(0));

        for(iter=nums.begin(); iter != nums.end(); iter++)
        {
            int ele = *iter;
            for(iter1 = nums.begin(); iter1 != nums.end(); iter1++)
            {
                if(ele == *iter1 && iter != iter1)
                 return true;
            }
        }
        return false;
    }
};
