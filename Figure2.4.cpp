#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
    for (size_t i = 0; i < len; i++) {
        printf("%.2x ", start[i]);
    }
    printf("\n");
};

void show_int(int x) {
    show_bytes((byte_pointer) &x, sizeof(int));
};

void show_float(float x) {
    show_bytes((byte_pointer) &x, sizeof(float));
};

void show_pointer(void *x) {
    show_bytes((byte_pointer) &x, sizeof(void *));
};

int main() {
    int y = 20213;
    byte_pointer x = (byte_pointer) &y;  // Ép kiểu đúng

    show_float(2.5f);
    show_int(2);
    show_pointer(&x);
    show_bytes(x, sizeof(int));  // Thêm tham số len đúng

    return 0;
}
