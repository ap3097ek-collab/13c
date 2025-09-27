
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;


//1
//bool pLOXO(const string& word, const vector<string>& bad) {
//    string w = word;
//    
//    transform(w.begin(), w.end(), w.begin(), ::tolower);
//    for (auto& bw : bad) {
//        if (w == bw) return true;
//    }
//    return false;
//}
//
//int main() {
//    system("chcp 1251>null");
//
//    ifstream filep("bad.txt");      
//    ifstream input("input.txt");      
//    ofstream output("output.txt");    
//
//    if (!filep || !input || !output) {
//        cout << "Помилка відкриття файлів!\n";
//        return 1;
//    }
//
//    vector<string> slova;
//    string w;
//    while (filep >> w) slova.push_back(w);
//
//    string line;
//    while (getline(input, line)) {
//        stringstream ss(line);
//        string word;
//        bool first = true;
//        while (ss >> word) {
//            if (!pLOXO(word, slova)) {
//                if (!first) output << " ";
//                output << word;
//                first = false;
//            }
//        }
//        output << "\n";
//    }
//
//    cout << "Файл успішно очищено (output.txt).\n";
//    return 0;
//}



//2
//char ruToEn(char c) {
//    switch (c) {
//    case 'а': return 'a'; case 'б': return 'b'; case 'в': return 'v';
//    case 'г': return 'g'; case 'д': return 'd'; case 'е': return 'e';
//    case 'з': return 'z'; case 'и': return 'i'; case 'к': return 'k';
//    case 'л': return 'l'; case 'м': return 'm'; case 'н': return 'n';
//    case 'о': return 'o'; case 'п': return 'p'; case 'р': return 'r';
//    case 'с': return 's'; case 'т': return 't'; case 'у': return 'u';
//    case 'ф': return 'f'; default:  return c;
//    }
//}
//char enToRu(char c) {
//    switch (c) {
//    case 'a': return 'а'; case 'b': return 'б'; case 'v': return 'в';
//    case 'g': return 'г'; case 'd': return 'д'; case 'e': return 'е';
//    case 'z': return 'з'; case 'i': return 'и'; case 'k': return 'к';
//    case 'l': return 'л'; case 'm': return 'м'; case 'n': return 'н';
//    case 'o': return 'о'; case 'p': return 'п'; case 'r': return 'р';
//    case 's': return 'с'; case 't': return 'т'; case 'u': return 'у';
//    case 'f': return 'ф'; default:  return c;
//    }
//}
//
//int main() {
//    system("chcp 1251>null");
//
//    int choice;
//    cout << "1 - Російська -> Англійська\n2 - Англійська -> Російська\nВаш вибір: ";
//    cin >> choice;
//    cin.ignore();
//
//    ifstream in("input.txt");
//    ofstream out("output.txt");
//    if (!in || !out) { cout << "Помилка файлів!\n"; return 1; }
//
//    char c;
//    while (in.get(c)) {
//        if (choice == 1) out.put(ruToEn(c));
//        else out.put(enToRu(c));
//    }
//
//    cout << "Готово! Результат у output.txt\n";
//    return 0;
//}