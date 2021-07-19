#include <iostream>
using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

int main() {
    O;
    char buf[1001] = {0};
    int a = 0, b = 0;

    scanf("%s", buf);
    while (buf[++a]);
    scanf("%s", buf);
    while (buf[++b]);

    a >= b ? printf("go\n") : printf("no\n");

    return 0;
}
