#include <iostream>
using namespace std; //No namespace std (Added)

int JhamilArnold_Unit2_Topic2 () {
    int hourlyWage;
    int yearlySalary; //Variable started as a number (Fixed)

    cout << "What is the hourly wage?" << endl;
    cin >> hourlyWage;

    yearlySalary = hourlyWage * 40 * 50; //Variable started as a number (Fixed)

    cout << "Annual salary is: " << yearlySalary << endl; //Variable started as a number

    return 0; //No Semicolon to end
}
