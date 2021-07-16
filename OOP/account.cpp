#include <bits/stdc++.h>
using namespace std;

class Account{
  private:
    string name;
    double balance = 500.0;
  public:
    void set_name(string n){
      name = n;
    }
    double get_bal(){
      return balance;
    }
    bool deposite(double bal){
      balance += bal;
      cout << name << ", Deposite successful" << endl;
      return true;
    }
    bool withdraw(double bal){
      if(balance >= 0){
        balance -= bal;
          if(balance < 0){
            balance += bal;
            return false;
          }
        cout << name << ", Withdraw Successful" << endl;
        return true;
      } else{
//        cout << "Not sufficient balance" << endl;
        return false;
      }
    }
};

int main(){
  Account Earth;
  char _name[20];
  int method;
  double wd, dps;
  printf("Enter name: ");
  scanf("%s", _name);
  Earth.set_name(_name);
  while(true){
      printf("Enter the method (0 = exit , 1 = deposite, 2 = withdraw, 3 = get balance): ");
      scanf("%d", &method);
    if(method == 1){
      printf("Deposite: ");
      scanf("%lf", &dps);
      Earth.deposite(dps);
      cout << "Now you have " << Earth.get_bal() << " baht" << endl;
    }
    else if(method == 2){
      printf("Withdraw: ");
      scanf("%lf", &wd);
      if(Earth.withdraw(wd)){
        cout << "Now you have " << Earth.get_bal() << " baht" << endl;
        }
      else{
        printf("Not sufficient balance\n");  
        }
    }
    else if(method == 3){
      cout << "Now you have " << Earth.get_bal() << " baht" << endl;
    }
    else{
      printf("Bye\n");
      break;
    }
  }

  return 0;
}
