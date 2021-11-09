//
// Created by 18113 on 2021/10/15.
//

#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

int dir[4][2] = {
        {0, 1},   // right
        {1, 0},   // down
        {0, -1},  // left
        {-1, 0},  // up
};

const int maxn = 10010;

int main()
{

    class Solution {
        int n, m;
        int visited[maxn];
        queue <int> que;

        int getVisitedId(int x, int y) {                         // (1)
            return x * m + y;
        }
        void getPosByVisitedId(int visitedId, int &x, int &y) {  // (2)
            x = visitedId / m;
            y = visitedId % m;
        }

        void init(vector<vector<int>>& mat) {
            while(!que.empty()) {                                // (3)
                que.pop();
            }
            memset(visited, -1, sizeof(visited));                // (4)
            n = mat.size();                                      // (5)
            m = mat[0].size();                                   // (6)
            for(int i = 0; i < n; ++i) {
                for(int j = 0; j < m; ++j) {
                    if(!mat[i][j]) {                             // (7)
                        visited[ getVisitedId(i, j) ] = 0;
                        que.push( getVisitedId(i, j) );
                    }
                }
            }
        }
        bool outOfBound(int x, int y) {
            return x < 0 || x >= n || y < 0 || y >= m;
        }

        void bfs(vector<vector<int>>& mat) {
            while(!que.empty()) {
                int vid = que.front();                           // (8)
                int x, y;
                getPosByVisitedId(vid, x, y);                    // (9)
                que.pop();
                for(int i = 0; i < 4; ++i) {                     // (10)
                    int tx = x + dir[i][0];
                    int ty = y + dir[i][1];
                    if(outOfBound(tx, ty)) {
                        continue;
                    }
                    int nextvid = getVisitedId(tx, ty);          // (11)
                    if(visited[nextvid] == -1) {
                        visited[nextvid] = visited[vid] + 1;
                        que.push(nextvid);
                    }
                }
            }
        }
        void output(int *visited, vector<vector<int>>& ret) {   // (12)
            for(int i = 0; i < n; ++i) {
                vector <int> ans;
                for(int j = 0; j < m; ++j) {
                    ans.push_back( visited[ getVisitedId(i, j) ]);
                }
                ret.push_back(ans);
            }
        }

    public:
        vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
            vector<vector<int>> ret;
            init(mat);
            bfs(mat);
            output(visited, ret);
            return ret;
        }
    };

    Solution s;
}
