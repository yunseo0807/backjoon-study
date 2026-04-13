int main(void) {
    int N;
    int B;
    int num = 0;
    char arr[100];
    int n = 0;

    (void)scanf("%d %d", &N, &B);

    while (N > 0) {
        num = N % B;
        if (num > 9) {
            num = num - 10 + 'A';
        }
        else {
            num = num + '0';
        }
        arr[n++] = num;
        N = N / B;

    }

    for (int i = n - 1; i >= 0; i--) {
        printf("%c", arr[i]);
    }

    return 0;
}