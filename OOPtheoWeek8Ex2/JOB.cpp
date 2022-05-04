#include "Job.h"
void JOB::inputBasic() {
	cout << COUNT++ << ".\nNhap ten: ";
	cin.ignore();
	getline(cin,NAME);
	cout << "Nam sinh: "; cin >> YEAR;
	cout << "Dia chi: ";
	cin.ignore();
	getline(cin, ADDRESS);
}
void JOB::outputBasic() {
	cout << "Ten: " << NAME << "  Nam sinh: " << YEAR << "  Dia chi: " << ADDRESS;
}
void STUDENT::INPUT() {
	inputBasic();
	COUNTSTD++;
	cout << "Nhap mssv: ";
	cin.ignore();
	getline(cin, ID);
	cout << "Nhap diem trung binh: "; cin >> AVERAGE;
}
void STUDENT::OUTPUT() {
	outputBasic();
	cout << "  MSSV: " << ID << "  Diem trung binh: " << AVERAGE << "  Noi lam viec: Truong hoc\n";
}
void WORKER::INPUT() {
	inputBasic();
	COUNTWK++;
	cout << "Nhap luong co ban: "; cin >> basicSalary;
	cout << "Nhap so ngay phep: "; cin >> ABSENT;
	cout << "Nhap nam kinh nghiem: "; cin >> expYear;
}
void WORKER::OUTPUT() {
	outputBasic();
	cout << "  Luong co ban: " << basicSalary << "  So ngay phep: " << ABSENT <<"  So nam kinh nghiem: "<<expYear << "  Noi lam viec: Nha may\n";
}
void SINGER::INPUT() {
	inputBasic();
	COUNTSG++;
	cout << "Nhap dong nhac: ";
	cin.ignore();
	getline(cin, musicType);
	cout << "Nhap show da dien: "; cin >> numShow;
	cout << "Nhap album da ra mat: "; cin >> numAlbum;
}
void SINGER::OUTPUT() {
	outputBasic();
	cout << "  Dong nhac: " << musicType << "  Show da dien: " << numShow <<"  Album da ra mat: " <<numAlbum<< "  Noi lam viec: San khau\n";
}
void DOCTOR::INPUT() {
	inputBasic();
	COUNTDR++;
	cout << "Nhap khoa chuyen mon: ";
	cin.ignore();
	getline(cin, profesSkill);
	cout << "Nhap so nam kinh nghiem: "; cin >> expYear;
}
void DOCTOR::OUTPUT() {
	outputBasic();
	cout << "  Khoa chuyen mon: " << profesSkill << "  So nam kinh nghiem: " << expYear << "  Noi lam viec: Benh Vien\n";
}