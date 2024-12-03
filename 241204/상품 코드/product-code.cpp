#include <iostream>
#include <string>
using namespace std;

class Product {
    public:
        string productName;
        int productCode;
        Product(string productName = "codetree", int productCode = 50) {
            this->productName = productName;
            this->productCode = productCode;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.
    string name;
    int code;
    cin >> name >> code;
    Product product1;
    Product product2 = Product(name, code);
    cout << "product " << product1.productCode << " is " << product1.productName << endl;
    cout << "product " << product2.productCode << " is " << product2.productName;
    return 0;
}