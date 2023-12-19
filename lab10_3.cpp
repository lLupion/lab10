#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
    int count = 0;
    float sum = 0,mean,StanD,sum2=0;
    string textline;
    ifstream source("score.txt");
    while (getline(source,textline)){
        sum += atof(textline.c_str());
        sum2 += pow(atof(textline.c_str()),2);
        count ++;
    }
    mean = sum/count;
    StanD = sqrt((sum2/count)-pow(mean,2));
    cout << "Number of data = " << count;
    cout << setprecision(3);
    cout << "\nMean = " << mean;
    cout << "\nStandard deviation = " << StanD;
    source.close();
    return 0;

}