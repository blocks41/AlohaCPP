#pragma once

template<typename T >
class Array {
private:
	T* data_;   //存放数组中所有元素的内存的首地址
	int size_;   //数组中元素的数量
public:
    Array(std::vector<T> v);
    ~Array();           // 析构函数，释放已经申请到的内存
    void sort();        // 排序，将数组中所有元素由小到大排序
    int seek(T key);    // 查找指定的元素key，返回其所在位置（位置编号从0开始）; 如果没有找到，则返回 -1
    void display();    //输出Array
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
            std::cout << " ";  // 输出一个空格
    }
}