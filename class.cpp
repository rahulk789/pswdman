#include <iostream>
#include <fstream>
#include <stdio.h>
#include <time.h>
#include <string.h>
using namespace std;
class passgen {
    
    private:
    //srand(time(0));
    int i=0;
   
    public:
    string alpha();
    string num();
    string symb();
    string passgenerator(); 
};
passgen::string alpha(){
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
passgen::string num(){
        const string n ="0123456789";
        string pass2;
        for (i=0;i<4;i++){
            pass2 = pass2 + n[rand()%10];
        }
        return pass2;
    }
passgen::string symb(){
        const string s ="!@#$%^&*()_+[]";
        string pass3;
        for (i=0;i<4;i++){
            pass3 = pass3 + s[rand()%14];
        }
        return pass3;
    }
passgen::string passgenerator(){
        string pass1=alpha();
        string pass2=num();
        string pass3=symb();
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
        file.open(name+".txt");
        file << pass << endl;
        file.close();
    }
};
class passret {
    ofstream file;
    string masterpass;
    string name;
    string text;
    passret(string name, string masterpass){
        this->name = name;
        this->masterpass = masterpass;
    }
    void readit(){
        file.open(name+".txt");
        getline(file,text);
        cout << text << endl;
    }
};
