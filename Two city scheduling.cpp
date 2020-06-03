// sort the array using comparator function according to their differences
//Time complexity O(nlogn)
//Space complexity O(1)


class Solution {
public:
  static bool cmp(vector<int> a, vector<int> b)
    {
        return abs(a[0]-a[1])>= abs(b[0]-b[1]);
    }
    int twoCitySchedCost(vector<vector<int>>& costs) {
        
        
        sort(costs.begin(),costs.end(),cmp);
        
        int res=0;
        int n=costs.size()/2;
        
        int first=0,second=0;
        
        for(int i=0;i<costs.size();i++)
        {
            cout<<costs[i][0]<<" "<<costs[i][1]<<endl;
           if(first<n && second<n)
           {
               if(costs[i][0]<=costs[i][1])
                   first++;
               else
                   second++;
               res=res+min(costs[i][0],costs[i][1]);
           }
            else if(first<n)
            {
                res+=costs[i][0];
                first++;
            }
            else
            {
                second++;
                res+=costs[i][1];
            }   
        }
        return res;
        
    }
};