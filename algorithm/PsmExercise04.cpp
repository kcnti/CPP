#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    char path, d = 'N';
    for (int i = 0; i < N; i++) {
        cin >> path;
        if (path == 'B') {
            if (d == 'N') {
                d = 'E';
            }
            else if (d == 'E') {
                d = 'S';
            }
            else if (d == 'S'){
                d = 'W';
            }
            else if (d == 'W') {
                d = 'N';
            }
        }
        else if (path == 'C') {
            if (d == 'N') {
                d = 'W';
            }
            else if (d == 'E') {
                d = 'N';
            }
            else if (d == 'S') {
                d = 'E';
            }
            else if (d == 'W') {
                d = 'S';
            }
        }
        else if (path == 'D') {
            if (d == 'N') {
                d = 'S';
            }
            else if (d == 'E') {
                d = 'W';
            }
            else if (d == 'S') {
                d = 'N';
            }
            else if (d == 'W') {
                d = 'E';
            }
        }
    }
    cout << d;
}