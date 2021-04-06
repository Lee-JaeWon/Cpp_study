//구조체, class 선언부
#ifndef HW2_H_
#define HW2_H_

struct KPOINT {
    int x; //x좌표
    int y; //y좌표
};

class pointdist {
private:
    int Length; //가로 길이(범위)
    int width; //세로 길이(범위)
    int dot_num; //점의 개수

    KPOINT* p;
    double* Line; // 추출한 선분 길이
public:
    KPOINT MAX_P_a, MAX_P_b; //최댓값일때의 좌표
    KPOINT MIN_P_a, MIN_P_b; //최솟값일때의 좌표
    double MAX_D; //최댓값
    double MIN_D; //최솟값

    pointdist();
    pointdist(const int Length, const int width, const int dot_num);
    ~pointdist();
    void Random_dot(); //무작위 점(x, y) 추출
    void dist_line(); //
};

#endif // HW2_H_
