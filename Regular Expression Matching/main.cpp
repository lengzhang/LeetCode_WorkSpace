// '.' Matches any single character.
// '*' Matches zero or more of the preceding element.

#include <iostream>
#include <string>
#include <map>

bool isMatch(std::string s, std::string p);

int main(){
    if (isMatch("aab", "c*a*a*b"))
        std::cout<<"Match"<<std::endl;
    else
        std::cout<<"Unmatch"<<std::endl;
    return 0;
};

bool isMatch(std::string s, std::string p) {
    
    
    return false;
};