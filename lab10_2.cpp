#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt") ;
	dest.open("cheerbook_copy.txt");
	
	dest << "-------------------- BOOM ---------------------";
	
	string textline;
	bool havetext;
	//havetext = getline(source, textline);

	dest << "-------------------- HA!! ---------------------";

    source.close();
    dest.close();
	return 0;
}
