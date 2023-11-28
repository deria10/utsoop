#include <iostream>
#include <cmath>

class Tabung {
private:
    float jariJari;
    float tinggi;

public:
    // Property
    void setJariJari(float r) { jariJari = r; }
    void setTinggi(float h) { tinggi = h; }

    float getJariJari() const { return jariJari; }
    float getTinggi() const { return tinggi; }

    // Method
    float hitungVolume() const {
        return M_PI * std::pow(jariJari, 2) * tinggi;
    }

    float hitungLuasPermukaan() const {
        return 2 * M_PI * jariJari * (jariJari + tinggi);
    }
};

int main() {
    // Objek Tabung
    Tabung tabung;

    // Input dari pengguna
    std::cout << "Masukkan jari-jari tabung: ";
    std::cin >> tabung.setJariJari;

    std::cout << "Masukkan tinggi tabung: ";
    std::cin >> tabung.setTinggi;

    // Menghitung dan mencetak volume dan luas permukaan
    std::cout << "Volume Tabung: " << tabung.hitungVolume() << std::endl;
    std::cout << "Luas Permukaan Tabung: " << tabung.hitungLuasPermukaan() << std::endl;

    // Menggunakan method setter dan getter
    std::cout << "Masukkan jari-jari baru: ";
    std::cin >> tabung.setJariJari;

    std::cout << "Masukkan tinggi baru: ";
    std::cin >> tabung.setTinggi;

    std::cout << "Jari-Jari Tabung (setelah diubah): " << tabung.getJariJari() << std::endl;
    std::cout << "Tinggi Tabung (setelah diubah): " << tabung.getTinggi() << std::endl;
    std::cout << "Volume Tabung (setelah diubah): " << tabung.hitungVolume() << std::endl;
    std::cout << "Luas Permukaan Tabung (setelah diubah): " << tabung.hitungLuasPermukaan() << std::endl;

    return 0;
}