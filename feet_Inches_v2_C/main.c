/* This is a first C Program */
#include <stdio.h>
#include "inchConverter.h"

int main()
{
    int feet, inches; double HinMetres;
    while(1){
        printf("Input feet: ");
        scanf("%d", &feet);
        if(feet < 0){
            break;
        }
        printf("Input inches: ");
        scanf("%d", &inches);
        HinMetres = converter(feet, inches);
        printf("your height in metres is %f\n", HinMetres);
    }

    return 0;
}
double converter(int feet, int inches)
{
    return (inches + (feet * 12)) * 0.0254;
}