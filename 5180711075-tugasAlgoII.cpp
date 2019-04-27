#include<iostream>
#include<stdlib.h>
using namespace::std;
struct mhs{
int nim;
string nama;
float nilai;
};
mhs mahasiswa[50];
int c,i,b,ketemu;
string cari;
mhs temp;
main()
{
cout<<"\ndata nilai mahasiswa";
cout<<"\nmasukkan jumlah data="; cin>>c;

for(i=0;i<c;i++)
{
    cout<<"\ndata ke-"<<i<<"=";
    cout<<"\nmasukkan nim:";cin>>mahasiswa[i].nim;
    cout<<"\nmasukkan nama:";cin>>mahasiswa[i].nama;
    cout<<"\nmasukkan nilai:";cin>>mahasiswa[i].nilai;
}
for(i=0;i<c;i++)
{
    cout<<"\n-------------------";
    cout<<"\ndata ke:["<<i+1<<"]";
    cout<<"\n nim:"<<mahasiswa[i].nim;
    cout<<"\n nama:"<<mahasiswa[i].nama;
    cout<<"\n nilai:"<<mahasiswa[i].nilai;
}

for(i=0;i<c;i++)
{
    system("cls");
   for(b=0;b<c-1;b++)
   {
       if(mahasiswa[b].nim>mahasiswa[b+1].nim)
       {
           temp.nim=mahasiswa[b].nim;
           mahasiswa[b].nim=mahasiswa[b+1].nim;
           mahasiswa[b+1].nim=temp.nim;

           temp.nama=mahasiswa[b].nama;
           mahasiswa[b].nama=mahasiswa[b+1].nama;
           mahasiswa[b+1].nama=temp.nama;

           temp.nilai=mahasiswa[b].nilai;
           mahasiswa[b].nilai=mahasiswa[b+1].nilai;
           mahasiswa[b+1].nilai=temp.nilai;
       }
   }
}
cout<<"\nsetelah data di sorting";
for(b=0;b<c;b++)
{
     cout<<"\n-------------------";
    cout<<"\n nim:"<<mahasiswa[b].nim;
    cout<<"\n nama:"<<mahasiswa[b].nama;
    cout<<"\n nilai:"<<mahasiswa[b].nilai;
}
cout<<"\nmasukkan bilangan yang dicari=";
cin>>cari;
ketemu=0;
 cout<<"\ndata ditemukan ke-";
for(b=0;b<c;b++)
{
   if(mahasiswa[b].nama==cari)
   {
       ketemu=1;
       cout<<b;
   }
}
if (ketemu==0)
{
    cout<<"\ndata tidak ditemukan";
}
cout<<"\nmengganti data";
cout<<"\nmasukkan nilai data yang ingin diubah=";
cin>>mahasiswa[b].nilai;
for(int g=0;g<c;g++)
{
    if(mahasiswa[g].nilai==mahasiswa[b].nilai)
    {
        cout<<"\nmasukkan nilaibaru=";
        cin>>mahasiswa[g].nilai;
    }
}
cout<<"\ndata setelah diubah";
for(int h=0;h<c;h++)
{
    cout<<"\n"<<"nilai ke-"<<h<<":"<<mahasiswa[h].nilai;
}
cout<<"\nmenghapus data";
cout<<"\nmasukkan data yang akan dihapus:";
cin>>mahasiswa[b].nim;
for(int j=0;j<c;j++){
    if(mahasiswa[b].nim==mahasiswa[j].nim){
        for(int k=j;k<c;k++){
            mahasiswa[k].nim=mahasiswa[k+1].nim;
        }
        c-=1;
        break;
    }
}
cout<<"\ndata baru";
for(int p=0;p<c;p++){
    cout<<"\n"<<mahasiswa[p].nim;
}

}
