#include <iostream>
#include <string>

using namespace std;


int main() {
   
    int choose;

    cout << "Hello to our sopping maal. How can I help you?..." << '\n'; // Welcom message to customer
    cout << "What section would you like to visit first?" << '\n';

    const char *text = "We have following sections: " // Choose next location - shopping sections
                       " 1. Clothing Section"
                       " 2. Glocery Store"
                       " 3. Restaurant"; 
    
    std::cout << text << std::endl;

    cout << "Choose a number 1 - 3: "; 
    cin >> choose;

    if (choose == 1) {
        cout << "You decided to go to the CLOTHING SECTION of the maal." << '\n';
    }
    
    else if (choose == 2) {
        cout << "You decided to go to the GROCERY STORE SECTION of the maal." << '\n'; 
    }
    
    else if (choose == 3){
        cout << "You decided to go to the RESTAURANT SECTION of the maal." << '\n'; 
    }
    
    else{
        cout << "ERROR - Invalide Input" << '\n';
    }




    return 0; 



}






