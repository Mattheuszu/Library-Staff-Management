#include <iostream>
#include <vector>

using namespace std;

class Librian {
    string Name;
    string LastName;
    string Sex;
    int Age;
    
    public:
    
    void print()
    {
        cout << Name << " " << LastName << " " << Sex << " " << Age << endl;
    }
    
    Librian(string p_name, string p_lastname, string p_sex, int p_age)
    {
        Name = p_name;
        LastName = p_lastname;
        Sex = p_sex;
        Age = p_age;
        cout << "Персонаж создан" << endl;
    }
    
    Librian()
    {
        
    }
    
    
    void setName(string Name)
    {
        this->Name = Name;
    }

    string getName()
    {
        return Name;
    }
    
    void setLastName(string LastName)
    {
        this->LastName = LastName;
    }
    
    string getLastName()
    {
        return LastName;
    }
    
    void setSex(string Sex)
    {
        this->Sex = Sex;
    }
    
    string getSex()
    {
        return Sex;
    }
    
    void setAge(int Age)
    {
        this->Age = Age;
    }
    
    int getAge()
    {
        return Age;
    }

};

int main()
{
    vector <Librian> librians;
    
    int count;
    cout << "СКОЛЬКО ЛЮДЕЙ ХОТИТЕ ДОБАВИТЬ?: ";
    cin >> count;
    
    for(int i = 0; i < count; i++){
        Librian librian;
        string name;
        cout << "Введите имя: ";
        cin >> name;
        librian.setName(name);
        string lastname;
        cout << "Введите фамилию: ";
        cin >> lastname;
        librian.setLastName(lastname);
        string sex;
        cout << "Введите пол: ";
        cin >> sex;
        librian.setSex(sex);
        int age;
        cout << "Введите возраст: ";
        cin >> age;
        librian.setAge(age);
        librians.push_back(librian);
    }
    
    for(int i = 0; i < count; i++){
        cout << librians[i].getName() <<  endl;
        cout << librians[i].getLastName() << endl;
        cout << librians[i].getSex() << endl;
        cout << librians[i].getAge() << endl;
    }
    return 0;
}


