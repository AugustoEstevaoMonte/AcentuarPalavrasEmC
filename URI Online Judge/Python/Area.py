a, b, c = [float(i) for i in input().split()]
pi=3.14159
areaTriangulo=(a*c)/2
areaCirculo=pi*(c*c)
areaTrapezio=c*(a+b)/2
areaQuadrado=(b*b)
areaRetangulo=a*b
print("TRIANGULO: %0.3f" % areaTriangulo)
print("CIRCULO: %0.3f" % areaCirculo)
print("TRAPEZIO: %0.3f" % areaTrapezio)
print("QUADRADO: %0.3f" % areaQuadrado)
print("RETANGULO: %0.3f" % areaRetangulo)