#include <iostream>
using namespace std;

//Variables
int JhamilArnold_Unit2_Topic2 () {
    int rectangular_Area;
    int rectangular_Width;
    int rectangular_Height;

 //Inputs
    cout << "What is the Rectangular Width? " << endl; //Ask user for Rectangular Width
    cin >> rectangular_Width; //User Inputs
    cout << "What is the Rectangular Height? " << endl; //Ask user for Rectangular Height
    cin >> rectangular_Height; //User Inputs

 //Process
     rectangular_Area = rectangular_Width * rectangular_Height; //Calculates Rectangular Area by Width x Height

 //Outputs
    cout << "The Rectangular Area is: " << rectangular_Area << endl; //Outputs Calculation

return 0;
}
