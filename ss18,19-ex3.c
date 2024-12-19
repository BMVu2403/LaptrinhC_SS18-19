#include <stdio.h>

struct SinhVien {
    char name[50];
    int age;
    char phoneNumber[15];
};
int main() {
    struct SinhVien sinhViens[5]; 
    for (int i = 0; i < 5; i++) {
        printf("Nhap thong tin sinh vien thu %d:\n", i + 1);
        printf("Ho ten: ");
        scanf(" %[^\n]", sinhViens[i].name); 
        printf("Tuoi: ");
        scanf("%d", &sinhViens[i].age);
        printf("So dien thoai: ");
        scanf("%s", sinhViens[i].phoneNumber);
    }
    printf("\nThong tin cua tat ca sinh vien:\n");
    for (int i = 0; i < 5; i++) {
        printf("Sinh vien thu %d: Ho ten: %s, Tuoi: %d, So dien thoai: %s\n", 
               i + 1, sinhViens[i].name, sinhViens[i].age, sinhViens[i].phoneNumber);
    }
    return 0;
}

