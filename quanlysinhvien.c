#include <stdio.h>

#define swap(a, b) { SV t = a; a = b; b = t; }

struct SinhVien {
	char ten[30];
	char gioiTinh[5];
	int tuoi;
	float diemToan, diemLy, diemHoa;
	float diemTB = 0;
};

typedef SinhVien SV;

void tinhdiemTB(SV &sv);
void nhap(SV &sv);
void nhapSV(SV a[], int n);
void xuatSV(SV a[], int n);
void diemTB(SV a[], int n);
void sapxepTheoDTB(SV a[], int n);
void xeploaiSV(SV a[], int n);

int main() {
    int key;
    int n;
    bool nhap = false;
    
    do {
        printf("\nNhap so luong SV: "); 
        scanf("%d", &n);
    } while (n <= 0);
    
    SV a[n];
    while (true) {
        printf("\n**********************MENU************************\n");
        printf("CHUONG TRINH QUAN LY SINH VIEN\n");
        printf("0. Thoat.\n");
        printf("1. Nhap danh sach sinh vien.\n");
        printf("2. In danh sach sinh vien.\n");
        printf("3. Diem trung binh cua sinh vien.\n");
		printf("4. Sap xep sinh vien theo diem trung binh.\n");
        printf("5. Xep loai sinh vien.\n");
        printf("**************************************************\n");
        printf("Nhap tuy chon: ");
        scanf("%d", &key);
        
        switch(key) {
            case 0:
                printf("\n0.Thoat chuong trinh!");
                return 0;
            case 1:
            	printf("**************************************************\n");
                printf("\n1. Nhap danh sach sinh vien.");
                nhapSV(a, n);
                printf("\nNhap thanh cong!\n");
                nhap = true;
                break;
            case 2:
            	printf("**************************************************\n");
                if (nhap) {
                    printf("\n2. Xuat danh sach sinh vien.");
                    xuatSV(a, n);
                } else {
                    printf("\nVui long nhap danh sach sinh vien truoc!");
                }
                break;
            case 3:
            	printf("**************************************************\n");
            	diemTB(a, n);
            	break;
            case 4:
            	printf("**************************************************\n");
                if (nhap) {
                    printf("\n4. Sap xep sinh vien theo diem trung binh!");
                    sapxepTheoDTB(a, n);
                    xuatSV(a, n);
                } else {
                    printf("\nVui long nhap danh sach sinh vien truoc!");
                }
                break;
            case 5:
            	printf("**************************************************\n");
                if (nhap) {
                    printf("\n5. Xep loai sinh vien!");
                    xeploaiSV(a, n);
                } else {
                    printf("\nVui long nhap danh sach sinh vien truoc!");
                }
                break;
            default:
                printf("\nKhong hop le.");
        }
	}
}

void tinhdiemTB(SV &sv) {
    sv.diemTB = (sv.diemHoa + sv.diemLy + sv.diemToan) / 3;    
}

void nhap(SV &sv) {
    printf("\nNhap ten: ");
    fflush(stdin);
    gets(sv.ten);
    printf("Nhap gioi tinh: ");
    gets(sv.gioiTinh);
    printf("Nhap tuoi: ");
    scanf("%d", &sv.tuoi);
    printf("Nhap diem Toan: ");
    scanf("%f", &sv.diemToan);
    printf("Nhap diem Ly: ");
    scanf("%f", &sv.diemLy);
    printf("Nhap diem Hoa: ");
    scanf("%f", &sv.diemHoa);
    tinhdiemTB(sv);
}

void nhapSV(SV a[], int n) {
	for (int i = 0; i < n; i++) {
	    printf("\nNhap sinh vien thu %d: ", i + 1);
	    nhap(a[i]);
	}
}

void xuatSV(SV a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nThong tin sinh vien thu %d:", i + 1);
        printf("\nHo ten: %s", a[i].ten);
        printf("\nGioi tinh: %s", a[i].gioiTinh);
        printf("\nTuoi: %d", a[i].tuoi);
        printf("\nDiem Toan: %.2f", a[i].diemToan);
		printf("\nDiem Ly: %.2f", a[i].diemLy);
		printf("\nDiem Hoa: %.2f", a[i].diemHoa);
        printf("\nDiem trung binh: %.2f\n", a[i].diemTB);
    }
}

void diemTB(SV a[], int n) {
	for (int i = 0; i < n; i++)
		printf("\nDiem trung binh cua (%s) la: %.2f\n", a[i].ten, a[i].diemTB);
} 

void sapxepTheoDTB(SV a[], int n) {
    for (int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i].diemTB > a[j].diemTB) swap(a[i], a[j]);
        }
    }
}

void xeploaiSV(SV a[], int n) {
    for(int i = 0; i < n; i++) {
        printf("\nXep loai cua sinh vien (%s) la: ", a[i].ten);
        if(a[i].diemTB >= 8) printf("Gioi");
        else if(a[i].diemTB >= 6.5) printf("Kha");
        else if(a[i].diemTB >= 4) printf("Trung binh");
        else printf("Yeu");
    }
    printf("\n");
}


