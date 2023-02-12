class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        string l = "";
        string u = "";
        
        for(auto &it : str)
        {
            if(islower(it))
                l += it;
            else
                u += it;
        }
        sort(l.begin(), l.end());
        sort(u.begin(), u.end());
        int j = 0, k = 0;
        for(int i = 0; i < n; i++)
        {
            if(islower(str[i]))
            {
                str[i] = l[j++];
            }
            else
            {
                str[i] = u[k++];
            }
        }
        return str;
    }
};
