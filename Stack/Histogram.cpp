class Solution {
private:
    vector<int> nextSmallestIndex (vector<int> &heights, int n) {
        stack<int> s;
        vector<int> ans(n);
        s.push(-1);
        
        for (int i = n - 1; i >= 0; i --) {
            while(s.top() != -1 && heights[s.top()] >= heights[i]) {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        
        return ans;
    }
    
    vector<int> prevSmallestIndex (vector<int> &heights, int n) {
        stack<int> s;
        vector<int> ans(n);
        s.push(-1);
        
        for (int i = 0; i < n; i ++) {
            while(s.top() != -1 && heights[s.top()] >= heights[i]) {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        
        return ans;
    }
    
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        
        vector<int> next;
        next = nextSmallestIndex (heights, n);
        
        vector<int> prev;
        prev = prevSmallestIndex (heights, n);
        
        int area = INT_MIN;
        for (int i = 0; i < n; i ++) {
            if (next[i] == -1) 
                next[i] = n;
            int width = next[i] - prev[i] - 1;
            int newArea = heights[i] * width;
            area = max(area, newArea);
        }
        return area;
    }
};
