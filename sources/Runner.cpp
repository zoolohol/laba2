//Copyright 2019 <LinkIvan333>

#include <Runner.hpp>
void Runner::cache_levels(vector <int> &levels){
    int size;
    std::cout<<"Введите количество уровней кэша ";
    std::cin>>size;
    int *arr=new int[size];
    for(int i=0;i<size;i++){
        std::cout << "№" << i + 1 << " Размер уровня = ";
        std::cin >> arr[i];
    }
    levels.resize(size+2);
    levels[0]=arr[0]/2;
    levels[levels.size()-1]=arr[size-1]*3/2;
    for(unsigned int i=1;i<(levels.size()-1);i++){
        levels[i]=arr[i-1];
    }
    delete[] arr;
    int i=0;
    for(auto& e: levels) {
        std::cout << "№" << i + 1 << " Level's size = "<<e<<" "<<std::endl;
        i++;
    }
}
void Runner::create(vector<int> &level, int size) {
    level.resize(size * 1024 * 1024 * sizeof(int));
    for (int i = 0; i < 1000; i++) {
        level[i] = rand() % 1000;
    }
}
