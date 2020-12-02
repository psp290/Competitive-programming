
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res(intervals.size());
       
        //Sort the intervals as per start
        sort(intervals.begin(),intervals.end());
        
        //if size 0 return null
        if(intervals.size()==0)
        {
            return res;
        }
        
        //stack of pair to put intervals in stack
        
        stack<pair<int,int>> ovl;    
        
        //push first element 
        ovl.push({intervals[0][0],intervals[0][1]});
        
        //code to add intervals
        for(int i=1;i<intervals.size();i++)
        {
            if(ovl.top().first<=intervals[i][0] && ovl.top().second>=intervals[i][1])
            {
            }
            else if(ovl.top().second>=intervals[i][0])
            {
                
                int f = ovl.top().first;
                ovl.pop();
                ovl.push({f,intervals[i][1]});
            }
            else
            {
                ovl.push({intervals[i][0],intervals[i][1]});
            }
        }
        
        
        //reverse the stack
        stack<pair<int,int>> ovlr;
        while(!ovl.empty())
        {
            int f = ovl.top().first;
            int s = ovl.top().second;
            ovlr.push({f,s});
            ovl.pop();
        }
        
        //push it in the result
        int c=0;
        while(!ovlr.empty())
        {
            res[c].push_back(ovlr.top().first);
            res[c].push_back(ovlr.top().second);
            ovlr.pop();
            c++;
        }
        
        //remove empty values 
        while(res.back().empty())res.pop_back();
       
        
        return res;
    }
};