
int main() {
    char N[100];
    int B, num, total = 0;

    scanf("%s %d", N, &B);

    int len = strlen(N);

    for (int i = 0; i < len; i++) {
        if ('0' <= N[i] && N[i] <= '9') {
            num = N[i] - '0';
        }
        else {
            num = N[i] - 'A' + 10;
        }
        total = total * B + num;
    }

    printf("%d", total);
}