class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int arr[n];
        int arr2[n];
        arr[0]=nums[0];
        arr2[n-1]=nums[n-1];
        for(int i=1;i<n;i++){
            arr[i]=arr[i-1]*nums[i];
        }
        for(int i=n-2;i>=0;i--){
            arr2[i]=arr2[i+1]*nums[i];
        }
        nums[0]=arr2[1];
        nums[n-1]=arr[n-2];
        for(int i=1;i<n-1;i++){
            nums[i]=arr[i-1]*arr2[i+1];
        }
        return nums;
    }
};