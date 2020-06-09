// Time  complexity O(n2)
// Space complexity O(n2)

class Solution {
public:
    int **makeTable(int n,int m)
    {
        int **t=new int*[n];
        for(int i=0;i<n;i++){
            t[i]=new int[m];
            for(int j=0;j<m;j++){
                t[i][j]=-1;
            }
        }
        return t;
        
    }
    bool issubse(string s,int n,string t,int m,int **ta)
    {
        if(n<0)
            return true;
        if(m<0)
            return false;
        if(ta[n][m]!=-1)
            return ta[n][m];
        if(s[n]==t[m])
            return ta[n][m]=issubse(s,n-1,t,m-1,ta);
        else
            return ta[n][m]=issubse(s,n,t,m-1,ta);
    }
    bool isSubsequence(string s, string t) {
        int **ta=makeTable(s.size()+1,t.size()+1);
        
        return issubse(s,s.size()-1,t,t.size()-1,ta);
        
    }
};