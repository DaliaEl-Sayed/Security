#include <iostream>
#include <vector>
#include <string>
using namespace std ;

int main(){
    
    int shift ;
    string txt ;
    
    vector <char> ch ;
    
    cin >> shift ;
    cin >> txt ;
    int x = shift ;
    while (x >= 26 ){
        
       x =  shift % 26 ; 
        
    }
    
   
    int k = 1 ;
    for (int i = 0 ; i < txt.length () ; i ++ ) {
        ch.push_back ( txt[i] ) ;
        for (int j = 1 ; j <= x ; j++) {
            
            if (ch[i] == 'Z'){
                
                ch[i] = 'A' ;
                
            }
            
            else {
                ch[i] = ch[i]+1 ;
                
            
            }
             
        }
    }
    
    for (int i = 0 ; i < ch.size() ; i++){
        cout << ch[i] ;
    }
    return 0 ;
}