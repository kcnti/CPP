#include <iostream>
using namespace std;

int main()
{
    int octagonSize;
    int r, s, i;

    printf("Enter number for Octagon size : ");
    scanf("%d", &octagonSize);

    for(r=0; r<octagonSize; r++)
    {
        for(s=0; s<=octagonSize-r; s++){
            printf(" ");
        }

        for(i=0; i<octagonSize; i++){
            if(r==0){
                printf("* ");
            }
            else if(r>0 && octagonSize == 2){
                printf("*");
                for(s=0; s<(octagonSize*2-3)+r*2; s++){
                    printf(" ");
                }
            }
            else if(r>0){
                if(i==0 || i == octagonSize-1){
                    printf("*");
                }else{
                    for(s=0; s<(octagonSize*2-3)+r*2; s++){
                        printf(" ");
                    }
                    i=octagonSize-2;
                }
            }
        }
        printf("\n");
    }

    for(r=0; r<octagonSize; r++)
    {
        for(s=0; s<=octagonSize*4-3; s++){
            if(s==0 || s == octagonSize*4-3){
                printf(" *");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }

    for(r=0; r<octagonSize; r++)
    {
        for(s=0; s<=r+1; s++){
            printf(" ");
        }

        for(i=0; i<octagonSize; i++){
            if(r==octagonSize-1){
                printf("* ");
            }else if(r==0 && octagonSize == 2){
                printf("*");
                for(s=0; s<(octagonSize*4-5)-r*2; s++){
                    printf(" ");
                }
            }
            else if(r>=0){
                if(i==0 || i == octagonSize-1){
                    printf("*");
                }else{
                    for(s=0; s<(octagonSize*4-5)-r*2; s++){
                        printf(" ");
                    }
                    i=octagonSize-2;
                }
            }
        }
        printf("\n");
    }

    return 0;
}
