#include <bits/stdc++.h>
using namespace std;

// 将十进制整数 x 转换为十六进制字符串（大写），支持负数
string toHex(long long x) {
    if (x == 0) return "0";
    bool neg = x < 0;
    // 使用 unsigned long long 保存绝对值，避免 LLONG_MIN 问题
    unsigned long long ux = neg ? static_cast<unsigned long long>(-(x + 1)) + 1ULL
                               : static_cast<unsigned long long>(x);

    const char *hexChars = "0123456789ABCDEF";
    string res;
    while (ux > 0) {
        int d = ux & 0xF;            // ux % 16
        res.push_back(hexChars[d]);
        ux >>= 4;                    // ux /= 16
    }
    if (neg) res.push_back('-');
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;//为待转数
	cin>>n; 

    cout << toHex(n) << '\n';
    return 0;
}

