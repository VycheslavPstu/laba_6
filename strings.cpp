#include <cstring>
#include <iostream>
#include <bits/stdc++.h>
#include <map>
using namespace std;

int main()
{
    string s, h;
    string del = "_";  // Разделитель
    getline(cin, s);
    
    map <string, string> Dictionary; // Словарь
    Dictionary["THIS"] = "ЭТО";
    Dictionary["IS"] = "";
    Dictionary["A"] = "";
    Dictionary["TABLE"] = "СТОЛ";
    
    int start, end = -1*del.size();
    do {
        start = end + del.size();
        end = s.find(del, start);
        h = s.substr(start, end - start);
        if (end == -1){
            cout << Dictionary[h] << "\n";
        }
        else if (Dictionary[h] != ""){
            cout << Dictionary[h] << "_";
        }
        
    } while (end != -1)
    return 0;
}
