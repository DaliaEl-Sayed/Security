#include <iostream>
#include <string>
using namespace std ;

int main()
{   
    string input; int size  ; int count ;
    int key  ;
    cin>> key ;
    cin >> input ;
    
    size = input.length();
    
    for (count = 0 ;count < size ; count++ ){
        
        for (int j = 0 ; j < key ; j++){
            
            if (input[count] == 'Z') {
                input[count] = 'A' ;
            }
            else{
                input[count] ++; 
            }
        }
        
    }
    
    cout << input ;
    
    
    
    return 0 ;
}