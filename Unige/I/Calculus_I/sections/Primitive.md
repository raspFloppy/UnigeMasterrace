>**Teorema  (esistenza primitiva):** Sia $f : I \to \mathbb{R}$ una funzione definita in un intervallo $I$. Allora se $f$ è **continua**, esiste sempre una primitiva.

```ad-note
title: Nota
Tuttavia ciò non vuol dire che io la possa scrivere esplicitamente.
```


## Proprietà algebriche delle primitive
- $$\int (\alpha * f(x) + \beta * g(x)) dx = \alpha \int f(x)dx + \beta \int g(x) dx $$
> **Commento** questa è la conseguenza del fatto che $(\alpha F + \beta G^{I} = \alpha F^{I} + \beta G^{I})$

- **Integrazione per parti prima forma:** $$ \int f^{I}(x)g(x)dx = f(x)*g(x) - \int f(x)*g^{I}(x)dx
$$

e noi sappiamo che $\int h^{I} dx = h$, infatti è una **tautologia**.
> **Commento:** $(fg)^{I} = f^{I}*g + f*g^{I}$ (derivata del prodotto)
> $$\int (fg)^{I} dx = \int f^{I}*g + \int f*g^{I}$$

- Sia $F$ una primitiva di $f$ allora $$ \int f(x)+g(x) dx = F(x)g(x) - \int F(x) * g(x) dx$$
<div style="page-break-after: always; visibility:hidden">\pagebreak</div>

## Primitive di funzioni elementari
![[Pasted image 20220513102642.png]]

<div style="page-break-after: always; visibility:hidden">\pagebreak</div>

## Esercizi per intergrazioni per parti

#### Esercizio 1:
$$ \int (x-x^{2}+sin(x)) dx = \frac{x^{1+1}}{1+1} - \frac{x^{2+1}}{2+1} - cos(x) + c = \frac{x^{2}}{2} - \frac{x^{3}}{3} - \cos(x) + c $$

