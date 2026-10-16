#include <bits/stdc++.h>
using namespace std;
#define int long long

int n, k;
vector<int> a;

bool check(int mid) {
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        cnt += a[i] / mid;
    }

    return cnt >= k;
}

signed main() {
    cin >> n >> k;
    a.resize(n);

    int maxLen = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        maxLen = max(maxLen, a[i]);
    }

    // 特判：连长度为 1 的木段都无法切出 k 段
    if (!check(1)) {
        cout << 0;
        return 0;
    }

    int l = 1, r = maxLen;

    // TODO: 在这里补充二分答案
    while (l<r)
    {
        int mid=l+(r-l+1)/2;
        if(check(mid)){
            l=mid;
        }else{
            r=mid-1;
        }
    }
    

    cout << l;

    return 0;
}