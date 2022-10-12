// NAMA		: Aloysius Juan Farrel Lumentut
// NRP		: 5025221176
// Jurusan	: Teknik Informatika

#include <iostream>
#include <cmath>

#define GRAVITASI 10 //10 m/s^2
#define START_PENGUKURAN 1 //pengukuran dimulai dari 1 meter
#define SUDUT 0.5 //sudut elevasi tembakan

//inputan berupa int ke Vtan

int mencari_V0(int Vtan, int vloss)
{
	/* Tulis fungsi mencari v0 kalian disini */
  	return Vtan - vloss;
}

int speed_dgn_loss(int vloss)
{
	/* tulis fungsi hitung_loss kalian disini */
    if (vloss >= 1 && vloss <= 10){
        vloss = 1;
    } else if (vloss >= 11 && vloss <=20){
        vloss = 3;
    } else if (vloss >= 21 && vloss <= 30){
        vloss = 5;
    }
    return vloss;
}

int main() {
    /* tulis kode utama kalian disini */
    int Vtan, jarak, vloss;
    double v0, vrollerawal;

    std::cin >> Vtan;
    vloss = speed_dgn_loss(Vtan);
    //mencari v0
    v0 = mencari_V0(Vtan, vloss);
    //mencari jarak terjauh setelah diketahui v0
    jarak = (v0*v0*2*SUDUT) / GRAVITASI;
    //mencari v roller awal
    vrollerawal = sqrt(GRAVITASI * jarak) + vloss; 

  	std::cout << jarak << " " << vrollerawal << std::endl;
    return 0;
}