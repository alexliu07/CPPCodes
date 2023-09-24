//
// Created by liuyu on 2022/12/22.
//

#include <iostream>

using namespace std;

//判断是否整除
bool isEvenly(int a, int b, int times) {
    for (int i = 0; i < times; i++) {
        if (a % b != 0) {
            return false;
        }
        a /= b;
    }
    return true;
}

//判断质数
bool isPrime(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

//化简二次根式
int simp(int n, int times) {
    int result = 1;
    if (isPrime(abs(n))) {
        //如果是质数直接返回1
        return result;
    }
    //偶数不允许被开方数小于0
    if (n < 0 && (times % 2 == 0)) {
        return 0;
    }
    //处理负数
    if (n < 0) {
        //在sqrt[times](n)~-2中寻找i^times能被n整除的数
        for (int i = -2; pow(i, times) >= n; i--) {
            if (isEvenly(n, i, times)) {
                //将当前n乘入结果
                result *= i;
                //将剩下的数表示出来，递归分解
                n = n / pow(i, times);
                result *= simp(n, times);
                //找到一个就停止
                break;
            }
        }
    } else {
        //在2~sqrt[times](n)中寻找i^times能被n整除的数
        for (int i = 2; pow(i, times) <= n; i++) {
            if (isEvenly(n, i, times)) {
                //将当前n乘入结果
                result *= i;
                //将剩下的数表示出来，递归分解
                n = n / pow(i, times);
                result *= simp(n, times);
                //找到一个就停止
                break;
            }
        }
    }
    return result;
}

int main() {
    bool flag = true;
    int ans, n, times;
    cout << "sqrt:";
    cin >> n;
    cout << "times:";
    cin >> times;
    //如果是0直接返回
    if (n == 0) {
        cout << 0;
        flag = false;
    }
    if (flag) {
        ans = simp(n, times);
        if (ans == 0) {
            cout << -1;
        } else if (pow(ans, times) == n) {
            //刚好开完
            cout << ans;
        } else if (ans == 1) {
            //无法化简
            cout << "sqrt" << times << "(" << n << ")";
        } else {
            //其他化简情况
            cout << ans << " sqrt" << times << "(" << (n / pow(ans, times)) << ")";
        }
    }
    return 0;
}
