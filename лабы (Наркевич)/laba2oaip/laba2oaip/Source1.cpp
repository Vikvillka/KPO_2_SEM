#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream file1("file1.txt");
    ofstream file2("file2.txt");
    char word1[100];
    char c;
    int counter = 0;
    if (!file1.is_open()) {
        cout << "error!";
    }
    while (file1.get(c)) {
        word1[counter] = c;
        counter++;
        if (c == ' ') {
            break;
        }
    }
    int line = 1;
    int numOfLine[100];

    int i = 0;

    while (file1.get(c)) {
        if (c == word1[counter] && line != 1) {
            counter++;
        }
        else if (c != word1[counter]) {
            counter = 0;
        }
        if (c == '\n') {
            line++;
            counter = 0;
        }
        if (counter == 3) {
            numOfLine[i] = line;
            i++;
        }
    }
    line = 1;
    i = 0;
    char a;
    /*file1.seekg(1, ios_base::beg);*/
    file1.close();
    ifstream file1_2("file1.txt");
    while (!file1_2.eof()) {
        file1_2.get(a);
        if (line != 1 && line != numOfLine[i]) {
            file2 << a;
            cout << a;
            i++;
        }
        if (a == '\n') {
            line++;
        }
    }
    file1_2.close();
    file2.close();
    ifstream file2_2("file2.txt");
    counter = 0;
    char s;
    while (file2_2.get(s)) {
        if (s == 'b' || s == 'c' || s == 'd' || s == 'f' || s == 'g' || s == 'h' || s == 'j' || s == 'k' || s == 'l' || s == 'm' ||
            s == 'n' || s == 'p' || s == 'q' || s == 'r' || s == 's' || s == 't' || s == 'w' || s == 'x' || s == 'z' || s == 'v')
        {
            counter++;
        }
        if (s == '\n') {
            break;
        }
    }
    cout << endl << "Amount of consonants: " << counter;
    file2_2.close();
}

