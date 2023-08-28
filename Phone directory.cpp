class Solution{
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        // code here
        vector<vector<string>>ans;
        int size=s.length();
        for(int i=0 ; i<size ; i++)
        {
            string temp =  s.substr(0,i+1);
            int tempsize=i+1;
            vector<string>curr;
            for(int j=0 ; j<n ; j++)
            {
                if(contact[j].size()<tempsize || find(curr.begin(),curr.end(),contact[j])!=curr.end())
                {
                    continue;
                }
                string temp2 = contact[j].substr(0,tempsize);
                if(temp2==temp)
                {
                    curr.push_back(contact[j]);
                }
            }
            if(curr.size()==0)
            {
                curr.push_back("0");
            }
            sort(curr.begin(),curr.end());
            ans.push_back(curr);
        }
        return ans;
    }


};
