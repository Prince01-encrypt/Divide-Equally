#include <iostream>
#include <cmath>
#include <algorithm>
#define ll long long
 
using namespace std;
 
int main() {
    int kids;
    cin >> kids;
    int* fingers = new int[kids];
    int sum = 0;

    for(int i = 0; i < kids; i++) {
        cin >> fingers[i];
        sum += fingers[i]; 
    }
    kids++;
    int ways = 0;
    sum++;

    for(int i = 1; i < 6; i++) {
        if(sum % kids != 1) {
            ways++;
        }
        sum++;
    }
    cout << ways;
    return 0;
}               
