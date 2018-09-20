#include <stdio.h>
int main()  //111 with no return 0;
{
    int t, s = 0;
    scanf("%d", &t);
    while (t--){
        int v;
        scanf("%d", &v);
        if (v > 0)
            s += v;
    }
    printf("%d", s);
    return 0;
}