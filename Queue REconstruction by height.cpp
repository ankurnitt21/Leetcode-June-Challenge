// Time complexity O(nlogn)
// Space Complexity O(n)


class Solution {
public:
     static bool myComp(const vector<int> &a, const vector<int> &b)
    {
        if (a[0] == b[0])
            return a[1] < b[1];
            
        return a[0] > b[0];
    }
    
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
       vector<vector<int>> ans;
        int n = people.size();
        if (n == 0)
            return ans;
            
       sort(people.begin(), people.end(), myComp);
        
        for (int i = 0; i < n; i++)
        {
            cout<<people[i][0]<<" "<<people[i][1]<<endl;
            ans.insert(ans.begin() + people[i][1], people[i]);
        }
        
        return ans;
    }
};