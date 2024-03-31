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
//// ��ü��ǰ����
//
//const int nItemCount = 5;
//
//// ���޻�ī��������10%
//
//float fDiscountRate = 0.1f;
//
//// �ѱ��űݾ�
//
//int nTotalPrice = 0;
//
//
//
//// ����ǰ�������������������ִ±���ü
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
//// Ư����ǰ�����������
//
//void SetItem(Item* item, string name, int code, int price, int demand);
//
//// Ư����ǰ�Ǳ��ż��������
//
//void SetDemand(Item* item, int demand);
//
//// ��ü��ǰ�����Է�
//
//void SetAllItems();
//
//// ��ǰ�������
//
//void DisplayItems();
//
//// ��ǰ�������Է�
//
//int GetNumberOfItems();
//
//// ��ǰ�ڵ��Է�
//
//void GetItemCodes(int items[], int no);
//
//// ����ǰ�Ǳ��ŷ��Է�
//
//void GetDemands(int items[], int no);
//
//// ���籸�Ÿ�����(nDemand = 0 �ΰ͸����)
//
//void DisplaySelected();
//
//// �ѱ��űݾװ��
//
//void CalculateTotalPrice();
//
//// ��ǰī�庸������Ȯ��
//
//bool HasDiscountCard();
//
//// �����������ǰ��������
//
//void CalculateDiscountRatio();
//
//// �������������
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
//        // ����ǰ�����ʱ�ȭ
//
//        SetAllItems();
//
//
//
//        // ��ü��ǰ������������
//
//        DisplayItems();
//
//
//
//        // ��ǰ�����Է�
//
//        nItems = GetNumberOfItems();
//
//
//
//        // ��ǰ�ڵ��Է�
//
//        GetItemCodes(nItemCodes, nItems);
//
//
//
//        // ���ŷ��Է�
//
//        GetDemands(nItemCodes, nItems);
//
//
//
//        // ���籸�Ÿ�����
//
//        DisplaySelected();
//
//
//
//        // �ѱ��űݾװ��
//
//        CalculateTotalPrice();
//
//
//
//        // ī�带������������찡������
//
//        if (HasDiscountCard()) {
//
//            CalculateDiscountRatio();
//
//        }
//
//
//
//        // ��������������
//
//        DisplayTotalPrice();
//
//
//
//        cout << "����������Ͻðڽ��ϱ�? ";
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
//    cout << " ���θ���ǰ����" << endl;
//
//    cout << "-----------------------------------------------------------" << endl;
//
//    for (int i = 0; i < nItemCount; i++) {
//
//        cout << "\t" << ITEM[i].sName << "(" << ITEM[i].nCode << ")\t\t" << ITEM[i].nPrice << " ��" << endl;
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
//        cout << "�������ǻ�ǰ�������Ͻðڽ��ϱ�? ";
//
//        cin >> items;
//
//        if ((items <= 0) || (items > nItemCount)) {
//
//            cout << "��ǰ�����ʹ������ϴ�." << endl;
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
//    cout << "\n\n���Ÿ����ϴ»�ǰ�ڵ带�Է��Ͻʽÿ�. " << endl;
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
//                cout << "���»�ǰ�Դϴ�." << endl;
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
//            cout << "T-Shirt ���ŷ�: "; cin >> ITEM[0].nDemand;
//
//            break;
//
//        case 22:
//
//            cout << "Skirt ���ŷ�: "; cin >> ITEM[1].nDemand;
//
//            break;
//
//        case 23:
//
//            cout << "Jean ���ŷ�: "; cin >> ITEM[2].nDemand;
//
//            break;
//
//        case 24:
//
//            cout << "Dress ���ŷ�: "; cin >> ITEM[3].nDemand;
//
//            break;
//
//        case 25:
//
//            cout << "Shoes ���ŷ�: "; cin >> ITEM[4].nDemand;
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
//    cout << "\n���籸���Ͻ÷��¸�����Ʒ��Ͱ����ϴ�." << endl;
//
//    for (int i = 0; i < nItemCount; i++) {
//
//        if (ITEM[i].nDemand != 0)
//
//            cout << "\t" << ITEM[i].sName << "\t\t" << ITEM[i].nPrice << " ��\t" << ITEM[i].nDemand << " ��" << endl;
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
//    // ����ī�忩��Ȯ��
//
//    char cAnswer;
//
//    do {
//
//        cout << "����ī�带�������ֳ���?" << endl;
//
//        cout << "(Sxxxī��/Mxxxī��/Hxxxī�常�˴ϴ�.)" << endl;
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
//    cout << " �Ѱ���ݾ���" << nTotalPrice << " ���Դϴ�." << endl;
//
//    cout << "-----------------------------------------------------------" << endl;
//
//    cout << endl;
//
//}