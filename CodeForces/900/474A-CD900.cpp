#include <iostream>

using namespace std;

int main(){
    char shifting;
    cin >> shifting;
    string s, t;
    cin >> s;
    string comp = "qwertyuiopasdfghjkl;zxcvbnm,./";
    
    if(shifting == 'R'){
       for(int i = 0; i < s.length(); i++){
            for(int j = 1; j < comp.length(); j++){
                if(s[i] == comp[j] && s[i] != 'a' && s[i] != 'q' && s[i] != 'z'){
                    t += comp[j-1];
                } else if(s[i] == 'a'){
                    t += 'a';
                } else if(s[i] == 'q'){
                    t += 'q';
                } else if(s[i] == 'z'){
                    t += 'z';
                }
            }
        } 
    } else{
        for(int i = 0; i < s.length(); i++){
            for(int j = 0; j < comp.length(); j++){
                if(s[i] == comp[j] && s[i] != 'p' && s[i] != ';' && s[i] != '/'){
                    t += comp[j+1];
                }else if(s[i] == 'p'){
                    t += 'p';
                } else if(s[i] == ';'){
                    t += ';';
                } else if(s[i] == '/'){
                    t += '/';
                }
            }
        } 
    }
    
    cout << t;

    return 0;
}