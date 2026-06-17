// Write the data sucessfully
// #include<iostream>
// #include<fstream>
// using namespace std;

// int main(){
//     ofstream fout;
//     fout.open("student.txt");

//     fout << "Name : Atishay\n";
//     fout << "Course: CPP\n";
//     fout << "Marks : 80\n";

//     fout.close();
//     cout << "Data written to file sucessfuly";
//     return 0;
// }

// ===============================================

// Read the data from the file :- 

// #include<iostream>
// #include<fstream>
// using namespace std;

// int main(){
//     ifstream fin;

//     fin.open("student.txt");

//     string line;
//     while(getline(fin,line)){
//         cout << line << endl;
//     }
//     fin.close();
//     return 0;
// }

// ===================================

// write and Read in the same file (fstream)

// #include<iostream>
// #include<fstream>
// using namespace std;

// int main(){
//     fstream file;

//     file.open("indore.txt",ios::out);
//     file << "Welcome to debugshala indore";
//     file.close();

//     file.open("indore.txt",ios::in);
//     string text;
//     getline(file,text);
//     cout << text ;

//     file.close();
//     return 0;
// }

// ============================================

// Append data to existing file 

// #include<iostream>
// #include<fstream>
// using namespace std;

// int main(){
//     ofstream fout;
//     fout.open("student.txt",ios::app);

//     fout << "\nGrade : A";

//     fout.close();
//     cout << "Data appended Sucessfully";
//     return 0;
// }


// ============================================

// Check Weather file exists or not.

// #include<iostream>
// #include<fstream>
// using namespace std;

// int main(){
//     ifstream fin("student1.txt");

//     if(!fin){
//       cout << "File Not found";
//     }else{
//         cout << "File exists";
//     }
    
//     fin.close();
//     return 0;
// }

// =======================================

// Write and Read using the user input

// #include<iostream>
// #include<fstream>
// using namespace std;

// int main(){
//     ofstream fout;

//     fout.open("employee.txt");

//     string name;
//     int salary;

//     cout << "Enter Name: ";
//     cin >> name;

//     cout << "Enter Salary: ";
//     cin >> salary;

//     fout << name << " " << salary << endl;
//     fout.close();
    
//     ifstream fin("employee.txt");
//     cout << "\n File Data:\n";
//     fin >> name >> salary;
//     cout << name  << " " << salary ;
//     fin.close();

//     return 0;
// }