// pet_project.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <functional>
using namespace std;
template<typename F>
class Task_Manager {
public:
    Task_Manager() {

    }
    void add_work(functional<F> a) {

    }

private:
    vector<functional<F>> task_stack;
};
int main()
{
    std::cout << "Hello World!\n";
}

