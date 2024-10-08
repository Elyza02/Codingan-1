#include<iostream>
using namespace std;

struct studemt {
     string name;
     int age;
     float gpa;
};

int main({
    const int size = 3;
    student students[size];
    
   
    for (int i = 0; i< size; i++){
    	cout << "masukkan nama mahasiswa:";
    	cin  >> students[i].name;
    	cout << "masukkan umur; ";
    	cin  >> students[i].age;
    	cout << "masukkan GPA:";
    	cin  >> students[i].gpa;
    }
    
    cout << "\nData Mahasiswa:\n";
    for(int i = 0; i <size; i++){
    	cout << "nama:" << students[i].nama <<",umur:" << students[i].ege <<",GPA:" << students[i].gpa <<endl;
	}
	return 0;
}
