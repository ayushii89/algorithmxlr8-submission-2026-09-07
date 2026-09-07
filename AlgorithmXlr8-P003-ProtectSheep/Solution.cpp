#include <bits/stdc++.h>
using namespace std;

void solve(int R, int C, vector<string>& grid, ostream& out)
{
    int dr[]= {1,0,0 , -1};
    int dc[]= {0,1, -1, 0};
    for(int r=0; r<R; r++)
    {
        for(int c=0; c< C; c++)
        {
            if(grid[r][c]== 'W')
            {
                for(int k=0; k<4; k++)
                {
                    int nr = r + dr[k], nc = c + dc[k];

                    if(nr>=0 && nr<R && nc>=0 && nc<C && grid[nr][nc]== 'S')
                    {
                    out<< "No"<< endl;
                    return;
                    }
                }
            }

        }
    }
    out << "Yes"<< endl;

     for(int r =0; r<R; r++)
     {
        for(int c=0; c<C; c++)
        {
            if(grid[r][c]== '.')
            grid[r][c]= 'D';
        }
        out<<grid[r]<< endl;
     }


}
int main() {
    int R, C;
    cin >> R >> C;
    vector<string> grid(R);
    for (auto &row : grid) cin >> row;

    solve(R,C,grid, cout);

    return 0;
}
