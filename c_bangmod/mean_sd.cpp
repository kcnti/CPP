#include <bits/stdc++.h>
using namespace std;

int mean(int *arr, int size){
    int a=0;
    for(int i=0;i<size;i++)
        a+=arr[i];
    return a/size;
}

int sd(int *arr, int mean, int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=pow((arr[i]-mean),2);
    }
    return sum/(size-1);
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int arrSize = sizeof(arr)/ sizeof(arr[0]);
    int _mean = mean(arr, arrSize);
    int std_dvt = sd(arr, _mean, arrSize);
    cout << _mean << " " << std_dvt << endl;
    return 0;
}
