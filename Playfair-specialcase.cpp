#include <iostream>
#include <string>
#include <vector>
using namespace std ;

int main()
{   
    string key_init , msg_init  ;
    vector <char> msg ;
    vector <char> key;
    char matrix [5][5] ;
    cin >> key_init ;
    cin >> msg_init ;
    
    for (int i = 0 ; i < key_init.length() ; i++){
        for (int j = i+1 ; j < key_init.length() ; j++){
            if (key_init[i] == key_init[j]) {
                key_init[j] = '0';
            }
        }
    }
   
   for (int i = 0 ; i < key_init.length() ; i++){
       if (key_init[i]!= '0'){
           key.push_back(key_init[i]) ;
           
       }
   }
   
   vector <char> temp = {'A','B','C','D','E','F','G','H','I','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
   for (int i = 0 ; i < key.size() ; i++){
        for (int j = 0 ; j < 25 ; j++) {
            
            if (key.at(i)==temp.at(j)) {
                
                temp.at(j)='0';
            }
        }
   }
   
   for (int i = 0 ; i < 25 ; i++){
        
        if (temp.at(i)!= '0'){
            key.push_back(temp.at(i)) ;
        }
        
   }
   int j = 0 ;
   
   for (int i = 1 ; i < msg_init.length();i+=2){
       
       msg.push_back(msg_init[j]);
       if (msg_init[i]==msg_init[j]){
            
            msg.push_back('X');
            msg.push_back(msg_init[i]);
            
        }
        else {
            msg.push_back(msg_init[i]);
        }
        j+=2;  
   }
   
   if (msg_init.length()%2 == 1){
       msg.push_back(msg_init[msg_init.length()-1]);
   }
   
   if (msg.size()%2 == 1){
       
       msg.push_back('X');
   }
   int kk = 0 ;
   for (int i = 0 ; i < 5 ; i++){
       for (int j = 0 ; j < 5 ; j ++){
           matrix [i][j] = key.at(kk);
           kk++;
       }
   }
   
   int number = msg.size() ;
   int it = 0 ;
   
   int a , s , d , f ;
   
   while (number != 0 ){
       for (int i = 0 ; i < 5 ; i++){
           for (int j = 0 ; j < 5 ; j++){
               
               if (matrix[i][j] == msg[it] ){
                   a = i ;
                   s = j ;
               }
           }
       }
       number -- ;
       it ++ ;
       for (int ii = 0 ; ii < 5 ; ii++){
           for (int jj = 0 ; jj < 5 ; jj++){
               
               if (matrix[ii][jj] == msg[it] ){
                   d = ii ;
                   f = jj ;
               }
           }
       }
       
       cout << matrix [a][f] << matrix [d][s]  ;
       number -- ;
       it++;
       
   }
}