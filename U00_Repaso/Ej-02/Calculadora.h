#ifndef REPASO_CALCULADORA_H
#define REPASO_CALCULADORA_H


template<class T, class P>
class Calculadora {
public:
    T suma(T a, T b);

    T resta(T a, T b);

    T multiplicacion(T a, T b);

    T division(T a, T b);
};

template<class T, class P>
T Calculadora<T, P>::suma(T a, T b) { return a + b; }

template<class T, class P>
T Calculadora<T, P>::resta(T a, T b) { return a - b; }

template<class T, class P>
T Calculadora<T, P>::multiplicacion(T a, T b) { return a * b; }

template<class T, class P>
T Calculadora<T, P>::division(T a, T b) { return (P) a / b; }


#endif //REPASO_CALCULADORA_H
