#include <iostream>
#include <vector>
#include "stdio.h"
#include <string>
#include <math.h>
using namespace std ;

int main(){
    
    string txt_init , key_init ;
    vector <int> txt2num, key2num , result ;
    vector <char> txt,key ;
    vector <char> ch = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    vector <int> ch_decimal = {65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90};
    cin >> key_init;
    cin >> txt_init ;
    for (int i = 0 ; i < txt_init.length() ; i++){
        txt.push_back(txt_init[i]);
    }
    int counter = 0 ;
    int index =0;
    while (counter != txt.size()){
        key.push_back(key_init[index]);
        index++;
        if(index == key_init.length()){
            index = 0 ;
        }
        counter ++ ;
    }
    for (int i = 0 ; i < txt.size() ; i++){
        for (int j = 0 ; j< ch.size(); j++) {
            if (ch[j]==txt[i]){
                txt2num . push_back (j);
            }
            if (ch[j]==key[i]){
                key2num . push_back (j);
            }
        }
    }
    cout << "Vigenere: ";
    for (int i = 0 ; i < txt.size() ; i++){
        result.push_back((txt2num[i]+key2num[i])%26);
        cout << ch[result[i]] ;
    }
    ////////////////////////////////////////////////////////////////////////vigenere
    cout << endl ;
    txt2num.clear();
    key2num.clear ();
    vector <int> re_de ;
   for (int i = 0 ; i < txt.size() ; i++){
        for (int j = 0 ; j< ch.size(); j++) {
            if (ch[j]==txt[i]){
                txt2num . push_back (ch_decimal[j]);
            }
            if (ch[j]==key[i]){
                key2num . push_back (ch_decimal[j]);
            }
        }
    }
    cout << "Vernam: ";
    for (int i = 0 ; i < txt2num.size() ; i++){
        int xx = (int)txt2num.at(i);
        int yy = (int)key2num.at(i);
        int zz = xx xor yy ;
        
        printf("%02hhX", zz);
    }
    cout << endl << "One-Time Pad: ";
    
    if (key_init.length() == txt_init.length()){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0 ;
}