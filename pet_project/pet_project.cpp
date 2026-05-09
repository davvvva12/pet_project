// pet_project.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <functional>
#include <string>
#include <tuple>
#include <future>
#include <utility>
#include <typeinfo>
using namespace std;
void print(int a) {
    cout << a;
}
class Task_Manager {
public:
    Task_Manager() {

    }

    template< typename T, class ...F>
    void add_work(T(*func)(F...),F ... arg) {

        task_stack.push_back([=]() {
            func(arg...);
            });
    }
    void run() {
        for (auto x:task_stack) {
            x();
           }
       
    }
private: 
    
    vector<function<void()>> task_stack;

};
int main()
{
    int d = 0;
    Task_Manager obj;
    obj.add_work(print, d);
    obj.run();
}

