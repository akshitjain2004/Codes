class Solution {
public:
//Brute Force
    void moveZeroes(vector<int>& nums) {
        vector<int>temp;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                temp.push_back(nums[i]);
            }
        }
        int nz =temp.size();
        for(int i=0;i<nz;i++){
           nums[i]= temp[i];
        }

        for(int i=nz;i<nums.size();i++){
            nums[i]=0;
        }
     
    }
};

class Solution {
public:
    void moveZeroes(vector<int>& a) {
       //two pointer approach
       

    int j =0;
       for(int i=1;i<a.size();i++){
           if(a[j]==0&&a[i]!=0){
               swap(a[i],a[j]);
               j++;
           }
          if(a[j]!=0&&a[i]!=0){
              j++;
              continue;
          }
          if(a[j]!=0&&a[i]==0){
              j++;
              continue;
          }


       }
     
    }
};
