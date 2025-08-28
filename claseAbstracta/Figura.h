class Figura {
public:
Figura();
virtual void dibuja() = 0; // metodo virtual puro

protected:
int x, y;
};

Figura::Figura(){
    x = 1;
    y = 1;
}