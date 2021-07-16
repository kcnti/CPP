#include <iostream>
using namespace std;

int main(){
    unsigned short n,i,stwin=0,rdwin=0;
    cin >> n;
    short input,st[5],rd[5],check;
    while (n>0){
        for (i=0;i<9;i++){
            check=stwin+rdwin;
            cin >> input;
            if(i%2==0){
                st[i/2]=input;
                for (short j=0;j<=i/2;j++){
                    if(st[j]==1){
                        for(short k=0;k<=i/2;k++){
                            if(st[k]==2){
                                for(short l=0;l<=i/2;l++){
                                    if(st[l]==3){
                                        stwin+=1;
                                        break;
                                    }
                                }
                            }
                            else if(st[k]==4){
                                for(short l=0;l<=i/2;l++){
                                    if(st[l]==7){
                                        stwin+=1;
                                        break;
                                    }
                                }
                            }

                            else if(st[k]==5){
                                for(short l=0;l<=i/2;l++){
                                    if(st[l]==9){
                                        stwin+=1;
                                        break;
                                    }
                                }
                            }
                        }
                    }
                    else if(st[j]==2){
                        for(short k=0;k<=i/2;k++){
                            if(st[k]==5){
                                for(short l=0;l<=i/2;l++){
                                    if(st[l]==8){
                                        stwin+=1;
                                        break;
                                    }
                                }
                            }
                        }
                    }
                    else if(st[j]==3){
                        for(short k=0;k<=i/2;k++){
                            if(st[k]==6){
                                for(short l=0;l<=i/2;l++){
                                    if(st[l]==9){
                                        stwin+=1;
                                        break;
                                    }
                                }
                            }
                            else if(st[k]==5){
                                for(short l=0;l<=i/2;l++){
                                    if(st[l]==7){
                                        stwin+=1;
                                        break;
                                    }
                                }
                            }
                        }
                    }
                    else if(st[j]==4){
                        for(short k=0;k<=i/2;k++){
                            if(st[k]==5){
                                for(short l=0;l<=i/2;l++){
                                    if(st[l]==6){
                                        stwin+=1;
                                        break;
                                    }
                                }
                            }
                        }
                    }
                    else if(st[j]==7){
                        for(short k=0;k<=i/2;k++){
                            if(st[k]==8){
                                for(short l=0;l<=i/2;l++){
                                    if(st[l]==9){
                                        stwin+=1;
                                        break;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            else if(i%2==1){
                rd[(i-1)/2]=input;
                for (short j=0;j<=i/2;j++){
                    if(rd[j]==1){
                        for(short k=0;k<=i/2;k++){
                            if(rd[k]==2){
                                for(short l=0;l<=i/2;l++){
                                    if(rd[l]==3){
                                        rdwin+=1;
                                        break;
                                    }
                                }
                            }
                            else if(rd[k]==4){
                                for(short l=0;l<=i/2;l++){
                                    if(rd[l]==7){
                                        rdwin+=1;
                                        break;
                                    }
                                }
                            }

                            else if(rd[k]==5){
                                for(short l=0;l<=i/2;l++){
                                    if(rd[l]==9){
                                        rdwin+=1;
                                        break;
                                    }
                                }
                            }
                        }
                    }
                    else if(rd[j]==2){
                        for(short k=0;k<=i/2;k++){
                            if(rd[k]==5){
                                for(short l=0;l<=i/2;l++){
                                    if(rd[l]==8){
                                        rdwin+=1;
                                        break;
                                    }
                                }
                            }
                        }
                    }
                    else if(rd[j]==3){
                        for(short k=0;k<=i/2;k++){
                            if(rd[k]==6){
                                for(short l=0;l<=i/2;l++){
                                    if(rd[l]==9){
                                        rdwin+=1;
                                        break;
                                    }
                                }
                            }
                            else if(rd[k]==5){
                                for(short l=0;l<=i/2;l++){
                                    if(rd[l]==7){
                                        rdwin+=1;
                                        break;
                                    }
                                }
                            }
                        }
                    }
                    else if(rd[j]==4){
                        for(short k=0;k<=i/2;k++){
                            if(rd[k]==5){
                                for(short l=0;l<=i/2;l++){
                                    if(rd[l]==6){
                                        rdwin+=1;
                                        break;
                                    }
                                }
                            }
                        }
                    }
                    else if(rd[j]==7){
                        for(short k=0;k<=i/2;k++){
                            if(rd[k]==8){
                                for(short l=0;l<=i/2;l++){
                                    if(rd[l]==9){
                                        rdwin+=1;
                                        break;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            n-=1;
            if(check!=stwin+rdwin){
                break;
            }
            if(n==0){
                break;
            }
        }
    }
    cout << stwin << "\n" << rdwin;

}
