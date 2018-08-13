#include <iostream>
#include <string>
using namespace std ;

int main()
{   
    string input ;
    string key ;
    char arr [25] = {'0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0'}; 
    char alpha [25] = {'A','B','C','D','E','F','G','H','I','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    cin >> key ;
    cin >> input ;
    int x = key.length() ;
    int y = x ;
    
    for (int i = 0 ; i < 25 ; i++) {
        
        arr[i] = key[i] ;
        y-- ;
        if (y==0){
            break;
        }
    }
   
    
    for (int i = 0 ; i < 25 ; i++){
        for (int j = 0 ; j < 25; j++){
            
            if (arr[i] == alpha[j]){
                alpha[j] = {'5'};
            }
            
            
        }
        
    }
    for (int i = 0 ; i < 25 ; i++){
        if (alpha[i] == '5'){
            continue;
            
        }
        else {
            arr[x]=alpha[i];
            x=x+1;
        }
    }  
   
    int h = 0 ;
    char matrix [5][5] ;
    
    for (int i = 0 ; i < 5 ; i++){
        for (int j = 0 ; j < 5 ; j++){
            matrix [i][j] = arr[h];
            h++;
        }
    }
    
    //////////////////////////////////////////////
    int le = input.length() ;
    int number = le / 2 ;
    int t = 0; int a ,s,d,f ;
    while (number!= 0){
        for (int i = 0; i< 5 ; i++ ){
            for (int j = 0 ; j < 5 ; j++){
                if (matrix [i][j] == input[t]) {
                    a=i;
                    s=j;
                }
            }
        }
        t++;
        for (int ii = 0 ; ii< 5 ; ii++ ){
            for (int jj = 0 ; jj < 5 ; jj++){
                if (matrix [ii][jj] == input[t]) {
                    d=ii;
                    f=jj;
                }
            }
        }
        
        cout << matrix[a][f] << matrix [d][s] ;
        t++;
        number--;
    }
    return 0 ;
}
    