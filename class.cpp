#include <algorithm>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <time.h>
#include <string>
#include <cstdlib>
using namespace std;
class passgen {
    int i=0;
    public:
    string alpha();
    string num();
    string symb();
    string passgenerator(); 
};
string passgen::alpha(){
    const string a ="abcdefghijklmnopqrstuvwxyz"; //total 26 alphabets
    const string A ="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string pass1;
    for (i=0;i<8;i++){
        if (rand()%2==0)
             pass1= pass1 + a[(rand()%27)];
        else
             pass1= pass1 + A[rand()%27];
    }
    return pass1;
    }
string passgen::num(){
    const string n ="0123456789";
    string pass2;
    for (i=0;i<4;i++){
        pass2 = pass2 + n[rand()%10];
     }
    return pass2;
    }
string passgen::symb(){
    const string s ="!@#$%^&*()_+[]";
    string pass3;
    for (i=0;i<4;i++){
        pass3 = pass3 + s[rand()%14];
    }
    return pass3;
    }
string passgen::passgenerator(){
    string pass;
    string pass1=alpha();
    string pass2=num();
    string pass3=symb();
    pass=pass1+pass2+pass3;
    return pass;    
}

class passstore {
    ofstream file;
    string name;
    string pass;
    passstore(string name,string pass) {
        this->name = name;
        this->pass = pass;
    }
    void writeit(){
        file.open(name,ios::in);
        file << pass << endl;
        file.close();
    }
};
class passret {
    ifstream file;
    string masterpass;
    string name;
    string text;
    passret(string name, string masterpass){
        this->name = name;
        this->masterpass = masterpass;
    }
    void readit(){
        file.open(name,ios::out);
        while(!file.eof())
        {
            cout << text << endl;
            file >> text;
        }
        file.close();
    }
};
