#include <stdio.h>

int main() {
    printf("TIME :%s\n",__TIME__);
    printf("DATE :%s\n",__DATE__);
    printf("LINE :%d\n",__LINE__);
    printf("FILE :%s\n",__FILE__);
    printf("STDC :%d\n",__STDC__);
    return 0;
}
