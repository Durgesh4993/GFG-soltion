bool canPair(vector<int> nums, int k) {
        // Code here.
        if(nums.size()%2==1) return false;
        vector<int> fre(100001,0);
        for(int num : nums) {
            int num1 = num%k;
            if(fre[(k-num1)%k]!=0) {
                fre[(k-num1)%k]--;
            } else {
                fre[num1]++;
                
            }
        }
        for(int f : fre) {
            if(f>0) return false;
        }
        return true;
    }
