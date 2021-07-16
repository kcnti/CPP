#include <bits/stdc++.h>
using namespace std;

int main(){
    string name[20];
    int score[20];
    int sumavg=0;
    for(int i=0;i<20;i++){
        cin >> name[i] >> score[i];
    }
    for(int i=0;i<20;i++){
        sumavg+=score[i];
        if(score[i] < 50)
            cout << "Score below 50: " << name[i] << " " << score[i] << endl;
    }
    sumavg/=20;
    cout << "Average score: " << sumavg << endl;
    return 0;
}
