#include <bits/stdc++.h>
using namespace std;

string abbword(const string& word)
{
    if((int)word.size()<=10)
    return  word;
    else
    {
         return word[0] + to_string((int)word.size() - 2) + word[word.size() - 1];
    }
}
int main() {
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) 
    {
        string word;
        getline(cin, word);
       cout<< abbword(word)<<endl;
        
    }
    return 0;
}
