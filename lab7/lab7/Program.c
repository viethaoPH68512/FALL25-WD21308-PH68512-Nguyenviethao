// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include <string.h>
void xacdinhnguyenamvaphuam() {
    char s[100];
    printf("Xin moi ban nhap vao chuoi: ");
    fgets(s, sizeof(s), stdin);
    int i = 0;
    int n = 0;
    int p = 0;
    while (s[i++] != '\0') {
        if (s[i] == 'a' || s[i] == 'i' || s[i] == 'e' || s[i] == 'u' || s[i] == 'o' || s[i] == 'u')
            n++;
        else
            p++;


    }
    printf("chuoi '%s' so chua: %d nguyen am va %d phu am", s, n, p);
    return 0;
}
void dangnhapbanguservapass() {
    char userSys[] = "admin";
    int passSys = 12345;
    char user[100];
    int pass;
    printf("Ten nguoi dung: \n");
    scanf("%s", user);
    printf("Mat khau nguoi dung: \n");
    scanf("%d", &pass);
    if (strcmp(user, userSys) == 0 && pass == passSys) {
        printf("Dang nhap thanh cong");

    }
    else {
        printf(" Dang nhap that bai");
    }

    return 0;
}
void sapxepchuoitheochu() {
    char s[5][20];
    int i, j;
    char temp[20];
    printf("Nhap 5 chuoi:\n");
    for (i = 0; i < 5; i++) {
        printf("Chuoi %d: ", i + 1);
        scanf("%s", s[i]);
    }
    for (i = 1; i < 5; i++) {
        for (j = 1; j < 5; j++) {
            if (strcmp(s[j - 1], s[j]) > 0) {
                strcpy(temp, s[j - 1]);
                strcpy(s[j - 1], s[j]);
                strcpy(s[j], temp);
            }
        }
    }
    printf("\nCac chuoi sau khi sap xep:\n");
    for (i = 0; i < 5; i++) {
        printf("%s\n", s[i]);
    }

    return 0;
}
int main()
{
    struct Sinhvien {
        char mssv[50];
        char tensv[50];
        char nganhhoc[50];
        float diemtb;
    }
    mangsv[50];
    printf("moi nhap sinh vien: ");
    int i, n;
    printf("nhap so sinh vien moi them: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("\nNhap thong tin sinh vien thu %d:\n", i + 1);
        printf("ma sinh vien: ");
        scanf("%s", mangsv[i].mssv);
        printf("Ten SV: ");
        scanf(" %[^\n]%*c", mangsv[i].tensv);
        printf("Nganh hoc: ");
        scanf(" %[^\n]%*c", mangsv[i].nganhhoc);
        printf("Diem TB: ");
        scanf("%f", &mangsv[i].diemtb);
    }
    printf("\nThong tin sinh vien vua nhap:\n");
    for (i = 0; i < n; i++) {
        printf("\nSinh vien thu %d:\n", i + 1);
        printf("MSSV: %s\n", mangsv[i].mssv);
        printf("Ten SV: %s\n", mangsv[i].tensv);
        printf("Nganh hoc: %s\n", mangsv[i].nganhhoc);
        printf("Diem TB: %.2f\n", mangsv[i].diemtb);
        break;
    }

    return 0;
   
}


// Debug/Run chuong trinh: bam "F5" hoac "Debug > Start Debugging" tren menu

// Danh cho nguoi moi bat dau:
//   1. Dung "Solution Explorer window" de them/quan ly cac files
//   2. Dung "Output window" de kiem tra "build output" va "cac thong bao khac"
//   3. Dung "Error List window" de xem loi
//   4. Chon "Project > Add New Item" de tao moi file code,
//      hoac "Project > Add Existing Item" de them file da ton tai vao project nay.
//   5. Sau nay, de mo lai project nay,
//      chon "File > Open > Project" va chon file *.sln
//      Co the xem thu muc project, noi luu file *.sln bang cach
//      bam phim chuot phai vao "Solution" > chon "Open Folder in File Explorer"

// GV: AnhTT184