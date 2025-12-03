// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.


#include <stdio.h>
#include <math.h>
void KiemTraSoNguyen() {
    int i = 1;
    while (i == 1)
    {
        printf("( Ban dang o chuc nang: kiem tra so nguyen )\n\n");
        double x;
        printf("Hay nhap mot so de kiem tra: ");
        scanf("%lf", &x);
        // Kiem tra so nguye
        if (x == (int)x) {
            printf("So nay la so nguyen\n");
            int n = (int)x;
            // Kt so nguyen to
            if (n < 2) {
                printf("Khong phai so nguyen to\n");
            }
            else {
                int laSoNguyenTo = 1;
                for (int i = 2; i <= (int)sqrt(n); i++) {
                    if (n % i == 0) {
                        laSoNguyenTo = 0;
                        break;
                    }
                }
                if (laSoNguyenTo)
                    printf(" So nay la so nguyen to\n");
                else
                    printf("So nay Khong phai so nguyen to\n");
            }
            // Kt so chinh pguong
            int g = (int)sqrt(n);
            if (g * g == n)
                printf("So nay la so chinh phuong.\n");
            else
                printf("So nay khong phai so chinh phuong.\n");
        }
       
        printf("ban co muon thuc hien Tiep Tuc hay khong[1-Co| khhac-Khong]");
        scanf("%d", &i);
        system("cls");

    }

        
}
void TimUocSoChungVaBoiSoChungCua2so() {
    int i = 1;
    while (i == 1)
    {
        printf("Ban dang o chuc nang: Tim Uoc So Chung Va Boi So Chung Cua 2so\n");
        int x, y;
        printf("Nhap vao 2 so nguyen x va y: ");
        scanf("%d %d", &x, &y);
        // Tìm UCLN
        int a = x, b = y;
        while (b != 0) {
            int tmp = b;
            b = a % b;
            a = tmp;
        }
        int ucln = a;
        // Tính BCNN
        int bcnn = (x * y) / ucln;
        printf("Uoc chung lon nhat cua %d va %d la: %d\n", x, y, ucln);
        printf("Boi chung nho nhat cua %d va %d la: %d\n", x, y, bcnn);
        
        printf("ban co muon thuc hien Tiep Tuc hay khong[1-Co| khhac-Khong]");
        scanf("%d", &i);
        system("cls");
    }
}
void ChuongTrinhTinhTienchoQuanKareoke() {
    int i = 1;
    while (i == 1)
    {
        printf("(Ban dang o chuc nang:  Chuong trinh tinh tien Cho Quan Kareoke)\n\n");
        int batdau, ketthuc;
        printf("Nhap gio bat dau (khung gio tu 12-23): ");
        scanf("%d", &batdau);
        printf("Nhap gio ket huc (khung gio tu 12-23): ");
        scanf("%d", &ketthuc);

        if (batdau < 12 || ketthuc > 23 || batdau >= ketthuc) {
            printf("Ban Da Nhap Sai Du Lieu!\n\n");
            printf("ban co muon thuc hien Tiep Tuc hay khong[1-Co| khhac-Khong]");
            scanf("%d", &i);
            system("cls");
            continue;
        }

        int gio = ketthuc - batdau;
        double tien = 0;

        if (gio <= 3) tien = gio * 150000;
        else tien = 3 * 150000 + (gio - 3) * 150000 * 0.7;

        if (batdau >= 14 && batdau <= 17)
            tien *= 0.9;
        printf("Tien Karaoke: %.0f VND\n\n", tien);

        printf("ban co muon thuc hien Tiep Tuc hay khong[1-Co| khhac-Khong]");
        scanf("%d", &i);
        system("cls");
    }
    
}
void TinhTienDien() {
    int i = 1;
    while (i == 1)
    {
        int kwh;
        printf("Nhap so dien su dung (kwh): ");
        scanf("%d", &kwh);
        double tien = 0;
        int bac[6] = { 50, 50, 100, 100, 100, 100000 };
        double gia[6] = { 1678, 1734, 2014, 2536, 2834, 2927 };

        for (int i = 0; i < 6 && kwh > 0; i++) {
            int sd = kwh > bac[i] ? bac[i] : kwh;
            tien += sd * gia[i];
            kwh -= sd;
        }
        printf("Tien dien la: %.0f VND\n", tien); 
        printf("Ban dang o chuc nang: TinhTienDien\n");
        printf("ban co muon thuc hien Tiep Tuc hay khong[1-Co| khhac-Khong]");
        scanf("%d", &i);
        system("cls");
    }
}
void ChucNangDoiTien() 
{
    int i = 1;
    while (i == 1)
    {
        int menhgia[] = { 500,200,100,50,20,10,5,2,1 };
        int tien;
        printf("Nhap so tien can doi: ");
        scanf("%d", &tien);
        for (int i = 0; i < 9; i++) {
            int soTo = tien / menhgia[i];
            if (soTo > 0) {
                printf("%d to menh gia %d\n", soTo, menhgia[i]);
                tien %= menhgia[i];
            }
        }
        printf("Ban dang o chuc nang: ChucNangDoiTien\n");
        printf("ban co muon thuc hien Tiep Tuc hay khong[1-Co| khhac-Khong]");
        scanf("%d", &i);
        system("cls");
    }
}
void ChucNangTinhlaiSuatVayNganHangTraGop() {
    int i = 1;
    while (i == 1)
    {
        double sotienvay;
        printf("Nhap so tien can vay: ");
        scanf("%lf", &sotienvay);
        double lai = 0.05;
        double gocThang = sotienvay / 12;
        for (int i = 1; i <= 12; i++) {
            double tienLai = sotienvay * lai;
            double phaiTra = gocThang + tienLai;
            sotienvay -= gocThang;

            printf("Thang %d: %.0f VND\n", i, phaiTra);
        }
        printf("Ban dang o chuc nang:  ChucNangTinhlaiSuatVayNganHangTraGop\n");
        printf("ban co muon thuc hien Tiep Tuc hay khong[1-Co| khhac-Khong]");
        scanf("%d", &i);
        system("cls");
    }
}
void ChuongTrinhVayTienMuaXe() {
    int i = 1;
    while (i == 1)
    {
        double phantram;
        printf("Nhap %% vay toi da (vd 80%% - la tra truoc 20%% gia tri, tra gop 80%% gia tri): ");
        scanf("%lf", &phantram);
        if (phantram >= 100 || phantram <= 0) {
            printf("Loi: phan tram vay phai lon hon 0%% va nho hon 100%% \n");
            printf("Xin moi ban nhap lai %% vay: \n");
            continue;
            
        }
        double xe = 500000000;
        double vay = xe * phantram / 100;
        double traTruoc = xe - vay;
        int thang = 24 * 12; //24 nam
        double laiThang = 0.072 / 12;
        double gocThang = vay / thang;
        printf("Tra truoc: %.0f VND\n", traTruoc);
        printf("Tra 12 thang dau:\n");

        for (int i = 1; i <= 12; i++) {
            double tienLai = vay * laiThang;
            double phaiTra = gocThang + tienLai;
            vay -= gocThang;
            printf("Thang %d: %.0f VND\n", i, phaiTra);
        }
        printf("Ban dang o chuc nang: ChuongTrinhVayTienMuaXe\n");
        printf("ban co muon thuc hien Tiep Tuc hay khong[1-Co| khhac-Khong]");
        scanf("%d", &i);
        system("cls");
    }
}
void SapXepThongTinSinhVien() {
    int i = 1;
    while (i == 1)
    {
       
        char hoTen[100][50];   
        float diem[100];       
        char hocLuc[100][20];  
        int n;

        printf("Nhap so luong sinh vien: ");
        scanf("%d", &n);
        getchar();
        for (int i = 0; i < n; i++) {
            printf("\nNhap thong tin sinh vien thu %d:\n", i + 1);

            printf("Ho va ten: ");
            fgets(hoTen[i], sizeof(hoTen[i]), stdin);
            hoTen[i][strcspn(hoTen[i], "\n")] = 0; 

            printf("Diem: ");
            scanf("%f", &diem[i]);
            getchar(); 

            if (diem[i] >= 9.0)
                strcpy(hocLuc[i], "Xuat sac");
            else if (diem[i] >= 8.0)
                strcpy(hocLuc[i], "Gioi");
            else if (diem[i] >= 6.5)
                strcpy(hocLuc[i], "Kha");
            else if (diem[i] >= 5.0)
                strcpy(hocLuc[i], "Trung binh");
            else
                strcpy(hocLuc[i], "Yeu");
        }

        // sap xep giam dan
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (diem[i] < diem[j]) {
                    // doi diem
                    float tempDiem = diem[i];
                    diem[i] = diem[j];
                    diem[j] = tempDiem;

                    // doi ten
                    char tempTen[50];
                    strcpy(tempTen, hoTen[i]);
                    strcpy(hoTen[i], hoTen[j]);
                    strcpy(hoTen[j], tempTen);

                    // doi hoc luc
                    char tempHocLuc[20];
                    strcpy(tempHocLuc, hocLuc[i]);
                    strcpy(hocLuc[i], hocLuc[j]);
                    strcpy(hocLuc[j], tempHocLuc);
                }
            }
        }

        // danh sach
        printf("\n%-25s %-6s %-12s\n", "Ho va ten", "Diem", "Hoc luc");
        for (int i = 0; i < n; i++) {
            printf("%-25s %-6.2f %-12s\n", hoTen[i], diem[i], hocLuc[i]);
        }
    }
        return 0;
        printf("Ban dang o chuc nang: SapXepThongTinSinhVien\n");
        printf("ban co muon thuc hien Tiep Tuc hay khong[1-Co| khhac-Khong]");
        scanf("%d", &i);
        system("cls");
    
}
void XayDungGameFPOLY_LOTT() {
    int i = 1;
    while (i == 1)
    {
        int a, b;
        printf("Nhap 2 so tu 1-15: ");
        scanf("%d %d", &a, &b);

        srand(time(NULL));
        int r1 = rand() % 15 + 1;
        int r2 = rand() % 15 + 1;

        printf("So cua trung thuong: %d - %d\n", r1, r2);

        int trung = (a == r1 || a == r2) + (b == r1 || b == r2);

        if (trung == 2) printf("Chuc mung! Ban da trung giai nhat!\n");
        else if (trung == 1) printf("Chuc mung! Ban da trung giai nhi!\n");
        else printf("Chuc ban may man lan sau!\n");
        printf("Ban dang o chuc nang: GameFPOLY_LOTT\n");
        printf("ban co muon thuc hien Tiep Tuc hay khong[1-Co| khhac-Khong]");
        scanf("%d", &i);
        system("cls");
    }
}
void tinhtoanphanso() {
    int i = 1;
    while (i == 1)
    {
        int tu1, mau1, tu2, mau2;
        printf("Nhap phan so thu nhat (tu/mau): ");
        scanf("%d/%d", &tu1, &mau1);
        printf("Nhap phan so thu hai (tu/mau): ");
        scanf("%d/%d", &tu2, &mau2);
        if (mau1 == 0 || mau2 == 0) {
            printf("Mau phai khac 0!\n");
            return;
        }
        // tinh uoc chung lon nhay 
        int a, b, tmp;
        // Tong
        a = tu1 * mau2 + tu2 * mau1;
        b = mau1 * mau2;
        int tu = a, mau = b;
        while (b != 0) {
            tmp = b;
            b = a % b;
            a = tmp;
        }
        tu /= a; mau /= a;
        printf("Tong: %d/%d\n", tu, mau);
        // hieu
        a = tu1 * mau2 - tu2 * mau1;
        b = mau1 * mau2;
        tu = a; mau = b;
        while (b != 0) {
            tmp = b;
            b = a % b;
            a = tmp;
        }
        tu /= a; mau /= a;
        printf("Hieu: %d/%d\n", tu, mau);
        // tich
        a = tu1 * tu2;
        b = mau1 * mau2;
        tu = a; mau = b;
        while (b != 0) {
            tmp = b;
            b = a % b;
            a = tmp;
        }
        tu /= a; mau /= a;
        printf("Tich: %d/%d\n", tu, mau);
        // tuong
        if (tu2 == 0) {
            printf("Khong the tinh thuong do chia cho 0!\n");
        }
        else {
            a = tu1 * mau2;
            b = mau1 * tu2;
            tu = a; mau = b;
            while (b != 0) {
                tmp = b;
                b = a % b;
                a = tmp;
            }
            tu /= a; mau /= a;
            printf("Thuong: %d/%d\n", tu, mau);
        }
        printf("Ban dang o chuc nang: tinhtoanphanso\n");
        printf("ban co muon thuc hien Tiep Tuc hay khong[1-Co| khhac-Khong]");
        scanf("%d", &i);
        system("cls");
    }
}
int main()
{
    int chon;
    do
    {

        printf("MENU CHUC NANG LAM VIEC\n");
        printf("1. Kiem Tra So Nguyen\n"); 
        printf("2. Tim  Uoc Chung Va Boi So Cua 2 So\n"); 
        printf("3. Tinh Tien Cho Quan Kareoke\n"); 
        printf("4. Tinh Tien Dien\n"); 
        printf("5.Chuc Nang Doi Tien\n"); 
        printf("6. Tinh Lai Suat Vay Ngan Hang Tra Gop\n"); 
        printf("7. Chuong Trinh Vay Mua Xe\n"); 
        printf("8. Sap Xep Thong Tin Sinh Vien\n"); 
        printf("9. Game FPOLY_LOTT\n"); 
        printf("10. Tinh Toan Phan So\n"); 
        printf("0. thoat\n"); 
        printf("Xin Moi Ban Chon Chuc Nang Cho Truong Trinh: ");
        scanf("%d", &chon);
        system("cls");
        if (chon == 0) {
            printf("Thoat chuong trinh.\n");
            break;
        }

        switch (chon) {

        case 1:
            KiemTraSoNguyen();


            break;

        case 2:
            TimUocSoChungVaBoiSoChungCua2so();

            break;

        case 3:
            ChuongTrinhTinhTienchoQuanKareoke();

            break;

        case 4:
            TinhTienDien();

            break;

        case 5:
            ChucNangDoiTien();

            break;

        case 6:
            ChucNangTinhlaiSuatVayNganHangTraGop();

            break;

        case 7:
            ChuongTrinhVayTienMuaXe();

            break;

        case 8:
            SapXepThongTinSinhVien();

            break;

        case 9:
            XayDungGameFPOLY_LOTT();

            break;
        case 10:
            tinhtoanphanso();

            break;

        case 0:
            printf("Dang thoat chuong trinh...\n");
            break;
        default:
            printf("Lua chon khong hop le, vui long chon trong menu (0–10).\n");
        }


    } while (1);
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