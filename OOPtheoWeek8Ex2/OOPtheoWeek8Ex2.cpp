#include "Job.cpp"
int main() {
	JOB* job[1000];
	STUDENT stud[1000];
	WORKER wor[1000];
	SINGER  sin[1000];
	DOCTOR doc[1000];
	int n,ROLE,j=0;
	cout << "Nhap so nguoi can nhap: "; cin >> n;
	for (int i = 0; i < n; i++) {
		while (true) {
			cout << "Chon nghe nghiep: \n  1. Sinh vien.\n  2. Cong nhan.\n  3. Ca si.\n  4. Bac si.\nChon 1 so tu 1-4: ";
			cin >> ROLE;
			if (ROLE != 1 && ROLE != 2 && ROLE != 3 && ROLE != 4) cout << "\nKhong hop le vui long nhap lai!\n\n";
			else break;
		}
		if (ROLE == 1) job[i] = &stud[i];
		if (ROLE == 2) job[i] = &wor[i];
		if (ROLE == 3) job[i] = &sin[i];
		if (ROLE == 4) job[i] = &doc[i];
		job[i]->INPUT();
	}
	for (int i = 0; i < n; i++) {
		cout << i + 1 << ". ";
		job[i]->OUTPUT();
	}
	cout << "\nSinh vien: " << STUDENT::COUNTSTD << "\n";
	cout << "\nCong nhan: " << WORKER::COUNTWK << "\n";
	cout << "\nCa si: " << SINGER::COUNTSG << "\n";
	cout << "\nBac si: " << DOCTOR::COUNTDR << "\n";

}