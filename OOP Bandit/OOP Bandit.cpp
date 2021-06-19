#include <iostream>

using namespace std;

class Bandit1
{
public:
    int x = 0;

    void banda(int x)
    {
        this->x = x;
    }

    void run()
    {
        this->x += 1;
    }

};

class GunAk
{
public:
    int ammo;

    void reloadak()
    {
        this->ammo = 30;
    }

    void fireak()
    {
        this->ammo -= 1;
    }

    void banda()
    {
        this->reloadak();
    }
};

class Bandit
{
public:
    GunAk gun_right;


    void constructor(GunAk gun_right)
    {
        this->gun_right = gun_right;
    }


    void  fire()
    {
        this->gun_right.fireak();
    }
};  

class Polic
{
public:
    int x = 0;

    void ychastok(int x)
    {
        this->x = x;
    }

    void run()
    {
        this->x += 1;
    }
};

class GunKolt
{
public:
    int ammo;

    void reloadakolt()
    {
        this->ammo = 10;
    }

    void firekolt()
    {
        this->ammo -= 1;
    }

    void ychastok()
    {
        this->reloadakolt();
    }
};

class Polic1
{
public:
    GunKolt gun_left1;
    GunKolt gun_right1;


    void ychastok(GunKolt gun_left1, GunKolt gun_right1)
    {
        this->gun_left1 = gun_left1;
        this->gun_right1 = gun_right1;
    }


    void  fire()
    {
        this->gun_left1.firekolt();

        this->gun_right1.firekolt();
    }
};

void main()
{   
    Bandit bandit1;
    Bandit1 bandit;
    bandit.run(); 
    cout << bandit.x;
    bandit.run(); 
    cout << bandit.x; 
}