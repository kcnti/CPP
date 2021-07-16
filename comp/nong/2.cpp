#include <iostream>

int main(){
    int score[5];
    for(int i=1;i<=5;i++){
        int sum=0;
        for(int j=0;j<5;j++){
            int a;
            std::cout << "Enter score " << i << " person: ";
            std::cin >> a;
            sum+=a;
        }
        score[i-1] = sum;
    }
    int highest = score[0];
    for(int i=1;i<5;i++){
        if(score[i] > highest){
            highest = score[i];
        }
    }
    std::cout << "The highest score: " << highest << std::endl;
}
