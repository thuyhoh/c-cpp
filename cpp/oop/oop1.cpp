#include <bits/stdc++.h>

using namespace std;

// lớp được coi là một kiểu đối tượng do người dùng thiết lập
// khai báo và sử dụng giống như các kiểu dữ liệu nguyên thủy

/*  syntax:
    class<class_name>{
        private:
            <kiêu dữ liệu> tên thuộc tính từng lớp;
        public:
            <kiểu dữ liệu> Khai báo các phương thức thuộc tính của đối tượng;
    };
    <định nghĩa các phương thức được khai báo trong lớp>


*/

// ex1: tạo lớp điểm trong Oxy 

class point{
    private:
        float x;
        float y;
    public:
        void khoitao(float Ax, float Ay);
        void nhap();
        void xuat();
        void DiChuyen(float dx, float dy);
};

/*  Note:
    - thuộc tính được khai báo giống như biến 
    - các thuộc tính được liệt kê sau từ khóa private và chỉ được sử dụng bởi các phương thức trong lớp đó
    - phương thức được khai báo giống như hàm trong c
    - các phương thức được liệt kê sau từ khóa public có thể được truy cập bởi bất cứ hàm nào trong lớp hoặc ngoài lớp
*/

void point::khoitao(float Ax,float Ay){
    x = Ax;
    y = Ay;
}

void point:: nhap(void){
    cout << "nhap toa do"<< endl;
    cin >> x >> y;
}

void point:: xuat(void){
    cout << "( " << x << ", "<< y << " )"; 
}

void point::DiChuyen(float dx, float dy){
    x += dx;
    y += dy;
}

int main(void){


    return 0;
}
