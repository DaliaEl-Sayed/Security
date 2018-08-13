#include <iostream>
#include <vector>
#include <string>
#include <bitset>
using namespace std;
int main(){
 /////////// get inputs ///////////////  
    int permutation_table_output_size ;
    int permutation_table_input_size ;
    vector<int> Perm_table;
    vector<int> input_text_binary;
    vector<string>Result;
    int Perm_table_int;
    cin >> permutation_table_output_size;
    int limit = permutation_table_output_size;
    while (limit >0){
    cin >> Perm_table_int;
    Perm_table.push_back (Perm_table_int);
    limit--;
    }
    cin >> permutation_table_input_size;
    string input_text;
    cin >> input_text;
////////// convert data to binary ///////////////////
    for (int i = 0 ; i < input_text.size(); i++){
        if (input_text[i] =='0'){
            input_text_binary.push_back(0);
            input_text_binary.push_back(0);
            input_text_binary.push_back(0);
            input_text_binary.push_back(0);
        }
        else if (input_text[i] =='1'){
            input_text_binary.push_back(0);
            input_text_binary.push_back(0);
            input_text_binary.push_back(0);
            input_text_binary.push_back(1);
        }
        else if (input_text[i] =='2'){
            input_text_binary.push_back(0);
            input_text_binary.push_back(0);
            input_text_binary.push_back(1);
            input_text_binary.push_back(0);
        }
        else if (input_text[i] =='3'){
            input_text_binary.push_back(0);
            input_text_binary.push_back(0);
            input_text_binary.push_back(1);
            input_text_binary.push_back(1);
        }
        else if (input_text[i] =='4'){
            input_text_binary.push_back(0);
            input_text_binary.push_back(1);
            input_text_binary.push_back(0);
            input_text_binary.push_back(0);
        }
        else if (input_text[i] =='5'){
            input_text_binary.push_back(0);
            input_text_binary.push_back(1);
            input_text_binary.push_back(0);
            input_text_binary.push_back(1);
        }
        else if (input_text[i] =='6'){
            input_text_binary.push_back(0);
            input_text_binary.push_back(1);
            input_text_binary.push_back(1);
            input_text_binary.push_back(0);
        }
        else if (input_text[i] =='7'){
            input_text_binary.push_back(0);
            input_text_binary.push_back(1);
            input_text_binary.push_back(1);
            input_text_binary.push_back(1);
        }
        else if (input_text[i] =='8'){
            input_text_binary.push_back(1);
            input_text_binary.push_back(0);
            input_text_binary.push_back(0);
            input_text_binary.push_back(0);
        }
        else if (input_text[i] =='9'){
            input_text_binary.push_back(1);
            input_text_binary.push_back(0);
            input_text_binary.push_back(0);
            input_text_binary.push_back(1);
        }
         
        else if (input_text[i] =='A'){
            input_text_binary.push_back(1);
            input_text_binary.push_back(0);
            input_text_binary.push_back(1);
            input_text_binary.push_back(0);
        }
        else if (input_text[i] =='B'){
            input_text_binary.push_back(1);
            input_text_binary.push_back(0);
            input_text_binary.push_back(1);
            input_text_binary.push_back(1);
        } 
        else if (input_text[i] =='C'){
            input_text_binary.push_back(1);
            input_text_binary.push_back(1);
            input_text_binary.push_back(0);
            input_text_binary.push_back(0);
        }
        else if (input_text[i] =='D'){
            input_text_binary.push_back(1);
            input_text_binary.push_back(1);
            input_text_binary.push_back(0);
            input_text_binary.push_back(1);
        } 
        else if (input_text[i] =='E'){
            input_text_binary.push_back(1);
            input_text_binary.push_back(1);
            input_text_binary.push_back(1);
            input_text_binary.push_back(0);
        }
        else if (input_text[i] =='F'){
            input_text_binary.push_back(1);
            input_text_binary.push_back(1);
            input_text_binary.push_back(1);
            input_text_binary.push_back(1);
        }
        else{
            cout<<"error";
        }
        
    }
    /////////////////////////place data to per table /////////////////////////////
    for (int x = 0 ; x < Perm_table.size(); x++){
        Perm_table[x]--;
        int num = Perm_table[x];
        Perm_table[x] = input_text_binary[num] ;
    }
    /////////////////////////////convert to hex ///////////////////////////////////
   
 
    for (int x = 0; x < Perm_table.size(); x=x+4)
    {   
        if (Perm_table[x] == 0 && Perm_table[x+1] == 0 && Perm_table[x+2] == 0 && Perm_table[x+3] == 0 ){
            cout << 0 ;
        }
        else if (Perm_table[x] == 0 && Perm_table[x+1] == 0 && Perm_table[x+2] == 0 && Perm_table[x+3] == 1 ){
            cout << 1 ;
        }
        else if (Perm_table[x] == 0 && Perm_table[x+1] == 0 && Perm_table[x+2] == 1 && Perm_table[x+3] == 0 ){
            cout << 2 ;
        }
        else if (Perm_table[x] == 0 && Perm_table[x+1] == 0 && Perm_table[x+2] == 1 && Perm_table[x+3] == 1 ){
            cout << 3 ;
        }
        else if (Perm_table[x] == 0 && Perm_table[x+1] == 1 && Perm_table[x+2] == 0 && Perm_table[x+3] == 0 ){
            cout << 4 ;
        }
        else if (Perm_table[x] == 0 && Perm_table[x+1] == 1 && Perm_table[x+2] == 0 && Perm_table[x+3] == 1 ){
            cout << 5 ;
        }
        else if (Perm_table[x] == 0 && Perm_table[x+1] == 1 && Perm_table[x+2] == 1 && Perm_table[x+3] == 0 ){
            cout << 6 ;
        }
        else if (Perm_table[x] == 0 && Perm_table[x+1] == 1 && Perm_table[x+2] == 1 && Perm_table[x+3] == 1 ){
            cout << 7 ;
        }
        else if (Perm_table[x] == 1 && Perm_table[x+1] == 0 && Perm_table[x+2] == 0 && Perm_table[x+3] == 0 ){
            cout << 8 ;
        }
        else if (Perm_table[x] == 1 && Perm_table[x+1] == 0 && Perm_table[x+2] == 0 && Perm_table[x+3] == 1 ){
            cout << 9 ;
        }
        else if (Perm_table[x] == 1 && Perm_table[x+1] == 0 && Perm_table[x+2] == 1 && Perm_table[x+3] == 0 ){
            cout << 'A' ;
        }
        else if (Perm_table[x] == 1 && Perm_table[x+1] == 0 && Perm_table[x+2] == 1 && Perm_table[x+3] == 1 ){
            cout << 'B' ;
        }
        else if (Perm_table[x] == 1 && Perm_table[x+1] == 1 && Perm_table[x+2] == 0 && Perm_table[x+3] == 0 ){
            cout << 'C' ;
        }
        else if (Perm_table[x] == 1 && Perm_table[x+1] == 1 && Perm_table[x+2] == 0 && Perm_table[x+3] == 1 ){
            cout << 'D' ;
        }
        else if (Perm_table[x] == 1 && Perm_table[x+1] == 1 && Perm_table[x+2] == 1 && Perm_table[x+3] == 0 ){
            cout << 'E' ;
        }
        else if (Perm_table[x] == 1 && Perm_table[x+1] == 1 && Perm_table[x+2] == 1 && Perm_table[x+3] == 1 ){
            cout << 'F' ;
        }
         
    }

             

    return 0;
}