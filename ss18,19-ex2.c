#include <stdio.h>

struct SinhVien {
    char name[50];
    int age;
    char phoneNumber[15];
};
int main() {
    struct SinhVien sv;
    printf("Nhap thong tin sinh vien:\n");
    printf("Nhap ho ten: ");
    fgets(sv.name, sizeof(sv.name), stdin); 
    sv.name[strcspn(sv.name, "\n")] = 0;    
    printf("Nhap tuoi: ");
    scanf("%d", &sv.age); 
    printf("Nhap so dien thoai: ");
    scanf("%s", sv.phoneNumber); 
    printf("\nThong tin sinh vien vua nhap:\n");
    printf("Ho ten: %s\n", sv.name);
    printf("Tuoi: %d\n", sv.age);
    printf("So dien thoai: %s\n", sv.phoneNumber);
    return 0;
}

