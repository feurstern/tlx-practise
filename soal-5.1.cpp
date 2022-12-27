#include<cstdio>


void SimulasiPinjaman(double pokok, int tenor, double bungaPerBulan){
    double pinjaman;
    scanf("%f", &pinjaman);
    double nilaiBunga = (pokok/tenor)* bungaPerBulan;
    double totalPinjaman = nilaiBunga +pinjaman;

    printf(" Pokok= %f\n", pokok);
    printf("Tenor =%d\n", tenor);
    printf("Bunga= %f\n", bungaPerBulan);

    printf("Pinjaman=  %f\n", pinjaman);

    printf("bunga perbulan=%f\n", nilaiBunga);
    printf(" Total pinjaman =%f", totalPinjaman);
}
int main(){

    SimulasiPinjaman(10000000,12,1000);

}