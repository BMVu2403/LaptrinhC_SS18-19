#include <stdio.h>

struct SinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};
int main() {
    struct SinhVien sinhViens[50] = {
        {1, "Nguyen Van A", 20, "0123456789"},
        {2, "Tran Thi B", 21, "0987654321"},
        {3, "Le Van C", 22, "0345678912"},
        {4, "Pham Thi D", 23, "0765432198"},
        {5, "Hoang Van E", 19, "0891234567"}
    };
    int searchId, found = 0;
    printf("Nhap ID cua sinh vien can sua: ");
    scanf("%d", &searchId);
    for (int i = 0; i < 5; i++) {
        if (sinhViens[i].id == searchId) {
            found = 1;
            printf("Nhap ten moi: ");
            scanf(" %[^\n]", sinhViens[i].name);
            printf("Nhap tuoi moi: ");
            scanf("%d", &sinhViens[i].age);
            break;
        }
    }
    if (!found) {
        printf("Khong tim thay sinh vien co ID = %d\n", searchId);
    } else {
        printf("\nThong tin tat ca sinh vien:\n");
        for (int i = 0; i < 5; i++) {
            printf("ID: %d, Ten: %s, Tuoi: %d, So dien thoai: %s\n",
                   sinhViens[i].id, sinhViens[i].name, sinhViens[i].age, sinhViens[i].phoneNumber);
        }
    }
    return 0;
}

