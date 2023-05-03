class Solution{
public:
    bool makePalindrome(int n,vector<string> &arr){
          map< string , int > mp ;
          int cnt = 0 ;
          for( auto x : arr ){
               string ans = x ;
               reverse( ans.begin() , ans.end() ) ;
               if( mp.find(ans) != mp.end() ){
                    mp[ans]-- ;
                    cnt-- ;
                    if( mp[ans] == 0 ) mp.erase( ans ) ;
               }
               else{ mp[x]++ , cnt++ ;}
               
          }
          string temp , ans ;
          for( auto x : mp ) temp = x.first ;
          ans = temp ;
          reverse( ans.begin() , ans.end() ) ;
          if( mp.size() == 0 ) return true ;
          if( mp.size() ==1  and cnt == 1 and  temp == ans ) return true ;
          return false ;
    }
};
