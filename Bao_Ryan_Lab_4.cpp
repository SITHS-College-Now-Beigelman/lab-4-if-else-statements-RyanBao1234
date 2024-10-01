//Ryan Bao
//Lab 4
//10/1/24

#include <iostream>                                       //io stream for ease of coding

using namespace std;                                      //std for ease of coding

int main()                                                //initialize main
{
    string fruit;                                    //initialize variables
    float sugar;
    
    cout << endl;
    cout << "Please print the fruit name followed by a space and then the number of grams of sugar in a cup of that fruit" << endl;
    cin >> fruit >> sugar;
    cout << endl;

    if (sugar < 10)
        cout << fruit << " is a LOW SUGAR FRUIT." << endl;

    if (sugar >= 10 && sugar <= 14)
        cout << fruit << " is a MEDIUM SUGAR FRUIT." << endl;

    if (sugar > 14)
        cout << fruit << " is a HIGH SUGAR FRUIT." << endl;
    cout << endl;

return 0;
}