int main() {
    int A, B, V;
    (void)scanf("%d %d %d", &A, &B, &V);

    printf("%d", (V - B - 1) / (A - B) + 1);
}