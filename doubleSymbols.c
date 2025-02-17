int main() {
    int n;

    // รับค่าตัวเลข
    printf("Enter an even number: ");
    scanf("%d", &n);

    // ตรวจสอบว่าเป็นเลขคู่
    if (n % 2 == 0) {
        // แสดงเครื่องหมาย * และ + สลับกัน
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                printf("*");
            } else {
                printf("+");
            }
        }
        printf("\n");
    } else {
        // หากไม่เป็นเลขคู่
        printf("Wrong input\n");
    }

    return 0;
}
