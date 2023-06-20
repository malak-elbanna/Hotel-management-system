#include <iostream>
#include <string>
using namespace std;

class Promotion
{
    private:
        double promotionPercentage, price, priceAfterPromotion;
        string code;
    public:
        Promotion() : promotionPercentage(0) {};
        double PriceAfterPromotion(double promotionPercentage, double price) {
            priceAfterPromotion = price - ((promotionPercentage / 100) * price);
            return priceAfterPromotion;
        }
        void setPercentage(double promotionPercentage) {
            this->promotionPercentage = promotionPercentage;
        }
        double getPercentage() {
            return promotionPercentage;
        }
        void Code(string code)
        {
            if (code == "A2066L") {
                setPercentage(15.0);
            }
            else if (code == "M2102s") {
                setPercentage(30.0);
            }
            else if (code == "N5121s") {
                setPercentage(20.0);
            }
            else if (code == "A1151s") {
                setPercentage(25.0);
            }
        }
};

int main()
{
    //Promotions
    string promo;
    cout << "Do you have a promotion code? (yes/no)";
    cin >> promo;
    int price = 101;
    if (promo == "yes") {
        Promotion person5;
        string promoCode;
        cin >> promoCode;
        if (promoCode == "A2066L") {
            person5.Code(promoCode);
            cout << "Your code is A2066L with a " << person5.getPercentage() << "% OFF"<<endl;
        }
        else if (promoCode == "M2102s") {
            person5.Code(promoCode);
            cout << "Your code is M2102s with a " << person5.getPercentage() << "% OFF" << endl;
        }
        else if (promoCode == "N5121s") {
            person5.Code(promoCode);
            cout << "Your code is N5121s with a " << person5.getPercentage() << "% OFF" << endl;
        }
        else if (promoCode == "A1151s") {
            person5.Code(promoCode);
            cout << "Your code is A1151s with a " << person5.getPercentage() << "% OFF" << endl;
        }
        else {
            cout << "The code is invalid." << endl;
        }
        double percent;
        double price_After_code;
        percent = person5.getPercentage();
        price_After_code = person5.PriceAfterPromotion(percent, price);//cost of the room)
    }
}