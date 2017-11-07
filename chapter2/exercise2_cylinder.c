#include <stdio.h>
#include <math.h>

//
// Created by Adam on 11/7/2017.
//

void ReadInput(double *height, double *radius) {

    printf("Input the height of the cylinder: ");
    scanf("%lf", height);

    printf("Input the radius of the cylinder: ");
    scanf("%lf", radius);

}

void ComputeResults(double height, double radius, double *surfaceArea, double *volume) {

    //compute surface area
    (*surfaceArea) = 2 * M_PI * height * radius;
    (*volume) = M_PI * height * pow(radius, 2);
}

void DisplayAnswers(double surfaceArea, double volume) {

    printf("The surface area of the cylinder is %lf\n", surfaceArea);
    printf("The volume of the cylinder is %lf\n", volume);
}

int main() {
    double height = 0;
    double radius = 0;

    double surfaceArea = 0;
    double volume = 0;

    ReadInput(&height, &radius);
    ComputeResults(height, radius, &surfaceArea, &volume);
    DisplayAnswers(surfaceArea, volume);

    return 0;
}
