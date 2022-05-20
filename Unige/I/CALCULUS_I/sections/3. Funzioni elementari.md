## Funzioni tipo potenza

Una funzione tipo potenza è una funzione nella forma: $$f(x) = x^n$$

dove $x^n = \underbrace{x*x*x*x*x\ldots*x}_\text{n volte}$.

::: procol
2

n pari:

-   $dom(f) = \mathbb{R}$

-   $Im(f) = [)$

 

n dispari:

-   $dom(f) = \mathbb{R}$

-   $Im(f) = \mathbb{R}$

-   *strettamente costante*

-   a

-   $f(-x) = -f(x)$

-   $f$ è dispari.
:::

## Proprietà dell'esponenziale e del logaritmo

::: paracol
2 Alcune proprietà degli esponenziali:

-   $a^{x+y} = a^x * a^y$

-   $a^{x*b} = (a^x)^b$

-   $a^{-x} = (a^x)^{-1} = \frac{1}{a^x}$

-   $a^0 = 1$

-   $a^1 = a$

Alcune proprietà dei logaritmi:

-   $\log_a(x*y) = \log_a(x) + \log_a(y)$

-   $\log_a(x^b) = b * \log_a(x)$

-   $\log_a(\frac{1}{x}) = \log_a(x^{-1}) = -\log_a(x)$

-   $\log_a(1) = 0$

-   $\log_a(a) = 1$
:::

$\log(x)$ è stato introdotto come funzione inversa dell'esponenziale
$a^x$ infatti dire: $\log a(y)$ vuol dire trovare $x$ tale che:
$$\begin{aligned}
       \log_a(y) = x \Leftrightarrow a^x = y \\
       \log_2(4) = x \Leftrightarrow 2^x = 4\end{aligned}$$ Una base $a$
particolare è la $e$ ovvero **Numero di
Nepero** [\[sec:numero_di_nepero\]](#sec:numero_di_nepero){reference-type="ref"
reference="sec:numero_di_nepero"}, in particolare:
$$\log_e(x) = \ln(x)$$ Dove $\ln$ è il **logaritmo naturale**

$\log_a(x) = \log_b * \log_a(b)$

Alcune propiretà dell'inversione sono:

-   $a^{\log_a(x)} = x$

## Funzioni trigonometriche

$\alpha$ misura $x$ radianti se $x$ è la lunghezza dell'arco di cerchio
presente dentro l'angolo sapendo che la circonferenza è $\boxed{2\pi}$.

![](funzione_goniometrica.png){#fig:funzione_trigonometrica
width="\\linewidth"}

::: exmp
Per esempio un angolo retto che è $\dfrac{1}{4}$ della circonferenza
sarà $\dfrac{2\pi}{4} = \dfrac{\pi}{2}$
:::

In generale un angolo in radianti è:
$$\frac{\mbox{Angolo in gradi sessadecimali}}{360} * 2\pi$$

-   $tg(x) = \dfrac{\sin(x)}{\cos(x)}$

-   $cotg(x) = \dfrac{\cos(x)}{\sin(x)}$

-   geometricamente noto che $PH \le PA \le QA$ e $\sin(x)$
