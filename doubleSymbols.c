int main() {
    int n;

    // �Ѻ��ҵ���Ţ
    printf("Enter an even number: ");
    scanf("%d", &n);

    // ��Ǩ�ͺ������Ţ���
    if (n % 2 == 0) {
        // �ʴ�����ͧ���� * ��� + ��Ѻ�ѹ
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                printf("*");
            } else {
                printf("+");
            }
        }
        printf("\n");
    } else {
        // �ҡ������Ţ���
        printf("Wrong input\n");
    }

    return 0;
}
