#pragma once
#include <iostream>
#include <string>

using namespace std;

class Member{
    private:
        string name;
        int time, id;
    public:
        int baseFee, classFee, steamFee, ptSupport, total;
        string type;
        Member(){
            baseFee = classFee = steamFee = ptSupport = id = time = total = 0;
            name = "None";
        }

        void BaseInput(){
            cout << "Name: "; 
            cin.ignore(); getline(cin, name);
            cout << "ID: "; cin >> id;
            cout << "Time to join (month): "; cin >> time;
        }

        virtual void Input(){}

        long long TotalFee(){
            total = baseFee;
            if (classFee != -1)
                total += classFee;
            if (steamFee != -1)
                total += steamFee;
            total += ptSupport;
            return (total * time);
        }

        void BaseDisplay(){
            cout << "Name of customer: " << name << endl;
            cout << "ID of customer: " << id << endl;
            cout << "Registered " << time  << " months" << endl;
            cout << "Detail of payment: " << endl;
            cout << "Basic fee: " << baseFee << endl;
            
            if (classFee == 0)
                cout << "Class fee: free" << endl;
            else if (classFee == -1)
                cout << "Class fee: none" << endl;
            else 
                cout << "Class fee: " << classFee << endl;

            if (steamFee == 0)
                cout << "Fee for steaming: free" << endl;
            else
                cout << "Fee for steaming: none" << endl;

            if (ptSupport == 0)
                cout << "PT support: free" << endl;
            else
                cout << "PT support: " << ptSupport << endl;
            
            cout << "Total paymemt for " << time << " month is " << TotalFee() << endl;
        }

        virtual void Display(){}

        void Swap(Member &a, Member &b){
            Member tmp = a;
            a = b;
            b = tmp;
        }

        void Sort(Member mem[], int n){
            for (int i=0; i<n-1; i++)
                for (int j=i+1; j<n; j++)
                    if (mem[i].TotalFee() < mem[j].TotalFee())
                        Swap(mem[i], mem[j]);
        }
  
};