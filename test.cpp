// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
    int numbers[] {12,3,21,3,8,2,8,12,12};
    int collection_size = sizeof(numbers)/sizeof(numbers[0]);
    int unique_data [20];
    
   bool already_in{false};
   unsigned int unique_counter = 0;
   for(unsigned int i = 0; i < collection_size; i++){
    already_in = false;
    for(unsigned j = 0;j < collection_size; j++){
        if (i == j)
            continue;
            
      if(numbers[j] == numbers[i]){
        already_in = true;
        break;
      }
    }
	
    if(!already_in){
        
      unique_data[unique_counter++] = numbers[i];
    }
    
  }

  std::cout << "The collection contains " << unique_counter << " unique numbers, they are : ";

  for(unsigned int i{};i < unique_counter ; ++i){
    std::cout << unique_data[i] << " ";
  }    

    return 0;
}