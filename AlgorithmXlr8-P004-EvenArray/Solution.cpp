#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (auto &x : arr) cin >> x;

                int moves=0;
        
        while(true)
        {
            int evenbad = -1, oddbad = -1;
            
            for(int i=0; i<n ; i++)
            {
                if(i%2 ==0 && arr[i]%2 == 1 && evenbad ==-1)
                evenbad =i;
                
                if(i%2 ==1 && arr[i]%2 == 0 && oddbad ==-1)
                oddbad =i;
            }
            if (evenbad == -1 && oddbad == -1) 
            { 
                cout << moves << "\n";
                break; 
                
            }
            if (evenbad == -1 || oddbad == -1) 
            { 
                cout << -1 << "\n"; 
                break; 
                
            }
            swap(arr[oddbad], arr[evenbad]);
            moves++;
 
        }


      
    }
    return 0;
}
