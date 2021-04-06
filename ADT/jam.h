#ifndef JAM_H_INCLUDED
#define JAM_H_INCLUDED

#include <iostream>
using namespace std;

struct tJam {
    int hh;
    int mm;
    int ss;

    void setJam(int jam)
    {
        hh = jam;
    }

    void setMenit(int menit)
    {
        mm = menit;
    }

    void setDetik(int detik)
    {
        ss = detik;
    }

    bool isValid() //Mengecek jam,menit,detik yang diinputkan
    {
        if(hh < 0 || hh > 23)
        {
            return false;
        }
         if(mm < 0 || mm > 59)
        {
            return false;
        }
         if(ss < 0 || ss > 59)
        {
            return false;
        }

        return true;
    }


    int getJam ()
    {
        return hh;
    }

    int getMenit ()
    {
        return mm;
    }

    int getDetik ()
    {
        return ss;
    }


     void cetakJam()
    {
        if (isValid()) //Cek apakah jam yang diinputkan sudah valid.
        {
            cout << "Jam sekarang " << getJam() << ":" << getMenit() << ":" << getDetik() << endl;
        }
         else
        {
            cout << "Jam yang anda masukan Salah" << endl;
        }
    }


};

#endif // JAM_H_INCLUDED
