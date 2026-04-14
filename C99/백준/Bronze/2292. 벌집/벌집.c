int main() {
    int N;
    int num = 0, cnt = 0;
    (void)scanf("%d", &N);

    if (N == 1) cnt = -1;
    while (N > 1) {
        num += 1;
        if (N - num * 6 > 1) {
            N = N - 6 * num;
            cnt += 1;
        }
        else break;
    }

    printf("%d", cnt + 2);
}