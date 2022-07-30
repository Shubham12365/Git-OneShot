

#include <bits/stdc++.h>

using namespace std;


    vector<int> searchRange(vector<int> &nums, int target) {
        vector<int>ans;
        int s=0,e=nums.size()-1,temp=-1;
        
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target){
                temp=mid;
                e=mid-1;
            }
            else if(nums[mid]>target) e=mid-1;
            else s=mid+1;
        }
        
        ans.push_back(temp);
        
         s=0,e=nums.size()-1,temp=-1;
        
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target){
                temp=mid;
                s=mid+1;
            }
            else if(nums[mid]>target) e=mid-1;
            else s=mid+1;
        }
        
        ans.push_back(temp);
        
        
        return ans;
    }
    


int main()
{
    vector<int>nums;
    for(int i=0;i<8;i++){
        cin>>nums[i];
    }
    
   
    
    return 0;
}


