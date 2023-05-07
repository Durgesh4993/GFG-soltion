string stringMirror(string str){
        // jjfupkravhthvqfbadrkqg
        string t="";
        t.push_back(str[0]);
        for(int i=1;i<str.size();i++)
        {
            if(i!=1 && str[i-1]==str[i])
            {
                t.push_back(str[i]); 
            }
            else if(str[i-1]>str[i])
            {
                t.push_back(str[i]); 
            }
            else
            {
                break;
            }
        }
        string rev=t;
        reverse(rev.begin(),rev.end());
        return t+rev;
    }
