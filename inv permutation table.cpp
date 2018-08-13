#include <iostream>
#include <vector>
#include <string>
#include <bitset>
using namespace std;
int main(){
 /////////// get inputs ///////////////  
    int permutation_table_output_size ;
    vector<int> Perm_table;
    vector<int> Perm_table_output;
    int Perm_table_int;
    cin >> permutation_table_output_size;
    if (permutation_table_output_size%4 != 0){
        cout << "IMPOSSIBLE" ;
        exit(0);
    }
    int limit = permutation_table_output_size;
    while (limit >0){
    cin >> Perm_table_int;
    if (Perm_table_int > permutation_table_output_size){
        cout << "IMPOSSIBLE" ;
        exit(0);
    }
    Perm_table.push_back (Perm_table_int);
    Perm_table_output.push_back (Perm_table_int);
    limit--;
    }
    for (int x = 0; x < Perm_table.size(); x++)
    {
        Perm_table[x]--;
        
    } 
      cout<<endl;       
////////// convert data to binary ///////////////////
    for (int i = 0; i<Perm_table.size(); i++){
        int num = Perm_table[i]; //num = 2
        int num_final = Perm_table[num]; // num_final =0
        Perm_table_output[i] = Perm_table[num_final];
        cout<<endl;
        cout <<i<< num << num_final << Perm_table[i];
    }
    cout<<endl;
    for (int x = 0; x < Perm_table.size(); x++)
    {
        cout << Perm_table_output[x]+1;
        if (x< Perm_table.size()-1){
            cout << " ";
        }
        
    } 
             

    return 0;
}