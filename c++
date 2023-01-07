#include <iostream>
using namespace std;

int main()
{
string nama;
char golongan;
int gaji;
int hari;//jumlah hari masuk
int makan;//uang makan sesuai hari masuk
string pilih1;
int istri;//tunjangan istri
string pilih2;
int anak;//jumlah anak
int anak_anak;//tunjangan anak
int pajak;
int total;

	cout<<"TUGAS MATA KULIAH DASAR PEMOGRAMAN (SISTEM PENGGAJIAN)"<<"\n\n";
	
	cout<<"Mohon Masukkan Data Anda"<<"\n";
	
	cout<<"Nama Karyawan	: ";
	cin>>nama;
	
	cout<<"Golongan (A/B/C/D)	 : ";
	cin>>golongan;
	if (golongan=='a'||golongan=='A'){
		gaji=2000000;
	}
	else if (golongan=='b'||golongan=='B') {
		gaji=2500000;
	}
	else if (golongan=='c'||golongan=='C') {
		gaji=3000000;
	}
	else if (golongan=='d'||golongan=='D') {
		gaji=3500000;
	}
	else {
		cout<<"Mohon Masukkan Data yang Sesuai"<<"\n";
		return (0);
	}
	
	cout<<"Jumlah Hari Masuk Kerja	 : ";//30 hari kurangi weekend = 22 hari (maksimal full kerja)
	cin>>hari;
	if (hari<0&&hari>22) {
		cout<<"Mohon Masukkan Data yang Sesuai"<<"\n";
		return (0);
	}	
	else if (hari>=0&&hari<=22) {
		makan=hari*12500;
	}
	else {
		cout<<"Mohon Masukkan Data yang Sesuai"<<"\n";	
		return (0);
	}	
	
	cout<<"Apakah Anda Memiliki Istri (Ya/Tidak)	: ";
	cin>>pilih1;
	if (pilih1=="ya"||pilih1=="Ya"||pilih1=="YA") {
		istri=250000;
	}
	else if (pilih1=="tidak"||pilih1=="Tidak"||pilih1=="TIDAK") {
	}
	else {
		cout<<"Mohon Masukkan Data yang Sesuai"<<"\n";
		return (0);
	}
	
	
	cout<<"Apakah Anda Memiliki Anak (Ya/Tidak)	: ";
	cin>>pilih2;
	if (pilih2=="Ya"||pilih2=="YA"||pilih2=="ya") {
		cout<<"Jumlah Anak	: ";//jumlah maksimal dapat tunjangan = 3 anak (anak>3 tunjangan tetap sama dengan 3 anak)
		cin>>anak;
		if (anak<0) {
			cout<<"Mohon Masukkan Data yang Sesuai"<<"\n";//eliminasi minus
			return (0);
		}
		else if (anak>=3) {
		anak_anak=3*150000;
		}
		else {
		anak_anak=anak*150000;
		}
	}
	else if (pilih2=="tidak"||pilih2=="Tidak"||pilih2=="TIDAK") {
	}
	else {
		cout<<"Mohon Masukkan Data yang Sesuai"<<"\n";
		return (0);
	}
	cout<<"\n";
	
	total=gaji+makan+istri+anak_anak;
	pajak=0.075*total;//pajak=7,5% gaji 	
	cout<<"Total Gaji	: "<<total<<"\n";
	cout<<"Pajak		: "<<pajak<<"\n\n";
	cout<<"Gaji yang Diterima	: "<<total-pajak<<"\n";
	
	return (0);
}
