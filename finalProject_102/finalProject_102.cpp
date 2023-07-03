#include <iostream>
using namespace std;

class MataKuliah {
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;
public:
	MataKuliah() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		tugasAkhir = 0;
	}
	virtual float hitungNilaiAkhir() { return 0; }
	virtual void cekKelulusan() { return; }
	virtual void input() { return; }
	void setPresensi(float nilai) {
		this->presensi = nilai;
	}
	float getPresensi() {
		return presensi;
	}
	//isi disini
	void setActivity(float nilaiact) {
		this->activity = nilaiact;
	}
	float getActivity() {
		return activity;
	}
	void setExercise(float nilaiexe) {
		this->exercise= nilaiexe;
	}
	float getExercise() {
		return exercise;
	}
	void setTugasAkhir(float nilaita) {
		this->tugasAkhir = nilaita;
	}
	float getTugasAkhir() {
		return tugasAkhir;
	}
};

class Pemrograman : public MataKuliah { //isi disini

	string p;
	string a;
	string e;
	string ua;

	void input() {
		int presensi;
		int activity;
		int exercise;
		int tugasakhir;
		cout << "Masukkan Nilai Presensi : ";
		cin >> p;
		setPresensi(presensi);
		cout << "Masukkan Nilai Activity : ";
		cin >> a;
		setActivity(activity);
		cout << "Masukkan Nilai Exercise : ";
		cin >> e;
		setExercise(exercise);
		cout << "Masukkan Nilai Ujian Akhir : ";
		cin >> ua;
		setTugasAkhir(tugasakhir);
	};
	void cekkKelulusan() {

	};

	void hitungNilaiakhir() {

	};

};

int main() { //isi disini
	cout << "Apakah anda ingin mengulangprogram ? Y / N ";
	return 0;
}
