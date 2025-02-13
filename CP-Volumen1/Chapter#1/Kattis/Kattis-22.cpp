#include<iostream>
using namespace std;

int main() {
    char input[14];
    scanf("%14[^\n]%*c", input);
    int score {};
    for(int i = 0; i < 14; i+=3) {
        int temp {};
        for(int j = i; j < 14; j+=3) {
            if(input[i] == input[j])    temp++;
        }
        if(temp > score)    score = temp;
    }
    printf("%d\n", score);
}