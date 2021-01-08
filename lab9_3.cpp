#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

int main(){

    int count=0;
    float sum,sd1;
    string number;

    ifstream source("score.txt");

    while (getline(source,number)){
        sum += atof(number.c_str());
        sd1+=pow(atof(number.c_str()),2);
        count++;
    }
    




    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << sum/count << endl;
    cout << "Standard deviation = "<< pow((sd1/count)-pow(sum/count,2),0.5) << endl;

    source.close();

    return 0;
}