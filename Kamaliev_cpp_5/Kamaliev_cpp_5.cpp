#include "BinaryTree.h"
int main() {
    setlocale(LC_ALL, "Russian");
    // Добавление элементов и вывод дерева
    vector<bool> arr1{};
    BinaryTree binaryTree1(2);
    try {
        arr1.push_back(false);
        binaryTree1.insert(4, arr1);
        arr1.push_back(false);
        binaryTree1.insert(8, arr1);
        arr1.push_back(true);
        binaryTree1.insert(93, arr1);
        arr1.pop_back();
        arr1.push_back(true);
        arr1.push_back(true);
        arr1.push_back(true);
        arr1.push_back(true);
        binaryTree1.insert(13, arr1);
    }
    catch (exception& ex) {
        cout << "Ошибка добавления элемента!" << endl;
    }

    cout << "Дерево:" << endl;
    std::cout << binaryTree1;

    BinaryTree testBinT = binaryTree1;
    cout << "Его брат близнец" << endl;
    std::cout << testBinT;

    cout  << endl;
    cout << "Пришла осень, листики опали:" << endl;
    binaryTree1.deleteLeaves();
    std::cout << binaryTree1;

    cout  << endl;
    cout << "Другой близнец из их деревянной семьи" << endl;
    BinaryTree bin(binaryTree1);
    cout << bin << endl;

    

    cout  << endl;
    cout << "Пришли лесорубы:" << endl;
    std::cout << binaryTree1;
    binaryTree1.clear();
    std::cout << binaryTree1 << " <- здесь ничего не дложно быть" << endl;


    vector<bool> arr2{};
    BinaryTree binaryTree2(42);

    try {
        arr2.push_back(true);
        binaryTree2.insert(16, arr2);
        arr2.pop_back();
        arr2.push_back(false);
        binaryTree2.insert(2, arr2);
        arr2.push_back(false);
        binaryTree2.insert(5, arr2);
    }
    catch (exception& ex) {
        cout << "Ошибка добавления элемента!" << endl;
    }

    cout << "Четных чисел в дереве: ";
    cout << binaryTree2.countOfEven() << endl; //3
    cout << "Среднее арифметическое чисел в дереве: ";
    cout << binaryTree2.average() << endl; //16.25
    cout << "Все ли положительные: ";
    cout << binaryTree2.allPositive() << endl;

    cout << "Добавляем отрицательное число : -1" << endl;
    binaryTree2.insert(-1, arr2);
    cout << "А теперь, все ли положительные: ";
    cout << binaryTree2.allPositive() << endl;

    cout << endl;
    vector<bool> arr4{};
    BinaryTree binaryTree5;

    try {
        binaryTree5.insert(1, arr4);
        arr4.push_back(false);
        binaryTree5.insert(2, arr4);
        arr4.push_back(false);
        binaryTree5.insert(-1, arr4);
        arr4.pop_back();
        arr4.push_back(true);
        binaryTree5.insert(22, arr4);
        arr4.push_back(true);
        binaryTree5.insert(324, arr4);
    }
    catch (exception& ex) {
        cout << "Ошибка добавления элемента!" << endl;
    }

    cout << binaryTree5 << endl;

    cout  << endl;
    arr4.clear();

    try {
        arr4.push_back(true);
        binaryTree5.insert(11, arr4);
        arr4.push_back(true);
        binaryTree5.insert(20, arr4);
        arr4.push_back(false);
        binaryTree5.insert(666, arr4);
    }
    catch (exception& ex) {
        cout << "Ошибка добавления элемента!" << endl;
    }

    cout << binaryTree5 << endl;

    cout  << endl;
    cout << "Поиск заданного элемента в дереве: ";
    arr4.clear();

    try {
        arr4.push_back(true);
        arr4.push_back(true);
        arr4.push_back(false);
    }
    catch (exception& ex) {
        cout << "Ошибка поиска элемента!" << endl;
    }

    vector<bool> bArr = binaryTree5.searchElem(666);
    if (arr4 == bArr) {
        cout << true << endl;
    }


}