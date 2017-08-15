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
    std::map<char, int> alphabets_map;
    for (int i = 0; i < p.size() - s.size() + 1; i++) {
        if (p[i] == s[0] || p[i] == '.' || (p[i] == '*' && alphabets_map.find(s[0]) != alphabets_map.end())) {
            std::map<char, int> temp_map = alphabets_map;
            printf("%d - %d\n", alphabets_map.size(), temp_map.size());
            for (int j = 1; j < s.size(); j++) {
                
                if (s[j] != p[i + j] && p[i + j] != '.')
                    break;
                else if (p[i + j] == '*' && temp_map.find(s[j]) == temp_map.end())
                    break;
                printf("%c[%c]", s[j], p[i+j]);
                if (temp_map.find(p[i]) == temp_map.end()) {
                    temp_map[p[i]] = 1;
                }
            }
            printf("\n");
        }

        if (alphabets_map.find(p[i]) == alphabets_map.end()) {
            alphabets_map[p[i]] = 1;
        }
    }
    
    return false;
};