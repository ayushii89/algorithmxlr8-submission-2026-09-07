#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    
    int cnt8 =0;

    for(char ch : s)
    {
        if(ch == '8')
        cnt8++;
    }

    cout<< min(cnt8, n/11)<<endl;
    return 0;
}
