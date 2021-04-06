//HW2 //main
#include <iostream>
using namespace std;

#include "hw2.h"

int main() {

    //범위 입력
    int Length, width;
    cout << "Input Length : ";
    cin >> Length;
    cout << "Input width : ";
    cin >> width;

    //점의 개수 입력
    int dot_num;
    do { // 홀수 개 입력시 선 매칭x 방지
        cout << "Input number of points : ";
        cin >> dot_num;
        cout << endl;
        if (dot_num % 2 != 0) cout << "Error!" << endl;
    } while (dot_num % 2 != 0);

    //object
    pointdist kp(Length, width, dot_num);
    kp.Random_dot();
    kp.dist_line();

    //Display
    cout << "<Result>" << endl;
    cout << "MAX distance : " << kp.MAX_D << endl;
    cout << "First MAX x,y coordinates : " << kp.MAX_P_a.x << ", " << kp.MAX_P_a.y << endl;
    cout << "Second MAX x,y coordinates : " << kp.MAX_P_b.x << ", " << kp.MAX_P_b.y << endl << endl;

    cout << "MIN distance : " << kp.MIN_D << endl;
    cout << "First MIN x,y coordinates : " << kp.MIN_P_a.x << ", " << kp.MIN_P_a.y << endl;
    cout << "Second MIN x,y coordinates : " << kp.MIN_P_b.x << ", " << kp.MIN_P_b.y << endl << endl;

}
