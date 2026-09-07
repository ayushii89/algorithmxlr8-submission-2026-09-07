#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) 
    {
        string word;
        getline(cin, word);
        int len = word.size();

        if(len>10)
        {
            int cnt = len-2;
            cout<< word[0]<< cnt<<word[len-1]<<endl;
        }
        else
        {
            cout<<word<<endl;
        }
        
    }
    return 0;
}
