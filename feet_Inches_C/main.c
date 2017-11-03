/* This is a first C Program */
#import <stdio.h>

void main()
{
    int feet, inches; double HinMetres;
    double converter(int,int);
    printf("Input feet: ");
    scanf("%d", &feet);
    printf("Input inches: ");
    scanf("%d", &inches);
    HinMetres = converter(feet, inches);
    printf("your height in metres is %f", HinMetres/100);


}

double converter(int feet, int inches)
{
    return (inches + (feet * 12)) * 2.54;
}