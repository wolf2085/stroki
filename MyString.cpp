#include <iostream>

unsigned int strLen(const char* str)
{
    const char* temp = str;
    while (*temp++);
    return temp - str - 1;
}

void strToUpper(char* str)
{
    int size = strLen(str);
    for (int i = 0; i < size; i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
            str[i] -= 32;
    }
}

void strToLower(char* str)
{
    int size = strLen(str);
    for (int i = 0; i < size; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
            str[i] += 32;
    }
}

void strCpy(char* dest, const char* source)
{
    int size = strLen(source);
    for (int i = 0; i < size; i++)
    {
        dest[i] = source[i];
    }
    dest[size] = '\0';
}

void strCat(char* dest, const char* source)
{
    int size1 = strLen(dest);
    int size2 = strLen(source);
    int j = size1;
    for (int i = 0; i < size2; i++)
    {
        dest[j] = source[i];
        j++;
    }
    dest[size1 + size2] = '\0';

}

void strReverse(char* str)
{
    int size = strLen(str);
    int j = size - 1;
    for (int i = 0; i < size / 2; i++)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        j--;
    }
}



int strStr(const char* str, const char* substr)
{
    int size = strLen(str);
    bool find = false;
    for (int i = 0; i < size; i++)
    {
        if (str[i] == substr[0])
        {
            for (int j = 0; str[i] == substr[j]; j++)
            {
                if (substr[j + 1] == '\0')
                {
                    find = true;
                    return i - j;
                }
                i++;
            }
        }
    }
    if (find == false)
        return -1;
}

int strCmp(const char* str1, const char* str2)
{
    int size1 = strLen(str1);
    int size2 = strLen(str2);
    int min = 0;
    if (size1 < size2)
        min = size1;
    else if (size2 < size1)
        min = size2;
    for (int i = 0; i < min; i++)
    {
        if (str1[i] > str2[i])
            return 1;
        else if (str2[i] > str1[i])
            return -1;
    }
    if (size1 > size2)
        return 1;
    else if (size2 > size1)
        return -1;
    else
        return 0;
}

char* strToUpperDyn(const char* str)
{
    int size = strLen(str);
    char* newstr = new char[size];
    for (int i = 0; i < size; i++)
    {
        newstr[i] = str[i];
    }
    for (int i = 0; i < size; i++)
    {
        if (newstr[i] >= 97 && newstr[i] <= 122)
            newstr[i] = newstr[i] - 32;
    }
    newstr[size] = '\0';
    return newstr;
}

char* strToLowerDyn(const char* str)
{
    int size = strLen(str);
    char* newstr = new char[size];
    for (int i = 0; i < size; i++)
    {
        newstr[i] = str[i];
    }
    for (int i = 0; i < size; i++)
    {
        if (newstr[i] >= 65 && newstr[i] <= 90)
            newstr[i] = newstr[i] + 32;
    }
    newstr[size] = '\0';
    return newstr;
}