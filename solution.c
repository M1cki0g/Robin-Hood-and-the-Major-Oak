#include <stdio.h>

void work() {
    int n, k;
    scanf("%d %d", &n, &k);
    
    if ((((n + 1) * n / 2) - ((n - k) * (n - k + 1) / 2)) % 2) {
        printf("NO\n");
    } else {
        printf("YES\n");
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        work();
    }
    return 0;
}
