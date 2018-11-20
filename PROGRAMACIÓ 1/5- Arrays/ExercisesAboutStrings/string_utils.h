#pragma once

// NOTE 1: Here I use the * symbol to pass the strings, but parameters
//         could also be passed array-like, for example:
//         unsigned int stringLength(char str[])

// NOTE 2: I use the keyword const to indicate strings that are not going
//         to be modified. Only in the case of the function stringCopy,
//         the destination string strDest will be modified, and for that
//         reason it does not have the const modifier.

unsigned int stringLength(const char *str);

int areEquals(const char *str1, const char *str2);

int areEqualsReverse(const char *str1, const char *str2);

int containsChar(const char *str, char c);

void stringCopy(const char *strOrig, char *strDest);
