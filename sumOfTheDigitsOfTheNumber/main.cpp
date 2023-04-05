//
//  main.cpp
//  sumOfTheDigitsOfTheNumber
//
//  Created by Burak Gaznepoğlu on 5.04.2023.
//

#include <iostream>
using namespace std;
int main() {
    string x;
    int z = 0, num = 1;
    cout << "Enter the value of number : ";
    cin >> x;
    
    for(int i = 0; i < x.size() ; i++){
        int intX = stoi(x);
        z +=  (intX / num) % 10;
        num *= 10;
    }
    cout << "Sum of the entered number digits is = " << z <<endl;
    return 0;
}
