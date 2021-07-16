#include<stdio.h>
#include<string.h>
#include <iostream>
using namespace std;

int main(){
	char ch[15],frame[2] = {'#','*'};
	cin >> ch;
	if(strlen(ch) > 15){
		return 0;
	}
	
	int i,count =0;
	for( i=0;i <= strlen(ch)*4 ; i++){ // first line
		if(i%4 == 2 ){
			count ++;
			if(count == 3){
				// printf("%c",frame[1]);
				cout << frame[1];
				count = 0;
			}
			// else printf("%c",frame[0]);
			else{
				cout << frame[0];
			}
		}
		else printf(".");
	}
	printf("\n");
	
	
	count = 0;
	for(i=0;i <= strlen(ch)*4;i++){ //second line
		if( i % 2 == 0){ // even
			printf(".");
		}
		if(i % 2 == 1){ // odd
			count ++;
			if(count == 5){
				count ++;
				printf("%c",frame[1]);
			}
			else if(count == 7){
				printf("%c",frame[1]);
				count = 0;
			}
			else printf("%c",frame[0]);
		}		
	}
	printf("\n");
	
	count =0;
	int j=0,last =0;
	for( i=0;i <= strlen(ch)*4; i++){ // third line
 		if( i % 2 == 1){ // odd
			printf(".");
		}
		if(i % 2 == 0){ // even
			count ++;
			if(count == 2 || count == 4 || count == 6 ){
				printf("%c",ch[j]);
				j++;
			}
			else if(count == 5){
					if(i == strlen(ch)*4 ){
						printf("%c",frame[0]);
					}
					else printf("%c",frame[1]);
				}
			else if(count == 7){
					count = 1;
					printf("%c",frame[1]);
			}
			else printf("%c",frame[0]);
		}
	}
	printf("\n");
	
	count = 0;
	for(i=0;i <= strlen(ch)*4;i++){ // fourth line
		if( i % 2 == 0){ // even
			printf(".");
		}
		if(i % 2 == 1){ // odd
			count ++;
			if(count == 5){
				count ++;
				printf("%c",frame[1]);
			}
			else if(count == 7){
				printf("%c",frame[1]);
				count = 0;
			}
			else printf("%c",frame[0]);
		}		
	}
	printf("\n");
	
	count = 0;
	for( i=0;i <= strlen(ch)*4 ; i++){ // fifth line
		if(i%4 == 2 ){
			count ++;
			if(count == 3){
				printf("%c",frame[1]);
				count = 0;
			}
			else printf("%c",frame[0]);
		}
		else printf(".");
	}	
}



// #include <iostream>
// #include <string>
// #include <cstring>
// using namespace std;

// int main(){
// 	char ch[15];
// 	char frame[2] = {'#', '*'};
// 	cin >> ch;
// 	// cout << frame[0] << endl;
// 	if(strlen(ch) > 15){
// 		return 0;
// 	}

// 	int count =0;
// 	for(int i {}; i <= strlen(ch)*4; i++){
// 		if (i%4 == 2){
// 			count++;
// 			if(count == 3){
// 				cout << frame[1];
// 				count = 0;
// 			}
// 			else {
// 				count << frame[0];
// 			}
// 		}
// 		else {
// 			cout << ".";
// 		}
// 	}
// 	cout << endl;

// 	count = 0;
// 	for(int i {}; i <= strlen(ch)*4; i++){
// 		if(i%2 == 0){
// 			cout << ".";
// 		}
// 		if (i%2 ==1){
// 			count++;
// 			if (count == 5){
// 				count++;
// 				cout << frame[1];
// 			} else if (count == 7) {
// 				cout << frame[1];
// 				count = 0;
// 			} else {
// 				cout << frame[0];
// 			}
// 		}
// 	}
// 	cout << endl;

// 	count = 0;
// 	int j {0}, last {0};
// 	for(int i {}; i <= strlen(ch)*4; i++){
// 		if(i%2 == 1){
// 			cout << ".";
// 		}
// 		if (i%2 == 0){
// 			count++;
// 			if(count ==2 || count == 4 || count == 6){
// 				cout << ch[j];
// 				++j;
// 			} else if (count == 5){
// 				if(i == strlen(ch)*4){
// 					cout << frame[0];
// 				} else{
// 					cout << frame[1];
// 				}
// 			} else if (count == 7){
// 				count = 1;
// 				cout << frame[1];
// 			} else {
// 				cout << frame[0];
// 			}
// 		}
// 	}
// 	cout << endl;

// 	count = 0;
// 	for(int i {}; i <= strlen(ch)*4; i++){
// 		if (i%2 == 0){
// 			cout << ".";
// 		}
// 		if (i % 2 == 1){
// 			count++;
// 			if(count == 5){
// 				count++;
// 				cout << frame[1];
// 		} else if (count == 7) {
// 			cout << frame[1];
// 			count = 0;
// 		} else {
// 			cout << frame[0];
// 		}
// 	}
// 	cout << endl;

// 	count = 0;
// 	for (int i {}; i <= strlen(ch)*4; i++){
// 		if(i%4 == 2){
// 			count++;
// 			if (count ==3){
// 				cout << frame[1];
// 				count = 0;
// 			} else {
// 				cout << frame[0];
// 			}
// 		} else {
// 			cout << ".";
// 			}
// 		}
// 	}
// }
