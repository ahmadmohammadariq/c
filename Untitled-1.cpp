#include <iostream> 
using namespace std;
void f1(int ar[], int size) {
    for (int i = 0;i < size;i++) {
        cout << "Enter number " << i << ": ";
        cin >> ar[i];
    }
}


int main() {
    const int size = 10;
    int ar[size];
    f1(ar, size);
    cout << ar[0] << endl;
    return 0;
}


///////////////



#include <iostream>
using namespace std;

void f2(double weights[], double heights[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter weight " << i + 1 << ": ";
        cin >> weights[i];
        cout << "Enter height " << i + 1 << ": ";
        cin >> heights[i];
    }
}

int main() {
    const int size = 3;
    double weights[size];
    double heights[size];

    f2(weights, heights, size);

    return 0;
}


////////

#include <iostream>
#include <vector>
using namespace std;
void fillSalaries(double salaries[], int size) {
    for (int i = 0;i < size; i++) {
        cout << "enter num " << i + 1 << endl;
        cin >> salaries[i];
    }
}
double getMaximum(double salaries[], int size) {
    double max = salaries[0];
    for (int i = 0; i < size; i++) {
        if (salaries[i] > max) {
            max = salaries[i];
        }
    }
    return max;
}
double getAverage(double salaries[], int size) {
    double sum = 0;
    for (int i = 0; i < size;i++) {
        sum += salaries[i];
    }
    return sum / size;
}
char getGender(double salaries[], char gender[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (salaries[i] > 500)
        {
            return gender[i];
        }
    }
    return 'N';
}
int main() {
    const int size = 5;
    double salaries[size];
    char gender[size];
    getGender(salaries, gender, size);
    fillSalaries(salaries, size);
    double max = getMaximum(salaries, size);
    double averag = getAverage(salaries, size);
    cout << "The maximum salary is: " << max << endl;
    cout << "Average = " << averag << endl;
    return 0;
}

///////////////


#include <iostream>
using namespace std;

void f1(double w[], double h[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter weight and height for person " << i + 1 << ": ";
        cin >> w[i] >> h[i];
    }
}
void f2(double sal[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "enter sal " << i + 1 << ":" << endl;
        cin >> sal[i];
    }
}
double getMaximum(double sal[], int size) {
    double max = sal[0];
    for (int i = 0; i < size; i++) {
        if (max < sal[i]) {
            max = sal[i];
        }

    }
    return max;
}
double  getAverage(double sal[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += sal[i];
    }
    return sum / size;
}
void f3(char gan[], int size) {

    for (int i = 0; i < size; i++) {
        cout << "enter the gandar (m/f)" << i + 1 << ":" << endl;
        cin >> gan[i];
    }
}
int f4(double sal[], char gan[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (gan[i] == 'f' && sal[i] > 500) {
            count++;
        }
    }
    return count;
}


int main() {
    //  const int size = 3;
      //double w[size];
      //double h[size];
      //f1(w, h, size);
      //for (int i = 0; i < size; i++) {
        //  double bmi = w[i] / (h[i] * h[i]); 
          //cout << "Person " << i + 1 << " BMI = " << bmi << " → ";
          //if (bmi < 18.5)
            //  cout << "Underweight";
          //else if (bmi < 25)
            //  cout << "Normal";
         // else
           //   cout << "Overweight";
         // cout << endl;
      //}
  //    int rows = 6;
     // for (int i = 1; i <= rows; i++) {
   //       if (i % 2 != 0) {
         //     for (int j = 1; j <= i; j++) {
        //          cout << "* ";
      //        }
    //      }
          //else {
              //for (int j = 1; j <= i; j++) {
              //    cout << "+ ";
            //  }
          //}
        //  cout << endl;
      //}
    const int  size = 3;
    double sal[size];
    char gan[size];
    f2(sal, size);
    f3(gan, size);
    double maxSal = getMaximum(sal, size);
    cout << "Maximum salary is: " << maxSal << endl;
    cout << "the AVG is " << "=" << getAverage(sal, size) << endl;
    cout << "the number of females whose salary > 500 = "
        << f4(sal, gan, size) << endl;







    return 0;
}



////////////

بروجيكت لحاله


#include <iostream>
using namespace std;
int f1(int x, int y) {
    int sum = 0;
    int count = 0;
    for (int i = x; i <= y; i++) {
        if (i % 2 != 0) {
            sum += i;
            count++;
            if (count == 5) {
                break;
            }
        }
    }
    return sum / 5;
}
bool f2(int x, int y) {
    if (x % 10 == y % 10) {
        return true;
    }
    else {
        return false;
    }
}
void f3() {
    cout << "(2539842) ahmad ariq " << endl;
}
int main() {
    int x, y;
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    switch (ch)
    {
    case 'a':
        cout << "enter two numbers:" << endl;
        cin >> x >> y;
        cout << "the result of odd num is: " << f1(x, y) << endl;
        break;
    case 'b':
        cout << "enter two numbers:" << endl;
        cin >> x >> y;
        cout << "the result is: " << f2(x, y) << endl;
        break;
    case 'c':
        f3();
        break;
    default: cout << "good bye";
        break;
    }
    return 0;
}


//////////////



switch



#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    char op;

    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    cout << "Enter op (*, +, -): ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
        break;

    case '-':
        cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
        break;

    case '*':
        cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
        break;

    default:
        cout << "Invalid operator!" << endl;
    }

    return 0;
}





/////////////

#include <iostream>
using namespace std;

int main() {

    int mark;
    cout << "Enter mark: ";
    cin >> mark;

    switch (mark / 10)
    {
    case (10, 9):
        cout << "a";
        break;
    case (8, 7):
        cout << "b";
        break;

    case (6):
        cout << "c";
        break;

    case (5):
        cout << "d";
        break;
    case 4:
    case 3:
    case 2:
    case 1:
        cout << "f";
        break;
    default:
        cout << "faild";

    }

    return 0;
}




////////////////


اساسيات

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 4; i++) {

        cout << "   ";
        for (int j = 1; j <= i; j++)
            cout << "* ";

        cout << endl;
    }
    return 0;
}
//////////////
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    cout << "E101 , Arabic101 , c++ lab\n";
    cout << "Please choose your failer mid exam from above: ";
    cin >> a;

    if (a == "E101")
        cout << "Don't worry , me too.\n";
    else if (a == "c++ lab")
        cout << "No i don't think so...\n";
    else if (a == "Arabic101")
        cout << "Trust we all will.\n";
    else
        cout << "enter one of the above please!\n";

    return 0;
}



///////////////


//#include <iostream>
//#include <cmath>
//using namespace std;
//int getfactorial(int num) {
  //  int f = 1;
    //for (int i = 1;i <= num;i++)
      //  f *= i;
    //return f;
//}
//int main() {
  //  int num;
    //cout << "entre num 1:\n";
    //cin >> num;
   //cout<< getfactorial(num);  
    //return 0;
//}


///////////////////////////////


//#include <iostream>
//#include <cmath>
//using namespace std;
//double avg(double sum, int n) {
  //  return sum/n;
//}
//int main() {
  //  int n;
    //double sum;
    //cout << "enter the sum of valuoe and total of marks :\n";
    //cin >> sum >> n;
    //cout << avg(sum, n);
//    return 0;
//}


///////////////////////


//#include <iostream>
//#include <cmath>
//using namespace std;
//int getmax(int n1, int n2) {
    //if (n1 > n2)
     //   return n1;
   // else 
  //  return n2;
//}
//int main() {
    //int n1, n2;
    //cout << "enter two num :";
    //cin >> n1 >> n2;
    //cout << "max num between " << n1 << " and " << n2
    //    << " is " << getmax(n1, n2);
  //  return 0;
//}





////////////////////////////////



//#include <iostream>
//using namespace std;
//int getmin(int n1, int n2) {
    //if (n1 > n2)
      //  return n2;
    //else
  // return n1;
//}
//int main() {
    //int n1, n2;
   // cout << "Enter two numbers: ";
    //cin >> n1 >> n2;
    //cout << "Min number between " << n1 << " and " << n2
    //    << " is " << getmin(n1, n2);
  //  return 0;
//}




/////////////////////////



//#include <iostream>
//using namespace std;
//int getmax(int n1, int n2) {
    //if (n1 > n2)
     //  return n1;
   //else 
  //  return n2;
//}
//int f1(int n1, int n2, int n3) {
  //  return getmax(n1, getmax(n2, n3));
//}
//int main() {
    //int n1, n2, n3;
    //cout << "entre 3 num :";
    //cin >> n1 >> n2 >> n3;
    //cout << "max num between" << n1 <<","<< n2 <<","<< n3 <<
    //    "is" << f1(n1, n2, n3) << endl;
  //  return 0;
//}



//////////////////////////


//#include <iostream>
//#include<cmath> 
//using namespace std;
//int getvol1(double n) {
    //    return  n * n * n;
//}
//int main() {
  //  int n ;
  //  cout << "enter num:";
  //  cin >> n;
  //  cout << " The volume of a cube:" << getvol1(n) << endl;
   // double volume = getvol1(n);
  //return 0;
//}



//////////////////////////////////////




//#include<iostream> 
//#include<cmath> 
//using namespace std;
//double f1(double r , double h ) {
    //double π = 3.14;
  //  return  π * r * r * h;
//}
//int main(){
    //int r, h;
    //cout << "Enter radius and height of a cylinder:" << endl;
    //cin >> r>> h;
    //cout << " Volume of cylinder is " << f1(r, h)<< endl;
  //  return 0;
//}




///////////////////////////////////



//#include<iostream> 
//#include<cmath> 
//using namespace std;
//double f1(double r) {
  //  double π = 3.14;
    //return (4.0 / 3.0) * π * r * r * r;
//}
//int main() {
  //  int r;
    //cout << "enter r :";
   // cin >> r;
    //cout << "Volume of sphere is " << f1(r) << endl;
    //return 0;
//}



/////////////////////////////






//#include<iostream> 
//#include<cmath> 
//using namespace std;
//void printEven() {
    //for (int i = 1; i <= 100; i++) {
        //if (i % 2 == 0) {
      //      cout << i << " ";
    //    }  
  //  }
//}
//int main() {
    //printEven(); 
   // return 0;
//}





///////////////////////////////////


// #include<iostream>
//#include<cmath> 
//using namespace std;
//void f1(int x) {
 //   if (x % 2 == 0) {
     //   cout << "even\n";
   // }
    //if (x % 2 != 0) {
      //  cout << "odd";
    //}
//}
//int main() {
  //  int x;
   // cout << "enter x :";
   // cin >> x;
  //  f1(x);
  //  return 0;
//}








/////////////////////////////////







//#include <iostream>
//using namespace std;
//double calculateAverage(double sum, int count) {
   // if (count == 0)
       // return 0;
    //return sum / count;
//}
//char getGrade(double mark) {
   // int m = mark / 10;   
   // switch (m) {
   // case 10:
    //case 9: return 'A';   
    //case 8: return 'B';   
   // case 7: return 'C';   
   // case 6: return 'D';    
  //  case 5: return 'E';    
  //  default: return 'F';  
  //  }
//}
//char getResult(double average) {
   // if (average >= 50)
   //     return 'P';
  //  else
   //     return 'F';
//}
//void printResult(double average) {
   // char result = getResult(average);
   // /if (result == 'P')
     //   cout << "Congratulations!!! You Passed!!!" << endl;
    ///else
    //    cout << "Sorry!!! You Failed!!!" << endl;
//}
//int main() {
   // double mark, sum = 0;
  //  int count = 0;
  //  cout << "Enter marks (negative number to stop):" << endl;
  //  while (true) {
       // cin >> mark;
      //  if (mark < 0)
      //      break;
      //  sum += mark;
       // count++;
     //   cout << "Grade: " << getGrade(mark) << endl;
    //}
  //  double average = calculateAverage(sum, count);
  //  cout << "Average = " << average << endl;
    //printResult(average);
   // return 0;
//}



///////////////

أمور مدرسه


//#include <iostream>
//using namespace std;

//int main() {

    //int i = 0;

   // while (i <= 200) {
        //if (i % 2==0) {
          //  cout << i << endl;
        //}
      //  i++;
    //}

   // return 0;
 //}
//////////////////////////////
//#include <iostream>
//using namespace std;

//int main() {

    //double x, y, result;
    //char op;

    //cout << "اnum 1: ";
   // cin >> x;

    //cout << " (+  -  *  /): ";
    //cin >> op;

    //cout << "num 2: ";
   // cin >> y;

    //if (op == '+')
      //  result = x + y;
    //else if (op == '-')
      //  result = x - y;
    //else if (op == '*')
       // result = x * y;
    //else if (op == '/')
     //   result = x / y;
   // else {
        //cout << "eror" << endl;
      //  return 0;
    //}

    //cout << "ruslt = " << result << endl;

  //  return 0;
//}



#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter number of students: ";
    cin >> N;

    int mark;
    int passCount = 0, failCount = 0;
    int sum = 0;
    int minMark = 100, maxMark = 0;

    for (int i = 1; i <= N; i++) {
        cout << "Enter mark of student " << i << ": ";
        cin >> mark;

        // PASS or FAIL
        if (mark >= 50) {
            cout << "Student " << i << ": PASS\n";
            passCount++;
        }
        else {
            cout << "Student " << i << ": FAIL\n";
            failCount++;
        }

        // Sum
        sum += mark;

        // Minimum
        if (mark < minMark)
            minMark = mark;

        // Maximum
        if (mark > maxMark)
            maxMark = mark;
    }

    // Average
    double average = (double)sum / N;

    cout << "\n----- Results -----\n";
    cout << "Passed students: " << passCount << endl;
    cout << "Failed students: " << failCount << endl;
    cout << "Average mark: " << average << endl;
    cout << "Minimum mark: " << minMark << endl;
    cout << "Maximum mark: " << maxMark << endl;

    return 0;
}


//////////////////

#include <iostream>
using namespace std;

int main() {
    int mark;
    cout << "Enter your mark: ";
    if (!(cin >> mark)) {
        cout << "Invalid input." << endl;
        return 1;
    }

    if (mark < 0 || mark > 100) {
        cout << "Invalid mark. Please enter 0-100." << endl;
        return 1;
    }

    switch (mark / 10) {
    case 10:
    case 9:
        cout << "Grade: A" << endl;
        break;
    case 8:
        cout << "Grade: B" << endl;
        break;
    case 7:
        cout << "Grade: C" << endl;
        break;
    case 6:
        cout << "Grade: D+" << endl;
        break;
    case 5:
        cout << "Grade: D" << endl;
        break;
    default:
        cout << "Grade: F" << endl;
        break;
    }
    return 0;
}


//////////



البنك


#include <iostream>
#include <vector>
#include <string>

using namespace std;

class BankAccount {
private:
    int accNum;
    string name;
    double balance;

public:
    BankAccount(int num, string n, double b) {
        accNum = num;
        name = n;
        balance = b;
    }

    int getAccNum() {
        return accNum;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposit successful!\n";
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdraw successful!\n";
        }
        else {
            cout << "Insufficient balance!\n";
        }
    }

    void display() {
        cout << "\nAccount Number: " << accNum;
        cout << "\nName: " << name;
        cout << "\nBalance: " << balance << endl;
    }
};

int main() {

    vector<BankAccount> accounts;

    int choice;

    do {

        cout << "\n1.Create Account";
        cout << "\n2.Deposit";
        cout << "\n3.Withdraw";
        cout << "\n4.Show Account";
        cout << "\n5.Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1) {

            int num;
            string name;
            double bal;

            cout << "Account Number: ";
            cin >> num;

            cout << "Name: ";
            cin >> name;

            cout << "Initial Balance: ";
            cin >> bal;

            accounts.push_back(
                BankAccount(num, name, bal)
            );

        }

        else if (choice == 2) {

            int num;
            double amount;

            cout << "Enter account number: ";
            cin >> num;

            for (int i = 0; i < accounts.size(); i++) {

                if (accounts[i].getAccNum() == num) {

                    cout << "Amount: ";
                    cin >> amount;

                    accounts[i].deposit(amount);
                }
            }
        }

        else if (choice == 3) {

            int num;
            double amount;

            cout << "Enter account number: ";
            cin >> num;

            for (int i = 0; i < accounts.size(); i++) {

                if (accounts[i].getAccNum() == num) {

                    cout << "Amount: ";
                    cin >> amount;

                    accounts[i].withdraw(amount);
                }
            }
        }

        else if (choice == 4) {

            int num;

            cout << "Enter account number: ";
            cin >> num;

            for (int i = 0; i < accounts.size(); i++) {

                if (accounts[i].getAccNum() == num) {

                    accounts[i].display();
                }
            }
        }

    } while (choice != 5);

    return 0;
}


////////////////



لعبتي



#include <iostream>
#include <windows.h> 
#include <conio.h>   

using namespace std;

bool gameOver;
const int width = 20;
const int height = 10;
int x, y;
int obstacleX, obstacleY;
int score;
enum eDirection { STOP = 0, LEFT, RIGHT };
eDirection dir;

void Setup() {
    gameOver = false;
    dir = STOP;
    x = width / 2;
    y = height - 1;
    obstacleX = rand() % width;
    obstacleY = 0;
    score = 0;
}

void Draw() {
    system("cls");


    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {

            if (j == 0)
                cout << "#";


            if (i == y && j == x)
                cout << "0";


            else if (i == obstacleY && j == obstacleX)
                cout << "*";


            else
                cout << " ";


            if (j == width - 1)
                cout << "#";
        }
        cout << endl;
    }


    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;


    cout << "Score: " << score << endl;
}

void Input() {
    if (_kbhit()) {
        switch (_getch()) {
        case 'a':
            dir = LEFT;
            break;
        case 'd':
            dir = RIGHT;
            break;
        case 'x':
            gameOver = true;
            break;
        }
    }
}

void Logic() {
    switch (dir) {
    case LEFT:
        x--;
        break;
    case RIGHT:
        x++;
        break;
    }

    if (x < 1) x = 1;
    if (x > width - 2) x = width - 2;

    obstacleY++;


    if (obstacleY >= height) {
        score += 10;
        obstacleY = 0;
        obstacleX = rand() % width;

    }


    if (obstacleY == y && obstacleX == x) {
        gameOver = true;
        cout << "CAR CRASHED! GAME OVER" << endl;
    }
}

int main() {
    Setup();
    while (!gameOver) {
        Draw();
        Input();
        Logic();
        Sleep(100);
    }

    return 0;
}


/////////////////



سؤال البرايم بين رقمين






#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    cout << "Prime numbers  " << num1 << " and " << num2 << " are:" << endl;

    for (int i = num1; i <= num2; i++) {
        if (i < 2)
            continue;

        bool isPrsime = true;

        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrsime = false;
                break;
            }
        }

        if (isPrsime)
            cout << i << " ";
    }
    cout << "isPrsime" << endl;
    return 0;
}


///////////////////
