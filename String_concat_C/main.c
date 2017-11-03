#include <stdio.h>
#include <string.h>


int main() {
    const int LENG = 31;
    char string1[LENG], stringTemp[LENG], combString[(LENG*2)];
    size_t stringLen1, stringLen2, combStringLen;
    printf("please input some text no more than 30 characters long: ");
    scanf("%[a-zA-Z ]", &string1[0]);
    stringLen1 = strlen(string1);
    strcpy(combString,string1);
    printf("please input some more text no more than 30 characters long: ");
    scanf(" %[a-zA-Z ]", &stringTemp[0]);
    stringLen2 = strlen(stringTemp);
    printf("the length of the string %s is : %d ", string1, (int)stringLen1);
    printf("the length of the string %s is : %d ", stringTemp, (int)stringLen2);
    strcat(combString,stringTemp);
    combStringLen = strlen(combString);
    printf("the length of the combined string %s is %d ", combString, (int)combStringLen);

    return 0;
}