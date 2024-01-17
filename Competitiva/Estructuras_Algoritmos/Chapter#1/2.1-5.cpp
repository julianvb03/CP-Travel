#include <bits/stdc++.h>
using namespace std;

void nbit_suma(int arr1[], int arr2[], int arrc[], int n);
void print_array(int arr[], int n);
vector<int> nbit_add(int arr1[], int arr2[], int n);
void print_vec(vector<int> vec);

int main() {
    constexpr int n = 5;
    int arr1[n] = {0,1,1,0,1};
    int arr2[n] = {1,0,0,1,1};
    int arr3[n + 1];

    nbit_suma(arr1, arr2, arr3, n);
    print_array(arr3, n+1);

    printf("\n");

    vector<int>vec = nbit_add(arr1, arr2, n);
    print_vec(vec);

}


void nbit_suma(int arr1[], int arr2[], int arr3[], int n) {
    int carry = 0;
    for (int i = 0; i < n; ++i) {
        if (i == (n - 1) && (arr1[i] + arr2[i] + carry) == 3) 
            arr3[i] = 1, arr3[i + 1] = 1, carry = 0;
        else if ((arr1[i] + arr2[i] + carry) == 3) 
            arr3[i] = 1, carry = 1;
        else if (i == (n - 1) && (arr1[i] + arr2[i] + carry) == 2)
             arr3[i] = 0, arr3[i + 1] = 1, carry = 0;
        else if ((arr1[i] + arr2[i] + carry) == 2) 
            arr3[i] = 0, carry = 1;
        else
            arr3[i] = 1, carry = 0;
    }
}

vector<int> nbit_add(int arr1[], int arr2[], int n) {
    int carry = 0;
    vector<int> vec;
    for (int i = 0; i < n; ++i) {
        vec.push_back((arr1[i] + arr2[i] + carry) % 2);
        carry = static_cast<int>((arr1[i] + arr2[i] + carry) / 2);
    }
    vec.push_back(carry);
    return vec;
}

void print_array(int arr[], int n) {
    for (int i = 0; i < n; ++i)
        printf("%d ", arr[i]);
    printf("\n");
}

void print_vec(vector<int> vec) {
    for (auto n: vec)
        printf("%d ", n);
    printf("\n");
}