#include <iostream>
#include <string>

using namespace std;


int main() {
   
    int choose;
    int arrived;

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
        cout << "You decided to go to the CLOTHING SECTION of the maal." << '\n'; // Clothing selection
        cout << "Walking towards the CLOTHING STORE..." << '\n';
    }
    
    else if (choose == 2) {
        cout << "You decided to go to the GROCERY STORE SECTION of the maal." << '\n'; // Grocery selection
        cout << "Walking towards the GROCERY STORE..." << '\n';
    }
    
    else if (choose == 3){
        cout << "You decided to go to the RESTAURANT SECTION of the maal." << '\n'; // Restaurant selection
        cout << "Walking towards the RESTAURANT..." << '\n';
    }
    
    else {
        cout << "ERROR - Invalide Input" << '\n'; // Enter a valid input > otherwise ERROR
    }

    
    cout << "We arrived..." << '\n';

    cout << "What would you like to do next?: ";
    cin >> arrived;

      



    return 0; 



}






