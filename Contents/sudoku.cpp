#include<bits/stdc++.h>  
using namespace std;  
int main(){  
    int arr[10][10] = {0}, op = 1;  
    for(int i = 0; i < 10; i++){  
        string str;  
        cin >> str;  
        for(int j = 0; j < str.size(); j++){  
            arr[i][j] = int(str[j]-'0');  
        }  
    }   
    for(int i = 0; i < 9 && op == 1; i++){  //直行橫行
        int r[11] = {0}, c[11] = {0};  
        for(int j = 0; j < 9; j++){  
            int n = arr[i][j];  
            int m = arr[j][i];  
            r[n]++;  
            c[m]++;  
            if(r[n] > 1) op = 0;  
            if(c[m] > 1) op = 0;  
        }  
    }  
    int b = 0, bj = 0;  
    for(int k = 0; k < 9 && op ==1; k++){  //九宮格
        int tmp[15] = {0};  
        for(int i = bj; i < 3; i++){  //這裡代表一個格子
            for(int j = b; j < 3; j++){  
                tmp[arr[i][j]]++;  
                if(tmp[arr[i][j]] > 1) op = 0;  
            }  
        }  
        b += 3;  //做完一個加3
        if(b == 9){  //做完3個換行
            b = 0;  
            bj += 3;  
        }  
    }  
    if(op) cout << "Well Done!\n";  
    else cout << "Keep Going!\n";  
}