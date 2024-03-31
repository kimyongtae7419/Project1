//#include <iostream>
//
//#include <cstring>
//
//
//
//using namespace std;
//
//
//
//// 전체상품수량
//
//const int nItemCount = 5;
//
//// 제휴사카드할인율10%
//
//float fDiscountRate = 0.1f;
//
//// 총구매금액
//
//int nTotalPrice = 0;
//
//
//
//// 각상품에대한정보를가지고있는구조체
//
//struct Item {
//
//    string sName;
//
//    int nCode;
//
//    int nPrice;
//
//    int nDemand;
//
//} ITEM[nItemCount];
//
//
//
//// 특정상품의정보를기록
//
//void SetItem(Item* item, string name, int code, int price, int demand);
//
//// 특정상품의구매수량을기록
//
//void SetDemand(Item* item, int demand);
//
//// 전체상품정보입력
//
//void SetAllItems();
//
//// 상품목록진열
//
//void DisplayItems();
//
//// 상품갯수를입력
//
//int GetNumberOfItems();
//
//// 상품코드입력
//
//void GetItemCodes(int items[], int no);
//
//// 각상품의구매량입력
//
//void GetDemands(int items[], int no);
//
//// 현재구매목록출력(nDemand = 0 인것만출력)
//
//void DisplaySelected();
//
//// 총구매금액계산
//
//void CalculateTotalPrice();
//
//// 상품카드보유여부확인
//
//bool HasDiscountCard();
//
//// 할인율적용상품가격재계산
//
//void CalculateDiscountRatio();
//
//// 최종가격을출력
//
//void DisplayTotalPrice();
//
//
//
//int main() {
//
//
//
//    char cContinue;
//
//
//
//    do {
//
//        system("cls");
//
//
//
//        int nItems = 0;
//
//        int nItemCodes[nItemCount] = { 0 };
//
//        nTotalPrice = 0;
//
//
//
//        // 모든상품정보초기화
//
//        SetAllItems();
//
//
//
//        // 전체상품정보를보여줌
//
//        DisplayItems();
//
//
//
//        // 상품종류입력
//
//        nItems = GetNumberOfItems();
//
//
//
//        // 상품코드입력
//
//        GetItemCodes(nItemCodes, nItems);
//
//
//
//        // 구매량입력
//
//        GetDemands(nItemCodes, nItems);
//
//
//
//        // 현재구매목록출력
//
//        DisplaySelected();
//
//
//
//        // 총구매금액계산
//
//        CalculateTotalPrice();
//
//
//
//        // 카드를가지고있을경우가격재계산
//
//        if (HasDiscountCard()) {
//
//            CalculateDiscountRatio();
//
//        }
//
//
//
//        // 최종계산결과를출력
//
//        DisplayTotalPrice();
//
//
//
//        cout << "쇼핑을계속하시겠습니까? ";
//
//        cin >> cContinue;
//
//    } while (cContinue == 'y');
//
//
//
//    return 0;
//
//}
//
//
//
//void SetItem(Item* item, string name, int code, int price, int demand) {
//
//    item->sName = name;
//
//    item->nCode = code;
//
//    item->nPrice = price;
//
//    item->nDemand = demand;
//
//}
//
//
//
//void SetItem(Item* item, int demand) {
//
//    item->nDemand = demand;
//
//}
//
//
//
//void SetAllItems() {
//
//    SetItem(&ITEM[0], "T-Shirt", 21, 2000, 0);
//
//    SetItem(&ITEM[1], "Skirt", 22, 3000, 0);
//
//    SetItem(&ITEM[2], "Jean", 23, 3000, 0);
//
//    SetItem(&ITEM[3], "Dress", 24, 5000, 0);
//
//    SetItem(&ITEM[4], "Shoes", 25, 1000, 0);
//
//}
//
//
//
//void DisplayItems() {
//
//    cout << "-----------------------------------------------------------" << endl;
//
//    cout << " 쇼핑몰상품정보" << endl;
//
//    cout << "-----------------------------------------------------------" << endl;
//
//    for (int i = 0; i < nItemCount; i++) {
//
//        cout << "\t" << ITEM[i].sName << "(" << ITEM[i].nCode << ")\t\t" << ITEM[i].nPrice << " 원" << endl;
//
//    }
//
//    cout << "-----------------------------------------------------------" << endl << endl;
//
//}
//
//
//
//int GetNumberOfItems() {
//
//    int items;
//
//    bool bContinue = true;
//
//    while (bContinue) {
//
//        cout << "몇종류의상품을구입하시겠습니까? ";
//
//        cin >> items;
//
//        if ((items <= 0) || (items > nItemCount)) {
//
//            cout << "상품수가너무많습니다." << endl;
//
//            bContinue = true;
//
//        }
//
//        else
//
//            bContinue = false;
//
//    }
//
//    return items;
//
//}
//
//
//
//void GetItemCodes(int items[], int no) {
//
//    cout << "\n\n구매를원하는상품코드를입력하십시오. " << endl;
//
//    bool bContinue;
//
//    for (int i = 0; i < no; i++) {
//
//        bContinue = true;
//
//        while (bContinue) {
//
//            cin >> items[i];
//
//            if ((items[i] < 21) || (items[i] > 25)) {
//
//                cout << "없는상품입니다." << endl;
//
//                bContinue = true;
//
//            }
//
//            else
//
//                bContinue = false;
//
//        }
//
//    }
//
//    cout << endl;
//
//}
//
//
//
//void GetDemands(int items[], int no) {
//
//    for (int i = 0; i < no; i++) {
//
//        switch (items[i]) {
//
//        case 21:
//
//            cout << "T-Shirt 구매량: "; cin >> ITEM[0].nDemand;
//
//            break;
//
//        case 22:
//
//            cout << "Skirt 구매량: "; cin >> ITEM[1].nDemand;
//
//            break;
//
//        case 23:
//
//            cout << "Jean 구매량: "; cin >> ITEM[2].nDemand;
//
//            break;
//
//        case 24:
//
//            cout << "Dress 구매량: "; cin >> ITEM[3].nDemand;
//
//            break;
//
//        case 25:
//
//            cout << "Shoes 구매량: "; cin >> ITEM[4].nDemand;
//
//            break;
//
//        default:
//
//            break;
//
//        }
//
//    }
//
//    cout << endl;
//
//}
//
//
//
//void DisplaySelected() {
//
//    cout << "\n현재구매하시려는목록은아래와같습니다." << endl;
//
//    for (int i = 0; i < nItemCount; i++) {
//
//        if (ITEM[i].nDemand != 0)
//
//            cout << "\t" << ITEM[i].sName << "\t\t" << ITEM[i].nPrice << " 원\t" << ITEM[i].nDemand << " 개" << endl;
//
//    }
//
//    cout << endl;
//
//}
//
//
//
//void CalculateTotalPrice() {
//
//    for (int i = 0; i < nItemCount; i++) {
//
//        nTotalPrice += ITEM[i].nPrice * ITEM[i].nDemand;
//
//    }
//
//}
//
//
//
//bool HasDiscountCard() {
//
//    // 할인카드여부확인
//
//    char cAnswer;
//
//    do {
//
//        cout << "할인카드를가지고있나요?" << endl;
//
//        cout << "(Sxxx카드/Mxxx카드/Hxxx카드만됩니다.)" << endl;
//
//        cin >> cAnswer;
//
//    } while (!((cAnswer == 'y') || (cAnswer == 'n')));
//
//
//
//    if (cAnswer == 'y')
//
//        return true;
//
//    else
//
//        return false;
//
//}
//
//
//
//void CalculateDiscountRatio() {
//
//    nTotalPrice *= (1.0f - fDiscountRate);
//
//}
//
//
//
//void DisplayTotalPrice() {
//
//    cout << "-----------------------------------------------------------" << endl;
//
//    cout << " 총결재금액은" << nTotalPrice << " 원입니다." << endl;
//
//    cout << "-----------------------------------------------------------" << endl;
//
//    cout << endl;
//
//}