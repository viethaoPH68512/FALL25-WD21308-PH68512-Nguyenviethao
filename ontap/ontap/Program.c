// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
struct thongtinthucung{
	char ma[30];
	char ten[30];
	int namsinh;
};
void thongtinthucung() {

		struct thongtinthucung thucung[3];
		int namhientai = 2025;
		for (int i = 0; i < 3; i++) {
			printf("nhap thong tin \n");
			printf("ma thu cung: ");
			scanf("%s", &thucung[i].ma);
			printf("ten thu cung: ");
			scanf("%s", &thucung[i].ten);
			printf("nam sinh: ");
			scanf("%s", &thucung[i].namsinh);

		}
		for (int i = 0; i < 3; i++) {
			printf("Ma: %s | Ten: %s | Nam sinh: %d\n",
				thucung[i].ma, thucung[i].ten, thucung[i].namsinh);
		}
		for (int i = 0; i < 3; i++) {
			int tuoi = namhientai - thucung[i].namsinh;
			printf("Thu cung %s (ma %s) co tuoi: %d\n",
				thucung[i].ten, thucung[i].ma, tuoi);
		}
	
}
void tinhtong() {
		int n;
		int tongsole = 0;
			printf("nhap mot so nguyen duong(n>3): ");
			scanf("%d", &n);
			getchar();
			printf("tong cac so le tu 1 den %d la\n");
			for (int i = 1; i <= n; i+=2) {
				tongsole += i;
			}
			printf("tong cac so tu 1 den %d la: %d\n", n, tongsole);

}
void thongtincuahang() {
	
	int soLuong;

	printf("Nhap so luong thu cung: ");
	scanf("%d", &soLuong);
	if (soLuong <= 0) {
		printf("So luong thu cung phai lon hon 0!\n");
		return;
	}
	float* canNang = (float*)malloc(soLuong * sizeof(float));
	if (canNang == NULL) {
		printf("Khong the cap phat bo nho!\n");
		return;
	}
	float tong = 0.0;
	float nhoNhat = 999999.0;
	printf("\nNhap can nang cua %d thu cung:\n", soLuong);
	for (int i = 0; i < soLuong; i++) {
		printf("Thu cung %d can nang: ", i + 1);
		scanf("%f", &canNang[i]);
		tong += canNang[i];
		if (canNang[i] < nhoNhat) {
			nhoNhat = canNang[i];
		}
	}
	float trungBinh = tong / soLuong;
	int demThapHonTB = 0;
	for (int i = 0; i < soLuong; i++) {
		if (canNang[i] < trungBinh) {
			demThapHonTB++;
		}
	}
	printf("\n=== KET QUA ===\n");
	printf("Can nang trung binh: %.2f\n", trungBinh);
	printf("Can nang thap nhat: %.2f\n", nhoNhat);
	printf("So thu cung co can nang thap hon trung binh: %d\n", demThapHonTB);
	free(canNang);
}
	

void lapChucNang(int chonChucNang)
{
	int tiepTuc = 1;
	while (tiepTuc == 1)
	{
		switch (chonChucNang)
		{
		case 1:
			thongtinthucung();
			break;
		case 2:
			tinhtong();
			break;
		case 3:
			thongtincuahang();
			break;

		case 0:
			return;
		default:
			printf("Hay chon lai [0-2]");
			break;
		}

		printf("\n");
		printf("Tiep tuc chuc nag khong [1=Co | khac=Khong]: ");
		scanf("%d", &tiepTuc);
		system("cls");
	}
}

int main()
{
	int chonChucNang;
	do
	{
		printf("/Menu");
		printf("\n");
		printf("1. thong tin thu cung");
		printf("\n");
		printf("2. tinh tong");
		printf("\n");
		printf("3. thong tin cua hang");
		printf("\n");
		printf("Hay chon CN [0-3]: ");
		scanf("%d", &chonChucNang);
		lapChucNang(chonChucNang);
	} while (chonChucNang != 0);
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