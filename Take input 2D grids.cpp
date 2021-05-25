///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///


#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int mx = 1e3+123;
char adjMat[mx][mx];

/// adjMat[i][j] means there is a edge between i and j node.

int main()
{
    optimize();

    int n, m;
    cin >> n >> m;

    for ( int i = 1; i <= n; i++ ) {
        for ( int j = 1; j <= m; j++ ) cin >> adjMat[i][j];
    }


    return 0;
}
