//roy and profile photo


#include<stdio.h>

int main() {
    int n, l, w, h, i;

    scanf("%d", &l); //length of photo
    scanf("%d", &n); //number of photo
    
    for (i = 0; i < n; i++) {
        scanf("%d %d", &w, &h); //width and height of photo
        if (w < l || h < l) {
            printf("UPLOAD ANOTHER\n");
        } else {
            if (w == h) {
                printf("ACCEPTED\n");
            } else {
                printf("CROP IT\n");
            }
        }
    }

    return 0;
}
