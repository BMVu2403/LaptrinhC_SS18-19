#include <stdio.h>

struct SinhVien {
    int id;          
    char name[50];   
    int age;         
    char phoneNumber[15]; 
};
int main() {
    struct SinhVien sinhViens[50]; 
    int n = 5; 
    for (int i = 0; i < n; i++) {
        sinhViens[i].id = i + 1; 
        printf("Nhap thong tin sinh vien %d:\n", sinhViens[i].id);
        printf("Ho ten: ");
        scanf(" %[^\n]", sinhViens[i].name);
        printf("Tuoi: ");
        scanf("%d", &sinhViens[i].age);
        printf("So dien thoai: ");
        scanf("%s", sinhViens[i].phoneNumber);
    }
    printf("\nThong tin sinh vien:\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d, Ten: %s, Tuoi: %d, So dien thoai: %s\n",
               sinhViens[i].id, sinhViens[i].name, sinhViens[i].age, sinhViens[i].phoneNumber);
    }
    return 0;
}

