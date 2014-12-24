 #include <stdio.h>

    int main()
    {
        int kases;
        scanf("%d", &kases);
        int kase;
        for(kase = 1; kase <= kases; kase++) {
            int  N;
            scanf("%d", &N);
            int result[1000];
            result[0] = 1;
            int length = 1, i, j, temp, carry = 0;
            for(i = 2; i <= N; i++) {
                for(j = 0; j < length; j++) {
                    temp = carry + result[j] * i;
                    carry = temp / 10;
                    result[j] = temp % 10;
                }
                while(carry) {
                    result[j] = carry % 10;
                    carry /= 10;
                    j++;
                }
                length = j;
            }
            for(int i = length - 1; i >= 0; i--){
                printf("%d", result[i]);
            }
            printf("\n");
        }
        return 0;
    }
