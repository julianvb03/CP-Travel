/**
 * @file Kattis-3.cpp
 * @author Julian Valencia
 * @brief romans
 * @version 0.1
 * @date 2024-01-27
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    double x {};
    cin >> x;
    double op = x * (5280.0) * (1000.0/4854.0);
    cout << int(round(op));
}