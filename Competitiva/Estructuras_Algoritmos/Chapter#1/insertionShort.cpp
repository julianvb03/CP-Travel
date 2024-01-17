#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n);
void insertion_sort_stl(vector<int> &vec);
void print_array(int arr[], int n);
void print_vec(vector<int> vec);
void insertion_sort_inverse(int arr[], int n);

int main(){
    constexpr int n = 11;
    int arr[n] = {1, 3, 2, 5, 4, 7, 6, 9, 8, 10, 3};
    vector<int> vec = {1, 3, 2, 5, 4, 7, 6, 9, 8, 10, 3};

    printf("Creciente\n");
    insertion_sort(arr, n);
    print_array(arr, n);

    printf("Decreciente\n");
    insertion_sort_inverse(arr, n);
    print_array(arr, n);

    printf("Vector STL\n");
    insertion_sort_stl(vec);
    print_vec(vec);

}

void insertion_sort(int arr[], int n) {
    for (int i = 1; i < n; ++i) {
        int temp = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = temp;
    }
}

void insertion_sort_inverse(int arr[], int n) {
    for (int i = 1; i < n; ++i) {
        int temp = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] < temp) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = temp;
    }
}

void insertion_sort_stl(vector<int> &vec) {
    for (int i = 1; i < vec.size(); ++i) {
        int temp = vec[i];
        int j = i - 1;

        while (j >= 0 && vec[j] > temp) {
            vec[j + 1] = vec[j];
            --j;
        }
        vec[j + 1] = temp;    
    }
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