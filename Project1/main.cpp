#include<iostream>
#include<vector>

using namespace std;

class Animal {
public:
	static int num_of_AniAndDog;      //�������ڼ�¼Animal��Dog�����ľ�̬����

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

int Animal::num_of_AniAndDog=0;   //��ʼ��

int main() 
{
	int N;               //����������N
	cin >> N;

	vector<Animal*> V;       //������ŵĶ�̬����

	for (int i = 0; i < N; i++){       //��ָ�벢��new�Ͳ���ÿ��ѭ������������
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