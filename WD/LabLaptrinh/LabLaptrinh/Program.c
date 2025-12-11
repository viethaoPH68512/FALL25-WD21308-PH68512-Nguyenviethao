// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
void TinhTrungBinhTongSoChiaHetCho3() {
	int n;
	int i;
	printf("Hay nhap so phan tu cua mang: ");
	scanf("%d", &n);
	int* mang = (int*)malloc(n * sizeof(int));
	for (i = 0; i < n; i++) {
		printf("Hay nhap du lieu vao trong mang: ");
		scanf("&d", &mang[n]);

	}
	float tong = 0;
	float tb;
	int count = 0;
	//duyet mang
	for (i = 0; i < n; i++) {
		if (mang[i] % 3 == 0) {
			tong += mang[i];
			count++;
		}
	}
	if (count == 0) {
		printf("mang khong co so nao chia het cho 3 \n");

	}
	else {
		tb = tong / count;
		printf("trung binh cac so chia het cho 3 trong mang la : %.2f\n", tb);

	}
	return 0;
}
void sapxepmang1chieu() {
	int integerArray[100];
	int tmp;//temperary
	int i;
	int length;
	printf("nhap so luong phan tu mang: ");
	scanf_s("%d", &length);
	//scanf_s neu bi loi
	printf("nhap du lieu mang %d phan tu\n", length);
	for (i = 0; i < length; i++) {
		printf("mang[%d] = ", i);
		scanf_s("%d", integerArray[i]);
	}
	printf("nhap du lieu mang %d phan tu\n", length);
	for (i = 0; i < length - 1; i++) {
		if (integerArray[i] > integerArray[i + 1]) {
			tmp = integerArray[i];
			integerArray[i + 1] = integerArray[i];
			integerArray[i] = tmp;
			i = -1;
		}
	}

	printf("nhap du lieu mang %d phan tu\n", length);
	for (i = 0; i < length - 1; i++) {
		if (integerArray[i] > integerArray[i + 1]) {
			tmp = integerArray[i];
			integerArray[i + 1] = integerArray[i];
			integerArray[i] = tmp;
			i = -1;
		}
	}

	printf("nhap du lieu mang %d phan tu\n", length);
	for (i = 0; i < length - 1; i++) {
		if (integerArray[i] > integerArray[i + 1]) {
			tmp = integerArray[i];
			integerArray[i + 1] = integerArray[i];
			integerArray[i] = tmp;
			i = -1;
		}
	}

}
void lapChucNang(int chonChucNang)
{
	int tiepTuc = 1;
	while (tiepTuc == 1)
	{
		switch (chonChucNang)
		{
		case 1:
			TinhTrungBinhTongSoChiaHetCho3();
			break;
		case 2:
			sapxepmang1chieu();
			break;
		case 3:
			tinhhocluc();
			break;
		case 0:
			return;
		default:
			printf("Hay chon lai [0-3]");
			break;
		}

		printf("\n");
		printf("Tiep tuc CN nay? [1=Co | 0=Khong]: ");
		scanf("%d", &tiepTuc);
		system("cls");
	}
}
void tinhhocluc() {
	int diem;

	do {
		printf("Nhap diem cua sinh vien (0-10): ");
		scanf("%d", &diem);

		if (diem < 0 || diem > 10) {
			printf("Loi! Vui long nhap diem trong khoang 0-10.\n");
		}
	} while (diem < 0 || diem > 10);

	printf("Hoc luc: ");

	if (diem >= 9)
		printf("Xuat sac\n");
	else if (diem >= 8)
		printf("Gioi\n");
	else if (diem >= 6.5)
		printf("Kha\n");
	else if (diem >= 5)
		printf("Trung binh\n");
	else if (diem >= 3.5)
		printf("Yeu\n");
	else
		printf("Kem\n");
}
int main()
{
	int chonChucNang;
	do
	{
		printf("Menu");
		printf("\n");
		printf("1. TinhTrungBinhTongSoChiaHetCho3");
		printf("\n");
		printf("2. sap xeo mang 1 chieu thu tu tang dan");
		printf("\n");
		printf("3. tinh hoc luc");
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