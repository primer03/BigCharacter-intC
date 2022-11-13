#include <iostream>
#include <sstream>
#include <Windows.h>
using namespace std;

HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

string number2(string nums,int co){
    int intwo;
    string strnumb = "";
    string one[10] = {"##########","##","##########","###    ###", "##########", "##########", "##########", "##########", "##########", "##########"};
    string two[10] = {"##########","##","##########","###    ###", "##########", "##########", "##########", "##########", "##########", "##########"};
    string three[10] = {"       ###","##","       ###","###    ###", "###       ", "###       ", "       ###", "###    ###", "###    ###", "###    ###"};
    string four[10] = {"       ###","##","       ###","###    ###", "###       ", "###       ", "       ###", "###    ###", "###    ###", "###    ###"};
    string five[10] = {"##########","##","##########","##########", "##########", "##########", "       ###", "##########", "##########", "###    ###"};
    string six[10] = {"##########","##","##########","##########", "##########", "##########", "       ###", "##########", "##########", "###    ###"};
    string seven[10] = {"###       ","##","       ###","       ###", "       ###", "###    ###", "       ###", "###    ###", "       ###", "###    ###"};
    string eight[10] = {"###       ","##","       ###","       ###", "       ###", "###    ###", "       ###", "###    ###", "       ###", "###    ###"};
    string nine[10] = {"##########","##","##########","       ###", "##########", "##########", "       ###", "##########", "       ###", "##########"};
    string zero[10] = {"##########","##","##########","       ###", "##########", "##########", "       ###", "##########", "       ###", "##########"};
    string strsumnum[10];
    stringstream dd;
    dd << nums;
    dd >> intwo;
    if(intwo == 2){
        strsumnum[0] = one[0];
        strsumnum[1] = two[0] ;
        strsumnum[2] = three[0];
        strsumnum[3] = four[0];
        strsumnum[4] = five[0];
        strsumnum[5] = six[0];
        strsumnum[6] = seven[0];
        strsumnum[7] = eight[0];
        strsumnum[8] = nine[0];
        strsumnum[9] = zero[0];
    }else if(intwo == 1){
        strsumnum[0] = one[1];
        strsumnum[1] = two[1];
        strsumnum[2] = three[1];
        strsumnum[3] = four[1];
        strsumnum[4] = five[1];
        strsumnum[5] = six[1];
        strsumnum[6] = seven[1];
        strsumnum[7] = eight[1];
        strsumnum[8] = nine[1];
        strsumnum[9] = zero[1];
    }else if(intwo == 3){
        strsumnum[0] = one[2];
        strsumnum[1] = two[2];
        strsumnum[2] = three[2];
        strsumnum[3] = four[2];
        strsumnum[4] = five[2];
        strsumnum[5] = six[2];
        strsumnum[6] = seven[2];
        strsumnum[7] = eight[2];
        strsumnum[8] = nine[2];
        strsumnum[9] = zero[2];
    }else if(intwo == 4){
        strsumnum[0] = one[3];
        strsumnum[1] = two[3];
        strsumnum[2] = three[3];
        strsumnum[3] = four[3];
        strsumnum[4] = five[3];
        strsumnum[5] = six[3];
        strsumnum[6] = seven[3];
        strsumnum[7] = eight[3];
        strsumnum[8] = nine[3];
        strsumnum[9] = zero[3];
    }else if(intwo == 5){
        strsumnum[0] = one[4];
        strsumnum[1] = two[4];
        strsumnum[2] = three[4];
        strsumnum[3] = four[4];
        strsumnum[4] = five[4];
        strsumnum[5] = six[4];
        strsumnum[6] = seven[4];
        strsumnum[7] = eight[4];
        strsumnum[8] = nine[4];
        strsumnum[9] = zero[4];
    }else if(intwo == 6){
        strsumnum[0] = one[5];
        strsumnum[1] = two[5];
        strsumnum[2] = three[5];
        strsumnum[3] = four[5];
        strsumnum[4] = five[5];
        strsumnum[5] = six[5];
        strsumnum[6] = seven[5];
        strsumnum[7] = eight[5];
        strsumnum[8] = nine[5];
        strsumnum[9] = zero[5];
    }
    else if(intwo == 7){
        strsumnum[0] = one[6];
        strsumnum[1] = two[6];
        strsumnum[2] = three[6];
        strsumnum[3] = four[6];
        strsumnum[4] = five[6];
        strsumnum[5] = six[6];
        strsumnum[6] = seven[6];
        strsumnum[7] = eight[6];
        strsumnum[8] = nine[6];
        strsumnum[9] = zero[6];
    }else if(intwo == 8){
        strsumnum[0] = one[7];
        strsumnum[1] = two[7];
        strsumnum[2] = three[7];
        strsumnum[3] = four[7];
        strsumnum[4] = five[7];
        strsumnum[5] = six[7];
        strsumnum[6] = seven[7];
        strsumnum[7] = eight[7];
        strsumnum[8] = nine[7];
        strsumnum[9] = zero[7];
    }else if(intwo == 9){
        strsumnum[0] = one[8];
        strsumnum[1] = two[8];
        strsumnum[2] = three[8];
        strsumnum[3] = four[8];
        strsumnum[4] = five[8];
        strsumnum[5] = six[8];
        strsumnum[6] = seven[8];
        strsumnum[7] = eight[8];
        strsumnum[8] = nine[8];
        strsumnum[9] = zero[8];
    }else if(intwo == 0){
        strsumnum[0] = one[9];
        strsumnum[1] = two[9];
        strsumnum[2] = three[9];
        strsumnum[3] = four[9];
        strsumnum[4] = five[9];
        strsumnum[5] = six[9];
        strsumnum[6] = seven[9];
        strsumnum[7] = eight[9];
        strsumnum[8] = nine[9];
        strsumnum[9] = zero[9];
    }
    return strsumnum[co];
}

int main(){
    string stri,str1,str2;
    char bigint[10] = {};
    string strnums[10][10] = {};
    string strn;
    cout << "Enter Number : ";
    cin >> strn;
    string strco;

    for (int i = 0; i < 10; i++)
    {
       for (int j = 0; j < strn.size(); j++)
       {
        strco = strn[j];
        strnums[i][j] = number2(strco,i);
        SetConsoleTextAttribute(h,6);
        cout << strnums[i][j] << " ";
       }
       cout << endl;
    }
    SetConsoleTextAttribute(h,7);
}