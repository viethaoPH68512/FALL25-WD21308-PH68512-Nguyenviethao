// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>

int main()
{
	
		int tieptuc_3;
		do
		{
			system("cls");
			int h1, m1, h2, m2, time, gio, phut;
			int start, end;
			float total = 0;
			do
			{
				printf("Nhap gio bat dau (h m): ");
				scanf("%d %d", &h1, &m1);

				printf("Nhap gio ket thuc (h m): ");
				scanf("%d %d", &h2, &m2);

				// ??i v? phút
				start = h1 * 60 + m1;
				end = h2 * 60 + m2;

				// Ki?m tra h?p l?
				if (end < start)
				{
					printf("Thoi gian ket thuc phai lon hon thoi gian bat dau!\n");
				}
				if (h1 < 12 || (h2 > 22 && m2 != 0))
				{
					printf("quan karaoke chi hoat dong tu 12 gio den 23 gio!\n");

				}
			} while (end < start || h1 < 12 || (h2 > 22 && m2 != 0));

			// Tính chênh l?ch
			time = end - start;

			// ??i l?i v? gi? và phút
			gio = time / 60;
			phut = time % 60;
			printf("Tong thoi gian: %d gio %d phut\n", gio, phut);

			int hours = end - start;

			if (hours <= 3)
			{
				total = hours * 50000;
			}
			else
			{
				total = 150000;
				int extra = hours - 3;
				total += extra * 50000 * 0.7;
			}
			if (start >= 14 && start <= 17)
			{
				total *= 0.9;
			}

			printf("Tong so tien can thanh toan: %.f VND\n", total);

			printf("Ban co muon tiep tuc khong? [1 - Co | Khong - Khac]");
			printf("\n");
			scanf("%d", &tieptuc_3);
		} while (tieptuc_3 == 1);
		system("cls");

	
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