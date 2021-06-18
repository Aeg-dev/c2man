#include <stdio.h>
int main() {
#ifdef __GNUC__
#ifdef __VERSION__
        printf("%s\n", __VERSION__);
#else
        printf("%s\n", "1");
#endif
#endif
        exit(0);
}