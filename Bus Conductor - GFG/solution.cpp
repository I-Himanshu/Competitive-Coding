#define pii pair<int, int>
class Solution {
public:
    vector<vector<bool>> visited;
    queue<pii> q;
    int m, n;
    int shortestBridge(vector<vector<int>>& A) {
        m = A.size(), n=A[0].size();
        visited = vector<vector<bool>>(m,vector<bool>(n,false));
        for(int i=0;i<m; i++)
        {
            bool isFound = false;
            for(int j=0; j<n; j++)
            {
                if(A[i][j]==1)
                {
                    dfs(i, j, A);
                    isFound = true;
                    break;
                }
            }
            if(isFound) break;
        }
        
        int res = bfs(A);
        return res;
    }
    
    void dfs(int i, int j, vector<vector<int>>& A)
    {
        if(!isValid(i, j) || visited[i][j] || !A[i][j]) return;
        visited[i][j] = true;
        q.push({i,j});
        dfs(i+1, j, A);
        dfs(i-1, j, A);
        dfs(i, j+1, A);
        dfs(i, j-1, A);
    }
    
    int bfs(vector<vector<int>> &A)
    {
        int res=0, i, j;
        pii temp;
        q.push({-1,-1});
        
        while(!q.empty())
        {
            temp = q.front();
            i=temp.first;
            j=temp.second;
            q.pop();
            if(temp.first==-1)
            {
                if(q.empty())
                    break;
                q.push({-1,-1});
                res++;
                continue;
            }
            if(isValid(i+1, j) && !visited[i+1][j])
            {
                if(A[i+1][j]==1) return res;
                visited[i+1][j] = true;
                q.push({i+1, j});
            }
            if(isValid(i-1, j) && !visited[i-1][j])
            {
                if(A[i-1][j]==1) return res;
                visited[i-1][j] = true;
                q.push({i-1, j});
            }
            if(isValid(i, j+1) && !visited[i][j+1])
            {
                if(A[i][j+1]==1) return res;
                visited[i][j+1] = true;
                q.push({i, j+1});
            }
            if(isValid(i, j-1) && !visited[i][j-1])
            {
                if(A[i][j-1]==1) return res;
                visited[i][j-1] = true;
                q.push({i, j-1});
            }
        }
        return -1;
    }
    
    bool isValid(int i, int j)
    {
        return i>=0 && j>=0 && i<m && j<n;
    }
};
