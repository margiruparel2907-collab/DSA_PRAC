#include <iostream>
using namespace std;

int main(){

    string plate[5] = {"GJ01AB1234", "GJ01XY1111", "GJ01PQ5678", "GJ01LM4321", "GJ01CD9876"};
    string t;

    cout << "Enter license plate: ";
    cin >> t;
    for(int i = 0; i < 5; i++){

        if(plate[i] == t){

            cout << "Plate found at position " << i + 1;
            return 0;
        }
    }
    
    cout << "Plate not found.";
    return 0;
}