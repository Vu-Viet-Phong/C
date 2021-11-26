#include <stdio.h>

#define swap(a, b) { NV t = a; a = b; b = t; }

struct NhanVien {
	char ten[30];
	char gioiTinh[5];
	int tuoi;
	float hesoluong;
	char chucVu[30];
	float phucapCV;
	float luong;
};

typedef NhanVien NV;

void tinhLuong(NV &nv);
void nhap(NV &nv);
void nhapNV(NV a[], int n);
void xuatNV(NV a[], int n);
void luong(NV a[], int n); 
void sapxepTheoLuong(NV a[], int n); // tang dan theo luong

int main() {
	int key;
    int n;
    bool nhap = false;
    
    do {
        printf("\nNhap so luong nhan vien: "); 
        scanf("%d", &n);
    } while (n <= 0);
    
    NV a[n];
    while (true) {
        printf("\n**********************MENU************************\n");
        printf("CHUONG TRINH QUAN LY NHAN VIEN\n");
        printf("0. Thoat.\n");
        printf("1. Nhap danh sach nhan vien.\n");
        printf("2. Xuat danh sach nhan vien.\n");
        printf("3. Luong cua nhan vien.\n");
		printf("4. Sap xep nhan vien theo luong.\n");
        printf("**************************************************\n");
        printf("Nhap tuy chon: ");
        scanf("%d", &key);
        
        switch(key) {
            case 0:
                printf("\n0.Thoat chuong trinh!");
                return 0;
            case 1:
            	printf("**************************************************\n");
                printf("\n1. Nhap danh sach nhan vien.");
                nhapNV(a, n);
                printf("\nNhap thanh cong!\n");
                nhap = true;
                break;
            case 2:
            	printf("**************************************************\n");
                if (nhap) {
                    printf("\n2. Xuat danh sach nhan vien.");
                    xuatNV(a, n);
                } else {
                    printf("\nVui long nhap danh sach nhan vien truoc!");
                }
                break;
            case 3:
            	printf("**************************************************\n");
            	printf("3. Luong cua nhan vien.\n");
            	luong(a, n);
            	break;
            case 4:
            	printf("**************************************************\n");
                if (nhap) {
                    printf("\n4. Sap xep nhan vien theo luong!");
                    sapxepTheoLuong(a, n);
                    xuatNV(a, n);
                } else {
                    printf("\nVui long nhap danh sach nhan vien truoc!");
                }
            default:
                printf("\nKhong hop le.");
		}
	}
}

void tinhLuong(NV &nv) {
	nv.luong = nv.hesoluong * 1490.0000 + nv.phucapCV;  
}

void nhap(NV &nv) {
    printf("\nNhap ten: ");
    fflush(stdin);
    gets(nv.ten);
    printf("Nhap gioi tinh: ");
    gets(nv.gioiTinh);
    printf("Nhap tuoi: ");
    scanf("%d", &nv.tuoi);
    printf("Nhap he so luong: ");
    scanf("%f", &nv.hesoluong);
    printf("Chuc vu: ");
	gets(nv.chucVu);
    printf("Nhap phu cap chuc vu: ");
	scanf("%f ", &nv.phucapCV);
	tinhLuong(nv);	
}

void nhapNV(NV a[], int n) {
	for (int i = 0; i < n; i++) {
	    printf("\nNhap nhan vien thu %d: ", i + 1);
	    nhap(a[i]);
	}
}

void xuatNV(NV a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nThong tin nhan vien thu %d:", i + 1);
        printf("\nHo ten: %s", a[i].ten);
        printf("\nGioi tinh: %s", a[i].gioiTinh);
        printf("\nTuoi: %d", a[i].tuoi);
        printf("\nHe so luong: %.2f", a[i].hesoluong);
        printf("\nChuc vu: %d", a[i].chucVu);
        printf("\nPhu cap chuc vu: %.f", a[i].phucapCV);
        printf("\nLuong: %.2f", a[i].luong);
    }
}

void luong(NV a[], int n) {
	for (int i = 0; i < n; i++)
		printf("\nLuong cua (%s) la: %.2f\n", a[i].ten, a[i].luong);
} 

void sapxepTheoLuong(NV a[], int n) {
    for (int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i].luong > a[j].luong) swap(a[i], a[j]);
        }
    }
}
