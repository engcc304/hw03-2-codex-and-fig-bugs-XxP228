// TODO: #9 Fix bug and arrange code in CODEX pattern.
#include <stdio.h>
int main()
{
    float a = 3, b = 3;
    bool _1 = 0;
    int i = 0;
    printf("%d ", _1);
   
    if (_1 != 0)  {
        printf("ok ");
    } else {
        while (i <= 5)
        {
            printf(" not-okey-%d ", ++i );
        }

        for (i = 3; i < 10; i += 1) {
            if (i % 2 == (!_1 ? 1 : 2)) {
                printf( "see see");
            } else {
                printf("haha");
            }
        }
        
    }
    return 0 ;
}