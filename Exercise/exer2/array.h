#pragma once

template<typename T >
class Array {
private:
	T* data_;   //�������������Ԫ�ص��ڴ���׵�ַ
	int size_;   //������Ԫ�ص�����
public:
    Array(std::vector<T> v);
    ~Array();           // �����������ͷ��Ѿ����뵽���ڴ�
    void sort();        // ���򣬽�����������Ԫ����С��������
    int seek(T key);    // ����ָ����Ԫ��key������������λ�ã�λ�ñ�Ŵ�0��ʼ��; ���û���ҵ����򷵻� -1
    void display();    //���Array
};
template<typename T>
Array<T>::Array(std::vector<T> v) {
    size_ = v.size();
    data_ = static_cast<T*> (new T[size_]);
    for (int i = 0; i < size_; i++) {
        data_[i] = v[i];
    }
}
template<typename T>
Array<T>::~Array() {
    delete[]data_;
}

template<typename T>
void Array<T>::sort() {
    for (int i = 0; i < size_ - 1; i++) {
        T min = data_[i];
        int min_index = i;
        for (int j = i + 1; j < size_; j++) {
            if (min > data_[j]) {
                min = data_[j];
                min_index = j;
            }
        }
        data_[min_index] = data_[i];
        data_[i] = min;
    }
}

template<typename T>
int Array<T>::seek(T key) {
    for (int i = 0; i < size_; i++) {
        if (data_[i] == key)
            return i;
    }
    return -1;
}

template<typename T>
void Array<T>::display() {
    int i;
    for (i = 0; i < size_; i++) {
        std::cout << data_[i];
        if (i != size_ - 1)
            std::cout << " ";  // ���һ���ո�
    }
}