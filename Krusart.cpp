#include <iostream>
using namespace std;
/*int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}*/
/*int studentCount = 30;
float temperature = 36.6;
char grade = 'A';
bool passed = true;
int main() {
    cout << "Student Count: " << studentCount << endl;
    cout << "Temperature: " << temperature << "°C" << endl;
    cout << "Grade: " << grade << endl;
    cout << "Passed: " << (passed ? "Yes" : "No") << endl;
    return 0;
}*/
/*int x;
int y;
int sum=0;
int main() {
    cout << "Enter two integers: ";
    cin >> x >> y;
    sum = x + y;
    cout << "Sum: " << sum << endl;
    return 0;
} */
/*int MAX_BUFFER_SIZE = 1000;
int studnetScore=99;
int StudentRecord=23;
int student_score=88;
int main() {
    cout << "Max Buffer Size: " << MAX_BUUFER_SIZE << endl;
    cout << "Student Score: " << studnetScore << endl;
    cout << "Student Record: " << StudentRecord << endl;
    cout << "Student Score : " << student_score << endl;
    return 0;
}*/ 
/*int n;
int main() {
    cout << "Enter a number: ";
    cin >> n;
    if (n % 2 == 0) {
        cout << n << " is even." << endl;
    } else {    
        cout << n << " is odd." << endl;
    }
    return 0;
}*/
/*char grade;
int main(){
    cout<<"Enter your grade:";
    cin >> grade;
    switch (grade){
        case 'A':cout<<"Excellent!\n"; break;
        case 'B':cout<<"Good!\n"; break;
        case 'c':cout<<"Fair!\n"; break;
        case 'F':cout<<"Fail!\n"; break;
        default: cout<<"Invalid grade!\n"; break;
     }
}*/
/*int main() {
   for(int i=1;i<=10;i++){
       cout << "Number: " << i*5<< endl;
   }
   return 0;
}*/
/*int main(){
    int choice;
    do{
        cout << "Menu:\n";
        cout << "1.Greet\n";
        cout << "2.Calculate factorial\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        if(choice==1){
            char name[50];
            cout << "Enter your name: ";
            cin >> name;
            cout << "Hello, Greeting"  <<  name << "!" << endl;
        }
        if(choice==1){
            int num;
            cout << "Enter a number: ";
            cin >> num;
            int factorial = 1;
            for(int i =1;i<=num;i++){
                factorial *= i;
            }
            cout << "Factorial of " << num << " is " << factorial << endl;
        }
    } while (choice !=0);
    return 0;
}*/
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Prime numbers up to " << n << ": ";
    for (int num = 2; num <= n; num++) {
        bool isPrime = true;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << num << " ";
        }
    }
    cout << endl;
}