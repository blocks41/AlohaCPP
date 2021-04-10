#include<iostream>
#include<vector>

using namespace std;

class Animal {
public:
	static int num_of_AniAndDog;      //创建用于记录Animal和Dog数量的静态变量

	Animal(){
		std::cout << "Animal" << std::endl;
		num_of_AniAndDog++;
	}
	~Animal() {
		num_of_AniAndDog--;
	}

	virtual void speak() {};
};

class Dog:public Animal {
public:
	Dog(){
		std::cout << "Dog"<<std::endl ;
	}
	void speak() override{
		cout << "wang" << endl;
	}
};

class Cat :public Animal {
public:
	Cat() {
		std::cout << "Cat" << std::endl;
	}
	void speak() override {
		cout << "miao" << endl;
	}
};

int Animal::num_of_AniAndDog=0;   //初始化

int main() 
{
	int N;               //创建的数量N
	cin >> N;

	vector<Animal*> V;       //用来存放的动态数组

	for (int i = 0; i < N; i++){       //用指针并且new就不会每次循环都调用析构
		Dog* a=new Dog;
		Cat* b = new Cat;
		V.push_back(a);
		V.push_back(b);
	}

	for (int i = 0; i < 2*N; i++) {
		V[i]->speak();
		delete V[i];
	}

	return 0;
}