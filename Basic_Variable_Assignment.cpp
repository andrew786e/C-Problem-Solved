#include <iostream>
#include <string>
using namespace std ;


// This functions adds the word Eadbit to the end of a word written by a user
string Extendsion_of_name(string user_input){
    string site_name = "Edabit" ;
    string combine_name = user_input + site_name ;
    return combine_name ;
}

int main(){
    string enter_name ;
    cin >> enter_name  ; 
    string combine_name = Extendsion_of_name(enter_name) ;
    cout << combine_name << endl ;
}