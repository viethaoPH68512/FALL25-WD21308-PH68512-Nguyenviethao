// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.
//conti tuong tu break nhung se dung cac lenh sau no neu dat du dieu kien ma minh dat ra
#include <stdio.h>
#include <math.h>
#include <string.h>
#define PI 3.14159   // Khai báo hằng số PI
// ham void khong co gia tri tham so dau vao va khong co gia tri tra ve
void TinhHinhTron()
{

	double bankinh;
	double chuvi2;
	printf("moi nhap so thu nhat: ");
	scanf("%lf", &bankinh);
	chuvi2 = 2 * PI * bankinh;
	printf("chuvi2: 2 * PI * %lf = %.2lf", bankinh, chuvi2);
	//dien tich hinh tron
	printf("moi nhap so de tinh dien tich: ");
	double bankinh2;
	double dientich2;
	printf("moi nhap so thu nhat: ");
	scanf("%lf", &bankinh2);
	dientich2 = PI * pow(bankinh2, 2);
	printf("dientich2: PI * pow(%lf, 2) = %.2lf", bankinh2, chuvi2);


}
void TinhToanHCN()
{

	//tinh chu vi hinh chu nhat
	double dai;
	double rong;
	double chuvi;
	printf("moi nhap so thu nhat: ");
	scanf("%lf", &dai);
	printf("moi nhap so thu hai: ");
	scanf("%lf", &rong);
	chuvi = (dai + rong) * 2;
	printf("chuvi: (%lf + %lf) * 2 = %.2lf", dai, rong, chuvi);
	//tinh dien tich
	double dai2;
	double rong2;
	double dientich;
	printf("moi nhap so thu nhat: ");

	scanf("%lf", &dai2);
	printf("moi nhap so thu hai: ");
	scanf("%lf", &rong2);
	dientich = dai2 * rong2;
	printf("dientich: %lf * %lf = %.2lf", dai2, rong2, dientich);





}
void TinhDiem()
{
	//tinh diem trung binh
	double toan;
	double ly;
	double hoa;
	double diemtrungbinh;
	printf("moi nhap diem mon toan: ");
	scanf("%lf", &toan);
	printf("moi nhap diem mon ly: ");
	scanf("%lf", &ly);
	printf("moi nhap diem mon hoa: ");
	scanf("%lf", &hoa);
	diemtrungbinh = (toan * 3 + ly * 2 + hoa * 1) / (3 + 2 + 1);
	printf("diemtrungbinh: (%lf * 3 + %lf * 2 + %lf * 1) / (3 + 2 + 1) = %.2lf", diemtrungbinh);


}
void TinhCoBan()
{
	double sothuc;
	double sothuc2;
	double tong;
	//nhap
	printf("moi nhap so thu nhat: ");
	scanf("%lf", &sothuc);
	printf("moi nhap so thu hai: ");
	scanf("%lf", &sothuc2);
	//tinh toan
	tong = sothuc + sothuc2;
	printf("tong: %lf + %lf = %.2lf", sothuc, sothuc2, tong);
	//truong trinh tru
	double sothuc3;
	double sothuc4;
	double hieu;
	//nhap
	printf("moi nhap so thu nhat: ");
	scanf("%lf", &sothuc3);
	printf("moi nhap so thu hai: ");
	scanf("%lf", &sothuc4);
	hieu = sothuc3 - sothuc4;
	printf("tong: %lf - %lf = %.2lf", sothuc3, sothuc4, hieu);
	//phep tinh chia
	double sothucthu02, sothucthu05, thuong;
	scanf("%lf", &sothucthu02);
	scanf("%lf", &sothucthu05);
	//lenh theo 2 nhanh 
	if (sothucthu05 == 0)
	{
		printf("sothucthunhat phai khac 0");
	}
	else if (sothucthu05 == 1)
	{
		printf("%lf", sothucthu02);
	}
	//neu khong gap phai truong hop loi thi dung lenh sau
	else
	{
		//tinh toan nhu binh thuong
		thuong = sothucthu02 / sothucthu05;
		printf("%lf", thuong);
	}
}
// ham - co tham so dau vao && co giatri tra ve
double hieuhaiso(double sothuc, double sothuc2) {
	double tong = sothuc + sothuc2;
	return tong;




}
// ham - co tham so dau vao va khong co gia tri tra ve
double tichhaiso(double sothuc, double sothuc2) {
	double tich = sothuc * sothuc2;
	printf("");
}
// ham - khong co tham so dau vao va co gia tri tra ve
void kiemTraSoNguyen()
{
	int songuyen;
	printf("nhap vao mot so bat ky:");
	scanf("%d", &songuyen);
	if (songuyen % 2 == 0)
	{
		printf("%d la so chan", songuyen);
	}
	else
	{
		printf("%d la so le", songuyen);
	}
}
void gaiphuongtrinhbac2()
{
	double a, b, c;
	double x, x1, x2, deota, can_deota;
	int chon = 1;
	printf("giai phuong trinh bac 2\n");
	printf("Nhap vao a, b, c: ");
	while (chon == 1)

	{


		scanf("%lf", &a);
		scanf("%lf", &b);
		scanf("%lf", &c);
		printf("Phuong trinh co dang: %lfx^2 + %lfx + %lf\n", a, b, c);

		if (a != 0)
		{
			deota = pow(b, 2) - 4 * a * c;
			printf("Delta= %lf^2 - 4*%lf*%lf = %lf\n", a, b, c, deota);
			if (deota > 0)
			{
				can_deota = sqrt(deota);
				x1 = (-b + can_deota) / (2 * a);
				x2 = (-b - can_deota) / (2 * a);
				printf("phuong trinh co 2 nghiem phan biet: \n");
				printf("x1 = %lf:\n ", x1);
				printf("x2 = %lf:\n ", x2);
			}
			else if (deota == 0)
			{
				x1 = x2 = -b / (2 * a);
				printf("phuong trinh co nghiem kep: %lf", x1);

			}
			else
			{
				printf("phuong trinh vo nghiem");
			}
		}

	}
}
void tinhtrungbinhtongcuacacsotunhienchiahetcho2() {
	int min, max;
	printf("vui long nhap min: ");
	scanf("%d", &min);
	printf("vui long nhap max: ");
	scanf("%d", &max);
	int i = min;
	float tong = 0, bienDem = 0, trungbinh = 0;
	while (i <= max) {
		if (i % 2 == 0) {
			tong += i;
			bienDem++;
		}
		i++;
	}
	if (bienDem > 0) {
		trungbinh = tong / bienDem;
		printf("trung binh cac so chia het cho 2 la: %.2f\n", trungbinh);

	}
	else {
		printf("khong co so nao chia het cho 2 trong khoang nay.\n");
	}



}
void chuongtrinhxacdinhsonguyento() {
	int i = 1;
	while (i == 1) {
		//nhap tu ban phim
		int x;
		printf("vui long nhap so x: ");
		scanf("%d", &x);
		int count = 0;
		int i;
		for (i = 2; i < x; i++) {
			if (x % i == 0) {
				count++;
			}
		}
		if (count == 0) {
			printf("%d la so nguyen to");

		}
		else {
			printf("%d khong phai la so nguyen to");
		}
		printf("ban co muon thuc hien Tiep Tuc hay khong[1-Co| khhac-Khong]");
		scanf("%d", &i);
	}
}
void chuongtrinhxaydungsochinhphuong() {
	int giatriX;
	printf("xin nhap gia tri x: ");
	scanf("%d", &giatriX);
	int count = 0;
	int i, lachinhphuong = 0;
	for (i = 1; i < giatriX; i++) {
		if (i * i == giatriX) {

			lachinhphuong = 1;

			break;
		}

	}
	if (lachinhphuong == 1) {
		printf("%d la so chinh phuong\n", giatriX);
	}
	else {
		printf("% khong phai la so chinh phuong\n", giatriX);

	}
	return 0;
}
void lapchucnang(int chon) {
	int tieptuc = 1;
	while (tieptuc == 1) {
		// goi chuc nang thuc thi
		switch (chon) {
		case 1:
			TinhHinhTron();
			break;
		case 2:
			TinhToanHCN();
			break;
		case 3:
			TinhDiem();
			break;
		case 4:
			TinhCoBan();
			break;
		case 5:
			kiemTraSoNguyen();
			break;
		case 6:
			gaiphuongtrinhbac2();
			break;
		case 0:
			printf("Thoat chuong trinh\n");
			break;
		default:
			printf("Lua chon khong hop le, vui long chon trong menu .\n");
			break;
		}
		printf(" ban co muon tiep tuc chuc nang nay hay khong [1 - co | khac - khong]");
		scanf("%d", 1);


	}


}
void demomang1chieu() {
	//int array[4];
	int array[4] = { 44, 45, 88, 98 };
	printf("%d", array[0]); printf("\n");
	printf("%d", array[1]); printf("\n");
	printf("%d", array[2]); printf("\n");
	printf("%d", array[3]); printf("\n");

}
void demomang2chieu() {
	//string - "string.h"
	//'' luu mot ky tu
	//"" luu nhieu ky tu
	char kytu = 'a';
	char mangkytu[10] = "HAO";
	for (int i = 0; i < 3; i++) {
		scanf(" %c", &mangkytu[i]);
	}
	//fgest(mangkytu)
	/*for (int i = 0; i<3; i++)
	{
	printf("%c", mangkytu[i]);
	}*/
	puts(mangkytu);
	int array[2][3];
	// array[2][3] : 2 dong, 3 cot.
	// so truoc la so đong
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("mang tai [%d] \[%d] la: ", i,j);
			scanf("%d", &array[i][j]);
			
		}
		 
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d, ", array[i][j]);
			// co the thay bang ("%d, ", array[i][j]
			
			
		}
		printf("\n");
	}

}
void demostring() {
	//string - "string.h"
	
	
	while (getchar() != '\n');
		

	char mangkytu[50];
	printf("nhap du lieu: ");
	fgets(mangkytu, sizeof(mangkytu), stdin);

	printf("%s", mangkytu);
	printf("\n");
	//kieu dua du lieu xuong dong

	//printf("string length: ");
	//printf("%d", strlen(mangkytu)-1);
	//printf("\n");
	//printf("string compare Less than: ");//ss lon hon
	//printf("%d", strcmp("A", "B"));
	//printf("\n");
	//printf("string compare greater than: ");// ss nho hon
	//printf("%d", strcmp("B", "A"));
	//printf("\n");
	printf("string reverse: ");
	printf("%s", strrev(mangkytu));
	printf("\n");
	printf("string reverse: ");
	printf("%s", strrev(mangkytu));
	printf("\n");
	printf("string upper: ");



	printf("%s", strrev(mangkytu));
	printf("\n");
	printf("string upper: ");
	printf("%s", strrev(mangkytu));
	printf("\n");
	printf("find string in string: ");
	if (strstr(mangkytu, "A") != NULL) {
		printf("found:");
		printf("%s", strrev(mangkytu), "A"));
	}
	
	//chuoi %s
}
int main()
{
	int chon;
	do
	{

		printf("-MENU CHUC NANG-"); printf(" \n");
		printf("1. TinhHinhTron  "); printf("\n");
		printf("2. TinhHinhChuNhat "); printf("\n");
		printf("3. TinhDiem  "); printf("\n");
		printf("4. TinhCoBan  "); printf("\n");
		printf("5. kiemTraSoNguyen  "); printf("\n");
		printf("6. gaiphuongtrinhbac2 "); printf("\n");
		printf("7. tinhtrunngbinhtongcuasochiahetcho2 "); printf("\n");
		printf("8. xacdinhsonguyento "); printf("\n");
		printf("9. sochinhphuong "); printf("\n");
		printf("10. lapchucnang "); printf("\n");
		printf("11. mang1chieu "); printf("\n");
		printf("12. mang2chieu "); printf("\n");
		printf("13. string "); printf("\n");
		printf("0. thoat "); printf("\n");
		printf("vui long chon chuc nang: ");
		scanf("%d", &chon);
		if (chon == 0) {
			printf("Thoat chuong trinh.\n");
			break;
		}
		switch (chon) {
		case 1:
			TinhHinhTron();
			break;
		case 2:
			TinhToanHCN();
			break;
		case 3:
			TinhDiem();
			break;
		case 4:
			TinhCoBan();
			break;
		case 5:
			kiemTraSoNguyen();
			break;
		case 6:
			gaiphuongtrinhbac2();

			break;
		case 7:
			tinhtrungbinhtongcuacacsotunhienchiahetcho2();
			break;
		case 8:
				chuongtrinhxacdinhsonguyento();
				break;
		case 9:
			chuongtrinhxaydungsochinhphuong();
			break;
	
		case 11:
				demomang1chieu();
				break;
		case 12:
				demomang2chieu();
				break;
		case 13:
				demostring();
				break;
			case 0:
				printf("Thoat chuong trinh\n");
				break;
			default:
				printf("Lua chon khong hop le, vui long chon chuc nang trong menu.\n");

		}



		for ) {

		}


		// nhap vong lap trong tung lenh tinh toan "while"
		//dung lenh system("cls"); de xoa noi dung khi muon tinh phep tinh khac
		//phai dung printf("") dang o phep tinh nao de nguoi dung de nhan biet và ; printf("\n");

	} while (chon == 0);
	return 0;
}


//kiem tra so chan le 

// co bao nhieu cach tim so chan
//chon cach nhanh nhat
//int bat ky 
// i++ = i= i+1


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