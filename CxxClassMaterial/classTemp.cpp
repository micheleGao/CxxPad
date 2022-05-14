#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

class Myclass{
    public:
    int x;
    Myclass(int x){
        this->x= x;
    }
    // bool operator <(Myclass& rop){
    //    return false;
    // }
    bool operator <(Myclass& rop){
       return x < rop.x;
    }
};

void countDown(int n){
    while (n >0){
        cout << n <<endl;
        --n;
    }
}
void countDownRec(int n){
    if (n ==0)
        return;
    else{
        cout << n <<endl;
        countDownRec(--n);
    }
}


// template <class T>
// class MathOp {
// public: 
//     T min(T x, T y);
//     T max(T x, T y){
//         return x > y ? x:y;
//     }
// };
// template <class T>
// T MathOp<T> :: min 
int main(){

    countDownRec(10);

    vector<Myclass>myVec;
    myVec.push_back( Myclass(9));
    // vector<Myclass>::iterator iter= myVec.begin();
    // while(iter != myVec.end()){
    //     cout <<iter->x << "";
    //     ++iter;
    // }
    vector<int> vec;
    // list <int> vec
    vec.push_back(88);
    vec.push_back(0);
    vec.push_back(9);
    vec.push_back(8);
    vec.push_back(18);
    cout <<vec[2]<<endl;
    vector<int>::iterator iter=vec.begin();
    while (iter != vec.end()){
        cout << *iter << " " << endl;
        ++iter;
    }
    cout << "capacity: "<< vec.capacity()<<endl;
    cout << "size:" << vec.size()<<endl;

    for (int i =0; i< vec.size(); i++){
        cout << vec[i] << " ";
    }

    for(int val : vec)
        cout << val << "" <<endl;

    return 0;

    cout << *max_element(vec.begin(), vec.end()) << endl;
    cout << *max_element(vec.begin(), vec.end()-2) << endl;
    sort(vec.begin(),vec.end());
    find(vec.begin(), vec.end(), 10) ;
    random_shuffle(vec.begin(), vec.end());
}

