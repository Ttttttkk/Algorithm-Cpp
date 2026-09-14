#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int q;
    cin >> q;
    while(q--) {
        int n;
        cin >> n;

        vector<int> pushed(n);
        vector<int> popped(n);

        for(int i = 0; i < n; i++)
            cin >> pushed[i];

        for(int i = 0; i < n; i++)
            cin >> popped[i];

        stack<int> st;
        int j = 0;

        for(int i = 0; i < n; i++) {
            st.push(pushed[i]);

            while(!st.empty() && j < n && st.top() == popped[j]) {
                st.pop();
                j++;
            }
        }

        if(st.empty())
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}