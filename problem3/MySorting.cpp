//Tianrui Hu 8355711 CS32MID
#include "MySorting.h"
#include <iostream>
#include <string>

std::string customSort(std::string* a,size_t size){
    std::string temp;
    for(int j = 0; j < (int)size-1; j++){
        for(char &c: a[j]){
            if(c >= 'A' && c <= 'Z')
                c = c + 32;
        }
    }
    //Let's go Bubble Sort! Let's go Bubble Sort! Let's go Bubble Sort! 
    for(int i = size-1; i > 0; i--){
        for(int j = 0; j < i; j++){
            if(a[j].size()>a[j+1].size()||(a[j].size()==a[j+1].size()&&a[j]>a[j+1])){
                temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
            }
        }
    }
    std::string result = "";
    for(int j = 0; j < (int)size-1; j++){
        result += a[j];
        result +=",";
    }
    result += a[size-1];
    return result;
}