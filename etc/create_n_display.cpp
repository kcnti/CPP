#include <iostream>
using namespace std;

void display(int *array, size_t size){
  for(size_t i=0; i < size;i++){
    cout << array[i] << " ";
  }
}

int *create_arr(size_t size, int init){
  int *new_storage{nullptr};
  new_storage = new int[size];
  for(size_t i=0; i<size;i++){
    *(new_storage+i) = init;
  }
  return new_storage;
}

int main(){
  int *my_array{};
  int size;
  cout << "Enter number size of array: ";
  cin >> size;
  int init;
  cout << "Enter number to place in array: ";
  cin >> init;
  my_array = create_arr(size, init);
  display(my_array, size);
  cout << endl;
  delete [] my_array;
  return 0;

}
