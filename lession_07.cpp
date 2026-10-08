#include <iostream>
#include <string>

using namespace std;

int main()
{
    //tim hieu ve vong lap while
    // in ra bang cuu chuong cua mot so tu nhien 1 - 10;
    int k = 5; // hien thi bang cuu chuong cua 5;
    // ban chat thuc thi cac phep nhan tu 1 den 10 voi 5
    int i = 1; // bien chay, giong nhu  diem bat dau trong vong lap for
    // vong lap kiem tra dieu kien truoc (PHAI KIEM TRA DIEU KIEN TRUOC, XEM DIEU KIEN CO THOA MAN KHONG MOI THUC THI VONG LAP)
    // neu dieu kien luon dung thi vong lap se lap lai vo han
    // neu dieu kien sai se khong khong thuc thi lan nao ca va thoat khoi vong lap while
    while (i <= 10) 
    {
        /*
        +/ i <= 10: dieu kien de thuc thi vong lap
        +/ neu dieu kien dung thi vong lap moi duoc thuc thi va nguoc lai 
        */
        cout << k << " x " << i << " = " << k * i << endl; // in bang cuu chuong cua 5
        i++; // tang gia tri cua i len sua moi lan thuc thi vong lap while (bat buoc phai co)

    }
    // tinh tong cac so tu nhien tu 1 den n (n la so tu nhien bat ky)
    // n = 10; 1+2+3+4+5+6+7+8+9+10 = 55
    int n;
    cout << "Nhap vao so tu nhien n: ";
    cin >> n; // nhap vao so tu nhien n
    int sum = 0;
    int j = 1; // bien chay


    while ( j <=n ) 
    {
        sum += j;
        j++;   
    }
    cout << "Tong cac so tu nhien tu 1 den " << n << " la: " << sum << endl;
    ///////////////////////// DO - WHILE ////////////////////////////
    // DO ... WHILE vong lap kiem tra dieu kien sau (luon luon thuc hien it nhat 1 lan lap truoc khi kiem tra dieu kien - neu dieu kien dung thi thuc thi tiep vong lap - neu dieu kien sai thi dung lai);
    // so lan lap toi da : giong nhu while;
    // so lan lap toi thieu : 1 lan;
    
    // kiem tra xem nguoi dung dang nhap mk vao dung hay sai?;
    const string MY_PASSWORD = "anh6xi"; // mk chinh xac cua nguoi dung da dang ky luu vao he thong;
    string password; // mk khi nguoi dung nhap vao he thong;
    // neu nhap mk sai qua 3 lan - thong bao tai khoan bi khoa
    int count = 0; // bien dem so lan nguoi dung nhap mk sai
    bool checking_password = true; // bien kiem tra mk nguoi dung nhap vao co dung hay khong
    do 
    {
        cout << "Nhap vao mat khau cua ban: ";
        cin >> password; // nguoi dung nhap vao mk
        if (password != MY_PASSWORD) 
        {
            cout << "Mat khau ban nhap vao khong dung, vui long nhap lai!" << endl;
            count++; // diem so lan nhap sai
        }
        if (count > 3) 
        {
            checking_password = false; // nguoi dung nhap mk sai qua 3 lan
            break; // thoat khoi vong lap do ... while
        }
    } while (password != MY_PASSWORD); // != so sanh khong bang
    if (checking_password) 
    {
        cout << "Ban da dang nhap thanh cong!" << endl;
    }else 
    {
        cout << "Ban da nhap sai mk qua 3 lan, tai khoan cua ban da bi khoa!" << endl;
    }
    // tinh giai thua cua 1 so tu nhien bat ky nguyen duong
    // su dung vong lap do ... while
    // giai thua : tich cua cac so tu nhien lien tiep
    
    int number;
    cout << "Nhap vao so tu nhien bat ky nguyen duong: ";
    cin >> number; // nhap vao so tu nhien bat ky nguyen duong
    int m = 1;
    int total_giai_thua = 1;
    do 
    {
        total_giai_thua *= m; 
        m++;
    }while (m <= number);
    cout << "Giai thua cua " << number << " la: " << total_giai_thua << endl;
    //////////////////////////////////////////////////
     int number_A;
     int number_B;

    do
    {
        cout << "nhap so nguyen duong A: ";
       
        cin >> number_A;
        cout << " nhap so nguyen duong B: ";
        int number_B;
        cin >> number_B;
      
        if(number_A < 0 || number_B < 0)
        {
            cout << "vui long nhap lai so nguyen duong A va B" << endl;
        }
    }while (number_A < 0 || number_B < 0);

    do 
    {
        int number_C = number_A % number_B;
        number_A = number_B;
        number_B = number_C;
    } while (number_B != 0);
    cout << "Uoc chung lon nhat cua " << number_A << " va " << number_B << " la: " << number_B<< endl;


    return 0;
}