#include <iostream>
#include <bits/stdc++.h>
using namespace std;


string encryptRailFence(string text, int key);


int main()
{
    cout<<"how many keys : "<<endl;
    int key;
    cin>>key;
    string text;
    cout<<"Enter text to be encrypted : "<<endl;

    cin.ignore();
    getline(cin,text);


 cout<<"The encrypted message is : "<<encryptRailFence(text,key);
}

string encryptRailFence(string text,int key){
    char isuck[key][text.length()+1];
    int row=0;
    int column=0;
    for(int i=0; i<key; ++i){
        for(int k=0; k<text.length()+1; k++){

            isuck[i][k]='-';
        }
    }
    bool zigzag=false;

    for(int i=0; i<text.length()+1; ++i){

        if (row==0 || row==key-1){
            zigzag=!zigzag;
        }
        column++;
        isuck[row][column]=text[i];


    if(zigzag){
        row++;

    }
    else{
        row--;
    }
}
 string ciphered_text;
for(int i=0; i<key; ++i){
    for(int k=0; k<text.length()+1; ++k){
            cout<<isuck[i][k];
        if(isuck[i][k]!='-'){
                ciphered_text.push_back(isuck[i][k]);

        }

    }
    cout<<endl;
}
return ciphered_text;


return 0;
}
