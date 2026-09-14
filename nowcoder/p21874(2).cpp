#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    stack<char> st;
    bool flag = true;

    for (int i = 0; i < s.size(); i++) {

        // 遇到 a，放进栈里，等待后面的 b 来匹配
        if (s[i] == 'a') {
            st.push('a');
        }

        // 遇到 b
        else {
            // 栈为空，说明前面没有 a 可以和这个 b 匹配
            if (st.empty()) {
                flag = false;
                break;
            }

            // 找到一个 a 和当前 b 匹配
            st.pop();
        }
    }

    // 遍历结束后还有 a，说明这些 a 没有对应的 b
    if (!st.empty()) {
        flag = false;
    }

    if (flag) {
        cout << "Good";
    } else {
        cout << "Bad";
    }

    return 0;
}