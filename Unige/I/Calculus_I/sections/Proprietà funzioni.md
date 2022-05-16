In questo capitolo andremo a descrivere alcune proprietà fondamentali
delle funzioni.

## Iniettività {#sec:iniettività}

::: definition
$f : A \to \mathbb{R}$ è iniettiva se $\forall x_1,x_2 \in A$ se
$x_1 \not = x_2 \Rightarrow f(x_1) \not = f(x_2)$.
:::

::: definition
Graficamente possiamo dare più definizioni con lo stesso significato:

-   graficamente diciamo che se due punti $x_1,x_2$ hanno i realtivi
    punti sul grafico alla stessa altezza, allora in realta $x_1 = x_2$
    sono lo stesso punto.

-   Presa una qualunque altezza, c'è al più un punto sul grafico
    quell'altezza.

-   $f : A \to \mathbb{R}$ è iniettiva se $\forall y \in \mathbb{R}$ la
    retta $\{y = y_0\}$ interseca il grafico di $f$ in al più un punto.

-   $f$ è iniettiva se interseca rette orizzontali in al più un punto.

-   $f : A \to \mathbb{R}$ è iniettiva se $\forall y \in \mathbb{R}$
    l'equazione $f(x) = y$ ha al più una soluzione.

![Dimostrazione Iniettività](dim_iniettivita.png){#fig:dim_iniettivita
width="\\linewidth"}
:::

dove $f(x)$ è la distanza (con segno) del punto sul grafico dall'asse
dell'ascisse

## Surriettività {#sec:surriettività}

::: definition
$f: A \to \mathbb{R}$ è surriettiva se
$\forall y \in \mathbb{R} \exists$
:::

::: definition
graficamente possiamo dire che $f : A \to \mathbb{R}$ è surriettiva se
$\forall y_0 \in \mathbb{R}$ la retta $\{y = y_0\}$ interseca il grafico
di $f$ in almeno un punto.
:::

![Dimostrazione grafica
surriettività](dim_surriettivita.png){#fig:dim_surriettivita
width="\\linewidth"}

## Biiettiva {#sec:biiettiva}

$f : A \to \mathbb{R}$ è biiettiva se:

-   $\forall y_0 \in \mathbb{R}$ la retta $\{y = y_0\}$ interseca il
    grafico di $f$ in almeno un punto.

-   ogni retta orizzontale intersca il grafico di $f$ in un punto.

-   $\forall y \in \mathbb{R} \quad f(x) = y$ ha al più una soluzione

Essenzialmente una funzione è biietiva quando $f$ è sia
iniettiva [0.1](#sec:iniettività){reference-type="ref"
reference="sec:iniettività"} che
surriettiva [0.2](#sec:surriettività){reference-type="ref"
reference="sec:surriettività"}.

## Operazioni tra funzioni {#sec:operazioni_tra_funzioni}

Date due funzioni $f,g : A \to \mathbb{R}$ (posso avere anche domini
diversi ma allora la funzione che risulterà alla fine avrà come dominio
l'intersezione di $dom(f)$ e $dom(g)$).

-   $(f + y)(x) = f(x) + g(x)$

-   $(f - y)(x) = f(x) - g(x)$

-   $(f * y)(x) = f(x) * g(x)$

-   $\Bigg(\dfrac{f}{g}\Bigg)(x) = \dfrac{f(x)}{g(x)}$

-   $(\lambda f)(x) = \lambda * f(x)$

-   $f \circ g (x) = f(g(x))$

::: tcolorbox
Possiamo immaginare le funzioni come una black box nella quale inseriamo
una valore ed essa ci restituisce un altro valore in base a quello che
accade all'intero della black box.
:::

Il dominio di $f \circ g$ è quel numero che:
$$\boxed{(f \circ g) = \{ x \in Dom(f): f(x) \in Dom(g)\}}$$

### Funzione composta {#sec:funzione_composta}

::: exmp
Mostriamo alcuni esempi di funzioni composte: $$\begin{aligned}
                & e^{x^2} = (f \circ g)(x) \\
                & g(x) = x^2 \quad f(y) = e^y \\
                & f(y(x)) = f(x^2) = e^{x^2}
        \end{aligned}$$
:::

## Funzioni inverse {#sec:funzione_inversa}

::: definition
Se $f : A \to \mathbb{R}$ è iniettiva possiamo costruire la funzione
inversa, vedi figura [1](#fig:dim_iniettivita){reference-type="ref"
reference="fig:dim_iniettivita"}.

Data $y \in Im(f)$ posso definire $x = g(y)$ come l'unica soluzione di
$y = f(x)$ $$\begin{aligned}
        dom(f^{-1}) = Im(f) \\
        Im(f^{-1}) = dom(f) \\\end{aligned}$$
:::

Una funzione inversa molto comune è l'operazione di radice.

::: exmp
se $f : [0, +\infty) \to \mathbb{R} \quad  f(x) = x^2$

![](es_funzione_inversa.png){#fig:es_funzione_inversa
width="\\linewidth"}

Vediamo se è iniettiva: $$\begin{aligned}
                & \frac{x-1}{x+1} = \frac{y-1}{y+1} =  \\
                & (y+1)(x+1) * \frac{x-1}{x+1} = \frac{y-1}{y+1} * (x+1)(y+1) = \\
                & xy - y + x - 1 = xy - x + y - 1 = \\
                & 2x = 2y = \\
                & \boxed{x = y}
        \end{aligned}$$
:::

## Monotonia {#sec:monotonia}

::: definition
$f:A \to \mathbb{R}$ si dice **monotona crescente** se
$\forall x_1,x_2 \in A$ si ha:
$$x_1 < x_2 \Rightarrow f(x_1) \le f(x_2)$$
:::

::: definition
$f:A \to \mathbb{R}$ si dice **monotona decrescente** se
$\forall x_1,x_2 \in A$ si ha:
$$x_1 > x_2 \Rightarrow f(x_1) \ge f(x_2)$$
:::

::: exmp
Crescente spostandosi verso destra del grafico devo salire:

![Esempio di monotonia
crescente](monotonia_crescente.png){#fig:monotonia_crescente
width="\\linewidth"}

Decrescente spostandosi verso destra devo andare verso il basso:

![Esempio di monotonia
decrescente](monotonia_decrescente){#fig:monotonia_decrescente
width="\\linewidth"}

Esistono casi in cui una funzione è crescente per un intervallo e
decrescente per un altro intervallo, per esempio $f(x) = x^2$

$$\begin{aligned}
               & \mbox{Crescente nell'intervallo} \quad (0, +\infty) \\
               & \mbox{Decrescente nell'intervallo} \quad (-\infty, 0)
       \end{aligned}$$

::: tcolorbox
::: oss
se $f$ è sia crescente che decrescente in $A$
:::
:::

::: tcolorbox
::: prop
Se $f:A \to \mathbb{R}$ è strettamente monotona allora $f$ è iniettiva
(dunque invertibile).

::: proof
*Proof.* presi $x_1,x_2 \in A$ con $x_1 \not = x_2$ possiamo assumere
che:

1.  $x_1 < x_2$ avremo che $f(x_1) < f(x_2)$. In particolare se
    strettamente crescente $f(x_1) \not = f(x_2)$

2.  $x_2 < x_1$ avremo che $f(x_2) < f(x_1)$, in particolare se
    strettamente decrescente $f(x_2) \not = f(x_1)$

 ◻
:::
:::
:::
:::

## Proprietà delle funzioni monotone {#sec:}

Se $f(x),g(x)$ sono finiti crescente:

-   $f(x) + g(x)$ è funzione crescente

-   $\lambda * f(x)$ è [crescente]{.underline} per
    [$\lambda > 0$]{.underline} e decrescente per
    [$\lambda < 0$]{.underline}

-   se $f(x)>0$ sempre e $g(x)>0$ sempre allora $f(x)*g(x)$ è crescente

::: tcolorbox
::: oss
In generale se $f(x)$ e $g(x)$ sono entrambe monotone e non cambiano
segno allora $f(x)*g(x)$ è anch'essa monotona;
:::
:::

Se $f$ e $g$ sono monotone, anche $f \circ g$ è monotona e segue la
regola dei segni ($\nearrow =+, \searrow=-$).

::: exmp
Con $f(x) = \frac{1}{x}$ che ha $A = dom(f) = \mathbb{R} \ {0}$

Avremo che la funzione è decrescente:

![Esempio iperbole](monotonia_iperbole.png){#fig:monotonia_iperbole
width="\\linewidth"}

Dove $x_1 < x_2$ e quindi $f(x_1) < f(x_2)$.
:::
