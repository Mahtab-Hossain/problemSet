#include <iostream>
#include <string.h>
#include <cctype>
#include <algorithm>
#include <cstring>

using namespace std;
void petya(){
    string string_1, string_2;
    cin>>string_1>>string_2;
    transform(string_1.begin(),string_1.end(), string_1.begin(), ::tolower);
    transform(string_2.begin(),string_2.end(), string_2.begin(), ::tolower);
    cout<<strcmp(string_1.c_str(),string_2.c_str())<<endl;
}

int main(){
    petya();
}