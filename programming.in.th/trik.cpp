#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.length();
    char pat[n+1];
    int dpat[3] = {0,1,2};
    strcpy(pat, s.c_str());
    for(int i=0; i<strlen(pat);i++){
        if(pat[i] == 'A') swap(dpat[0],dpat[1]);
        if(pat[i] == 'B') swap(dpat[1],dpat[2]);
        if(pat[i] == 'C') swap(dpat[2],dpat[0]);
    }
    for(int i=0;i<3;i++){
        if(dpat[i]==0){
            cout << i+1 << endl;
        }
    }
    return 0;
}
