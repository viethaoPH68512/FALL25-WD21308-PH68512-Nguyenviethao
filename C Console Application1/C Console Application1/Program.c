// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include <string.h>
struct monhoc {
    char ten[50];
    char ma[30];
    int tc;

};
void thongtinmonhoc() {
    struct monhoc mh[3];
    int tonghocphi = 0;
    for (int i = 0; i < 3; i++) {
        printf("nhap mon hoc %d\n", i + 1);

        printf("ten mon hoc: ");
        fgets(mh[i].ten, sizeof(mh[i].ten), stdin);
        mh[i].ten[strcspn(mh[i].ten, "\n")] = '\0';

        printf("ma mon hoc: ");
        fgets(mh[i].ma, sizeof(mh[i].ma), stdin);
        mh[i].ma[strcspn(mh[i].ma, "\n")] = '\0';

        printf("so tin chi: ");
        scanf("%d", &mh[i].tc);
        getchar();
        tonghocphi += mh[i].tc * 500000;
    }
    printf("Danh sach thong tin mon hoc\n");
    for (int i = 0; i < 3; i++) {


        printf("ten mon hoc: %s\n", mh[i].ten);
        printf("ma mon hoc: %s\n", mh[i].ma);
        printf("so tin chi: %d\n", mh[i].tc);
    }
    printf("tong hoc phi : %d VND\n", tonghocphi);

}
void tinhsole() {
    int n;
    int tong = 0;
    do {
        printf("nhap mot so nguyen duong: ");
        scanf("%d", &n);
    } while (n <= 0);
    for (int i = 1; i <= n; i++) {

        tong += i;



    }
    printf("tong cac so tu 1 den %d la: %d\n", n, tong);
    if (n % 2 == 0) {
        printf("%d la so chan\n", n);

    }
    else {
        printf("%d la so le\n", n);
    }


}
void thongtindiemlab() {

}

void lapchucnang(int chonchucnang) {
    int tieptuc = 1;
    while (tieptuc == 1) {
        switch (chonchucnang) {
        case 1:
            thongtinmonhoc();
            break;
        case 2:
            tinhsole();
            break;
        case 3:
            thongtindiemlab();
            break;
        case 0:
            printf("thoat chuong trinh");
            return;
        default:
            printf("vui long chon cac chuc nang tu 0-3");
            break;

        }
        printf("\n");
        printf("ban co muon tiep tuc chuc nang hay khong: ");
        scanf("%d", &tieptuc);
        system("cls");

    }
}
int main()
{
    int chonchucnang;
    do {
        printf("MENU chuc nang\n");
        printf("thong tin mon hoc\n");
        printf("tinh tong so le\n");
        printf("thong tin diem lab\n");
        printf("0. thoat chuc nang\n");
        printf("moi ban nhap chuc nang muon thuc hien: ");
        scanf("%d", &chonchucnang);
        getchar();
        lapchucnang(chonchucnang);


    } while (chonchucnang != 0);
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