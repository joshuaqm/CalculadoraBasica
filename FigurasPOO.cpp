/*Ejercicio 1.
 * Construya una clase llamada FigurasTC (triangulo, rectangulo).
 *donde tenga sus atributos no.lados, largo,ancho y sus metodos sean perimetro y area
 *
*/

#include<iostream>
#include<cmath>
using namespace std;

class FigurasTC{
    private:
        float largo,ancho;
        int nolados;
    public:
        FigurasTC(float,float,int);
        void perimetro();
        void area();
        void figura();
};


FigurasTC::FigurasTC(float _largo,float _ancho,int _nolados){
    largo = _largo;
    ancho = _ancho;
    nolados = _nolados;
}

void FigurasTC::figura(){
    if (nolados==1){
        cout<<"Tu figura es un circulo"<<endl;
    }
    else{
        if (nolados<3 and nolados!=1){
            cout<<"No es ninguna de las figuras mencionadas que se pueden calcular"<<endl;
        }else if  (nolados==3){
            cout<<"Tu figura es un triangulo"<<endl;
        }else if  (nolados==4){
            cout<<"Tu figura es un rectangulo"<<endl;
        }else{
            cout<<"Es otra figura de n lados que no puedo calcular que sea :("<<endl;
    }
    }
    
}

void FigurasTC::perimetro(){
    float _perimetro;
    if(nolados==1){
        _perimetro = M_PI*largo; //largo o ancho da igual (es el diametro del circulo)
        cout<<"El perimetro de la figura es de "<<_perimetro<<endl;
    }else{
        if (nolados<3){
            cout<<"No es ninguna de las figuras mencionadas que se pueden calcular"<<endl;
        }else if  (nolados==3){
            _perimetro = 2*largo + ancho;
            cout<<"El perimetro de la figura es de "<<_perimetro<<endl;
        }else if  (nolados==4){
            _perimetro = (2*largo) + (2*largo);
            cout<<"El perimetro de la figura es de "<<_perimetro<<endl;
        }else{
            cout<<"Es otra figura de n lados que no puedo calcular :("<<endl;
        }
    }
    
}
void FigurasTC::area(){
    float _area;
    if(nolados==1){
        _area = (M_PI*(largo*largo))/4; //largo o ancho da igual (es el diametro del circulo)
        cout<<"El area de la figura es de "<<_area<<endl;
    }else{
        if (nolados<3){
            cout<<"No es ninguna de las figuras mencionadas que se pueden calcular"<<endl;
        }else if  (nolados==3){
             _area = (largo*ancho)/2;
            cout<<"El area de la figura es de "<<_area<<endl;
        }else if  (nolados==4){
            _area = (largo*ancho);
            cout<<"El area de la figura es de "<<_area<<endl;
        }else{
            cout<<"Es otra figura de n lados que no puedo calcular :("<<endl;
    }
    }
    
}

int main(){
    FigurasTC triangulo(10,2,3);
    FigurasTC rectangulo(11,9,4);
    FigurasTC circulo(3,3,1);
    FigurasTC nfigura(11,6,11);
    triangulo.figura();
    triangulo.perimetro();
    triangulo.area();
    rectangulo.figura();
    rectangulo.perimetro();
    rectangulo.area();
    circulo.figura();
    circulo.perimetro();
    circulo.area();
    nfigura.figura();
    nfigura.perimetro();
    nfigura.area();
}

