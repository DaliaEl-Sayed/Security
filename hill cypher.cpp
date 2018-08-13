#include iostream
#include vector
#include string
#include math.h
using namespace std ;

int main(){
    
    int sq_num ;
    vector int key ; int temp ;
    string txt_init ;
    vector char txt ;
    vector int txt_to_num ;
    vector char ch = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    cin  sq_num ;
    
    
    for (int i = 0 ; i  sq_num ; i++){
        cin  temp ;
        temp = temp % 26 ;
        key.push_back(temp);
    }
    
    cin  txt_init ;
    
    for (int i = 0 ; i  txt_init.length() ; i++){
        txt.push_back(txt_init[i]);
    }
    
    int xx = sqrt (sq_num)  ;
    
    while (txt.size() % xx != 0){
        
        txt.push_back('X');
        
    }
    for (int i = 0 ; i  txt.size() ; i++){
        for (int j = 0 ; j  ch.size() ; j++){
            if (txt[i]== ch[j]){
                txt_to_num.push_back (j);
            }
        }
    }
    int count2 = 0;
    int key_matrix [xx][xx] ;
    for (int i = 0 ; i  xx ; i++) {
        for (int j = 0 ; j  xx ; j++) {
            key_matrix[i][j] = key[count2];
            count2 ++ ;
        }
    }
    int count = 0 ;
    while (count != txt.size()){
        int ra2se [xx][1] ;
        int result [xx][1] = {0} ;
        for (int j = 0 ; j  xx ; j++){
            ra2se[j][0] = txt_to_num[count] ;
            count ++ ;
        }
        
        for (int y = 0 ; y  xx ; y++){
            for (int z = 0 ; z  xx ; z++){
                
                
                result [y][0] += key_matrix[y][z]  ra2se [z][0];
                                           
            }
            
        }
        for (int g = 0 ; g  xx ; g++){
            result [g][0] = result [g][0] %26 ;
           
        }
        
        
        for (int yy = 0 ; yy  xx ; yy++){
            cout  ch[result[yy][0]]; 
        }
        
    }
    
    
    return 0 ;
}