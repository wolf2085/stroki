#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "C:/lib/std_lib_facilities_4.h"
#include <vector>
#include "MyString.h"
using namespace std;


int main()
{
    char mas[50] = "Hello";
    char mas2[50] = "World";
    strCpy(mas, mas2);
    cout << mas << endl;
    char mas3[50] = ", 9091";
    strCat(mas, mas3);
    cout << mas << endl;
    strToLower(mas);
    cout << mas << endl;
    strToUpper(mas);
    cout << mas << endl;
    strReverse(mas);
    cout << mas << endl;
    strReverse(mas);
    cout << mas << endl;
    char mas4[50] = "9091";
    int index = strStr(mas, mas4);
    cout << index << endl;
    int result = strCmp(mas, mas4);
    cout << result << endl;
    char* lower = strToLowerDyn(mas);
    cout << lower << endl;
    char* upper = strToUpperDyn(mas);
    cout << upper << endl;
}
