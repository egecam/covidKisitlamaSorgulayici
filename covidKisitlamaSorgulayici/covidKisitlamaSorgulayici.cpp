#include <iostream>

using namespace std;

int main()
{
    string d1, d2, d3, d4, d5;
    string workStatus;
    string cDay;
    int age;
    string clockFirst;
    string clockSecond;

    d1 = "Pazartesi";
    d2 = "Sali";
    d3 = "Carsamba";
    d4 = "Persembe";
    d5 = "Cuma";

    workStatus = "E", "H";
    clockFirst = "E", "H";
    clockSecond = "E", "H";

    cout << "Covid-19 onlemlerine iliskin kisitlama sorgulayiciya hos geldiniz. \n Lutfen bu programda Turkce karakter kullanmayiniz. \n \n Hangi gunu sorgulamak istersiniz?";
    cin >> cDay;

    if (cDay == d1 || cDay == d2 || cDay == d3 || cDay == d4 || cDay == d5)
    {
        cout << "\n Calisiyor musunuz? Calisiyorsaniz E, calismiyorsaniz H yaziniz.";
        cin >> workStatus;
        if (workStatus == "E") // çalışıyor
        {
            cout << "\n \n Uzgunum, ofise gitmelisiniz. \n \n";
            return 0;
        }
        else // çalışmıyor
        {
        cont2:
            cout << "\n Yasiniz kac?";
            cin >> age;
            if (age >> 20) // yaşı 20'den büyük
            {
                if (age << 65) // ve 65'ten küçük
                {
                    goto stop1;
                    return 0;
                }
                else // yaşı 65'ten büyük
                {
                cont1:
                    cout << "\n Saat 10'dan once mi? Once ise E, sonra ise H yaziniz.";
                    cin >> clockFirst;
                    if (clockFirst == "E") // saat 10'dan önce 
                    {
                        goto stop2;
                        return 0;
                    }
                    else // saat 10'dan sonra
                    {
                        cout << "\n Saat 16'dan once mi? Once ise E, sonra ise H yaziniz.";
                        cin >> clockSecond;
                        if (clockSecond == "E") // saat 16'dan önce
                        {
                            goto stop1;
                            return 0;
                        }
                        else
                        {
                            goto stop2;
                            return 0;
                        }
                    }

                }



            }
            else // yaşı 20'den küçük
            {
                goto cont1;
            }
        }
    }
    else
    {
        cout << "\n Saat 10'dan once mi? Once ise E, sonra ise H yaziniz.";
        cin >> clockFirst;
        if (clockFirst == "E") // hafta sonu ve saat 10'dan önce
        {
            goto stop2;
            return 0;
        }
        else
        {
            cout << "\n Saat 20'den once mi? Once ise E, sonra ise H yaziniz.";
            cin >> clockSecond;
            if (clockSecond == "E") // saat 20'den sonra
            {
                goto stop2;
                return 0;
            }
            else // saat 20'den önce
            {
                goto cont2;
            }
        }

    }

stop1:
    cout << "\n \n Disari cikabilirsiniz. Lutfen kendinizin ve çevrenizin sagligi icin Covid-19 onlemlerinizi aldiginizdan emin olun. Iyi gunler. \n \n";

stop2:
    cout << "\n \n Siz bugun evde kalmalisiniz. Daha sonra tekrar kontrol edin. \n \n";
}
