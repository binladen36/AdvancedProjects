#include "CarFactory.hpp"

Car* CarFactory::createCar()
{
    Car* c = new Car();
    Frame* f = createFrame();
    c ->setFrame(f);

    for(int i = 0; i < 4; i++)
    {
        Wheel* w = createWheel();
        c -> addWheel(w);
    }

    return c;
}

Wheel* PlasticCarFactory::createWheel()
{
    cout << " Enter wheel size: ";
    int size;
    cin >> size;
    PlasticWheel *w = new PlasticWheel(size);
    return w;
}

Wheel* SteelCarFactory::createWheel()
{
    cout << " Enter wheel size: ";
    int size;
    cin >> size;
    SteelWheel *w = new SteelWheel(size);
    return w;
}

Frame* PlasticCarFactory::createFrame()
{
    cout << " Enter color: ";
    string color;
    cin >> color;
    cout << "Enter plastic type: ";
    string type;
    cin >> type;

    PlasticFrame *f = new PlasticFrame(color, type);
    return f;
}

Frame* SteelCarFactory::createFrame()
{
    cout << " Enter color: ";
    string color;
    cin >> color;
    cout << "Enter Steel type: ";
    int level;
    cin >> level;

    SteelFrame *f = new SteelFrame(color, level);
    return f;
}