#include <stdio.h>
#include <math.h>
#define PI 3.14159265 
int main() {
    int i;
    int samples = 50;       // number of samples
    float Fs = 100.0;        // sampling frequency (Hz)
    float f = 1.0;          // signal frequency (Hz)
    float t, x;

    for(i = 0; i < samples; i++) {
        t = i / Fs;         // time at sample i
        x = sin(2 * PI * f * t);  // sine wave value
        printf("Sample %d: time=%.2f, value=%.2f\n", i, t, x);
    }

    return 0;
}