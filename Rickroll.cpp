#include <iostream>
using namespace std;

int main() {   
    // URL lagu "Never Gonna Give You Up" oleh Rick Astley di YouTube
    string linkYT = "https://www.youtube.com/watch?v=dQw4w9WgXcQ";

    // Menggunakan fungsi system() untuk menjalankan perintah di terminal/cmd
    string command = "start chrome \"" + linkYT + "\"";
    system(command.c_str());
    
    return 0;
}

