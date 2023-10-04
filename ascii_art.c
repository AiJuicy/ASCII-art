#include <stdio.h>
#include <math.h>
#include <string.h> 

int main() {
    float A = 0, B = 0, i, j, z[1760];
    char b[1760];
    printf("\x1b[23");

    for (int k = 0; 1760 > k; k++) {
        b[k] = k % 80 ? 0 : 10;
    }

    while (1) {
        memset(b, 32, 1760);
        memset(z, 0, 7040);

        for (j = 0; 6.28 > j; j += 0.07) {
            for (i = 0; 6.28 > i; i += 0.02) {
                float c = sin(i), d = cos(j), e = sin(A), f = sin(j), g = cos(A), h = d + 2, D = 1 / (c * h * e + f * g + 5), l = cos(i), m = cos(B), n = sin(B), t = c * h * g - f * e;
                int X = 40 + 30 * D * (l * h * m - t * n), Y = 12 + 15 * D * (l * h * n + t * m), o = X + 80 * Y, N = 8 * ((f * e - c * d * g) * m - c * d * e - f * g - l * d * n);
                if (0 <= Y && Y < 22 && 0 <= X && X < 80 && D > z[o]) {
                    z[o] = D;
                    b[o] = ".,-~:;=!*#$@"[N > 0 ? N : 0];
                }
            }
        }

        printf("\x1b[H");

        // Print the additional text with correct formatting
        printf("░█▀▀█ ▒█▀▀▀█ ▒█▀▀█ ▀█▀ ▀█▀\n");
        printf("▒█▄▄█ ░▀▀▀▄▄ ▒█░░░ ▒█░ ▒█░\n");
        printf("▒█░▒█ ▒█▄▄▄█ ▒█▄▄█ ▄█▄ ▄█▄\n");
        printf("\n");
        printf("«Actor Ai Juicy Victor Ile» (YouTube https://youtube.com/@AiJuicy_?si=AnNBndnh_Db4GtBz )\n");

        for (int k = 0; 1760 > k; k++) {
            putchar(k % 80 ? b[k] : 10);
        }

        A += 0.04;
        B += 0.02;
    }

    return 0;
}
