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
    int currentSize = 5;  
    struct SinhVien newStudent;
    printf("Nhap thong tin sinh vien moi:\n");
    newStudent.id = currentSize + 1;
    printf("Nhap ten: ");
    scanf(" %[^\n]", newStudent.name);
    printf("Nhap tuoi: ");
    scanf("%d", &newStudent.age);
    printf("Nhap so dien thoai: ");
    scanf(" %[^\n]", newStudent.phoneNumber);
    sinhViens[currentSize] = newStudent;
    currentSize++;
    printf("\nDanh sach sinh vien sau khi them moi:\n");
    for (int i = 0; i < currentSize; i++) {
        printf("ID: %d, Ten: %s, Tuoi: %d, So dien thoai: %s\n",
               sinhViens[i].id, sinhViens[i].name, sinhViens[i].age, sinhViens[i].phoneNumber);
    }
    return 0;
}

