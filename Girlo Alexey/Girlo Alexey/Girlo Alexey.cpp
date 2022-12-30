#include <cmath>
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Ru-ru");
    /*
    std::cout << "5.1.1 (Низкий) L = 1,51cosx^2+2x^3" << std::endl;
    double X;

    std::cout << std::endl;

    std::cout << "Введите x: ";
    std::cin >> X;

    long double result = 1.51 * cos(pow(X,2)) + 2 * pow(X,3);
    std::cout << "L = "<< result << std::endl;

    std::cout << "-----------------------------------------" << std::endl;

    std::cout << "5.1.2 (Средний) D = (7,8a^2+3,52t)/(ln(a+2y)+e^y)" << std::endl;
    double A, T, E, Y;

    std::cout << std::endl;

    std::cout << "Введите a: ";
    std::cin >> A;
    std::cout << "Введите t: ";
    std::cin >> T;
    std::cout << "Введите y: ";
    std::cin >> Y;
    std::cout << "Введите e: ";
    std::cin >> E;

    std::cout << std::endl;

    long double result2 = (7.8 * pow(A,2) + 3.52 * T) / (log(A + 2 * Y) + pow(E, Y));
    long double result3 = (7.8 * pow(A, 2) + 3.52 * T);
    long double result4 = (log(A + 2 * Y) + pow(E, Y));
    std::cout << "1 = " << result3 << std::endl;
    std::cout << "2 = " << result4 << std::endl;
    std::cout << "D = " << result2 << std::endl;

    std::cout << "-----------------------------------------" << std::endl;
    
    std::cout << "5.1.3 (Высокий) G = tg(x^4 - 6) - cos^3(z + xy) / cos^4 x^3 c^2" << std::endl;
    double X2, Z2, Y2, C2;

    std::cout << std::endl;

    std::cout << "Введите x: ";
    std::cin >> X2;
    std::cout << "Введите z: ";
    std::cin >> Z2;
    std::cout << "Введите y: ";
    std::cin >> Y2;
    std::cout << "Введите c: ";
    std::cin >> C2;

    std::cout << std::endl;

    long double result5 = (tan(pow(X2,4) - 6) - (pow(cos(Z2 + X2 * Y2), 3)));
    long double result6 = (pow(cos(pow(X2,3) * pow(C2,2)), 4));
    long double result7 = (tan(pow(X2, 4) - 6) - (pow(cos(Z2 + X2 * Y2), 3))) / (pow(cos(pow(X2, 3) * pow(C2, 2)), 4));

    std::cout << "1 = " << result5 << std::endl;
    std::cout << "2 = " << result6 << std::endl;
    std::cout << "G = " << result7 << std::endl;

    std::cout << "-----------------------------------------" << std::endl;

    std::cout << "5.1.2 (Средний) D = (7,8a^2+3,52t)/(ln(a+2y)+e^y)" << std::endl;
    double A, T, E, Y;

    std::cout << std::endl;

    std::cout << "Введите a: ";
    std::cin >> A;
    std::cout << "Введите t: ";
    std::cin >> T;
    std::cout << "Введите y: ";
    std::cin >> Y;
    std::cout << "Введите e: ";
    std::cin >> E;

    std::cout << std::endl;

    long double result2 = (7.8 * pow(A,2) + 3.52 * T) / (log(A + 2 * Y) + pow(E, Y));
    long double result3 = (7.8 * pow(A, 2) + 3.52 * T);
    long double result4 = (log(A + 2 * Y) + pow(E, Y));
    std::cout << "1 = " << result3 << std::endl;
    std::cout << "2 = " << result4 << std::endl;
    std::cout << "D = " << result2 << std::endl;
    
    std::cout << "-----------------------------------------" << std::endl;
    
    std::cout << "5.2.1 (Низкий) Решить площадь трапеции по заданной формуле: S = (1/2)*(a+b)*H" << std::endl;
    double A3, B3, H3;

    std::cout << std::endl;

    std::cout << "Введите a: ";
    std::cin >> A3;
    std::cout << "Введите b: ";
    std::cin >> B3;
    std::cout << "Введите H: ";
    std::cin >> H3;

    std::cout << std::endl;


    long double S = 0.5 * (A3 + B3) * H3;


    std::cout << "S = " << S << std::endl;
    
    std::cout << "-----------------------------------------" << std::endl;

    std::cout << "5.2.2 (Средний)" << std::endl;
    double T4 = 4.1;
    double P4 = 3;

    std::cout << std::endl;

    std::cout << "t = 4.1" << std::endl;
    std::cout << "p = 3" << std::endl;

    std::cout << std::endl;

    std::cout << "k = sqrt(pt)" << std::endl;
    long double K4 = sqrt(T4 * P4);
    std::cout << "k = " << K4 << std::endl;

    std::cout << std::endl;

    std::cout << "x = pt^2 + sqrt(k)" << std::endl;
    long double X4 = pow(P4 * T4,2) + sqrt(K4);
    std::cout << "x = " << X4 << std::endl;

    std::cout << std::endl;

    std::cout << "y = tg^3x^2 + kt" << std::endl;
    long double Y4 = pow(tan(pow(X4,3)),3) + K4 * T4;
    std::cout << "y = " << Y4 << std::endl;
    */
    std::cout << "-----------------------------------------" << std::endl;
    
    std::cout << "5.2.3 (Высокий)" << std::endl;
    double X5;
    double sum = 0;
    double res = 0;
    std::cout << std::endl;

    std::cout << "Введите x: ";
    std::cin >> X5;

    std::cout << std::endl;
    while (fabs(res) < 10) 
    {
        sum += res;
        res += cos(X5) * ((cos(3 * X5) / 9));
        std::cout << " Ответ = " << res << std::endl;
    }
}

