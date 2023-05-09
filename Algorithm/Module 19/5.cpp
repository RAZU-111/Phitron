#include <bits/stdc++.h>
using namespace std;
int CRLR(vector<vector<char>> &building)//CRLR=count room Longest room 
{
    int n = building.size();
    int m = building[0].size();
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    int num_rooms = 0;
    int max_room_size = 0;
    queue<pair<int, int>> q;
    int dx[] = {-1, 0, 1, 0};
    int dy[] = {0, 1, 0, -1};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (building[i][j] == '.' && !visited[i][j])
            {
                num_rooms++;
                int room_size = 0;
                q.push({i, j});
                visited[i][j] = true;
                while (!q.empty())
                {
                    int x = q.front().first;
                    int y = q.front().second;
                    q.pop();
                    room_size++;
                    for (int k = 0; k < 4; k++)
                    {
                        int nx = x + dx[k];
                        int ny = y + dy[k];
                        if (nx >= 0 && nx < n && ny >= 0 && ny < m && building[nx][ny] == '.' && !visited[nx][ny])
                        {
                            q.push({nx, ny});
                            visited[nx][ny] = true;
                        }
                    }
                }
                max_room_size = max(max_room_size, room_size);
            }
        }
    }
    cout << "Rooms - " << num_rooms << endl;
    cout << "Length of the longest room - " << max_room_size << endl;
    return 0;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> building(n, vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> building[i][j];
        }
    }
    CRLR(building);
   
}



