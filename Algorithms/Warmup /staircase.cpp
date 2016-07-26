#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    int index = 1;
    while(index<=n){
        int i = index;
        int j = n-index;
        while(j > 0){
            cout << ' ';
            j--;
        }
        while(i > 0){
            cout << '#';
            i--;
        }
        cout << endl;
        index++;
    }

    return 0;
}
