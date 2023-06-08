class Solution
{
public:
    string kthPermutation(int n, int k)
    {
        // code here
        int fact = 1;
        vector<int> numbers;
        string ans = "";
        for(int i = 1; i < n; i++){
            fact*=i;
            numbers.push_back(i);
        }
        numbers.push_back(n);
        k--;
        while(true){
            ans+=to_string(numbers[k/fact]);
            numbers.erase(numbers.begin() + k / fact);
            if(numbers.size() == 0)
                break;
            k = k % fact;
            fact/=numbers.size();
        }
        return ans;
    }
};
