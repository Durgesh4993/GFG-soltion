class Solution {
  public:

    string removePair(string s) {

        stack<char>st;

        

        string ans;

        

        for(int i=0;i<s.length();i++)

        {

            if(st.empty())

            {

                st.push(s[i]);

            }

           else if(s[i]==st.top() )

            {

                st.pop();

            }

            else

            {

               st.push(s[i]);   

            }

           

        }

        

        if(!st.empty()){

        while(!st.empty())

        {

            ans+=st.top();

            st.pop();

        }

        reverse(ans.begin(),ans.end());

        return ans;

        }

        

        return "-1";

    

        

    }

};
