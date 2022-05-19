Controllare il componente della vunzione vicino a $x_0 \in dom(f)$ e
confrontarlo con $f(x_0)$.

```ad-note
title: Definizione
Controllare il comportamento della funzione vicino ad un punto $x_0$ che
sia di [accumulazione]{.underline} per $dom(f)$.
```

> definition
Sia $A \subseteq \mathbb{R} \quad x_0 \in \mathbb{R}$ è detto punto di
accumulazione di $A$ se
$\forall \epsilon > 0 \quad \exists x \in A - \{x_0\}$ tale che:
> $$x_0 \epsilon \le x \le x_0 + \epsilon$$


#### Esempi
Dimostriamo con alcuni esempi pratici:

 
##### esempio 1
$A = (0, 1), x_0 = 5$ è un punto di accumulazione per $A$.
In questo caso per $\epsilon < 1$ non trovo elementi di $A$ che siano
dentro $(5-\epsilon, 5+\epsilon)$.

##### esempio 2

-   Se $A = \mathbb{N}$ i punti di accumulazione saranno:

    ![Esempio](accumulazione_naturali.png)

-   Se $x \not \in \mathbb{N}$ allora non è di accumulazione.

-   Se $x \in \mathbb{N}$ non è di accumulazione se:

    $\epsilon < 1$ e
    $g \in \mathbb{N} \quad x - \epsilon \le g \le \epsilon + x \Rightarrow g = x$
    che non va bene per la definizione.


**NOTA:**
:::

```ad-note
title: Definizione
un'altra definizione:

-   $A \subseteq \mathbb{R}$ si dice che $a + \infty$ è punto di
    accumulazione di $A$ se $\forall M > 0 \quad  \exists x \in A$ tale
    che $x \ge M$.

-   $- \infty$ è punto di accumulazione di $A$ se
    $\forall M>0 \quad \exists x \in A$ tale che $x \le -M$.
```

Sia $f : A \to \mathbb{R}$ e sia $x_0$ un punto di accumulazione di $A$.

## Definizione di un limite

Avendo un limite nella forma: $$\lim_{x \to x_0} f(x)$$
Possiamo ottenere quattro diverse definizioni:

1.  $\boxed{l \in \mathbb{R}}$

2.  $\boxed{+\infty}$

3.  $\boxed{-\infty}$

4.  **non esiste** (tipo il Molise)

In questi casi si può considerare
$x_0 \in \mathbb{R}, x_0 = + \infty, x_0 = -\infty$.

### Esempi con $x_0 = +\infty$

#### esempio 1 $$\boxed{\lim_{x \to +\infty} f(x) = +\infty}$$

![](lim_es_2_+.png)

$\forall M > 0 \quad  \exists k > 0$ tale che $\forall x \in A, x > k$
si ha:

$f(x) > M$.

In parole semplici possiamo dire che:
**DA UN CERTO PUNTO IN POI RESTO SEMPRE SOPRA QUALUNQUE ALTITUDINE**

#### esempio 3
 $$\lim_{x \to +\infty} f(x) = -\infty$$

![](lim_es_3_+.png){width="\\linewidth"}

$\forall M > 0 \quad  \exists k > 0$ tale che se $x \in A, x > k$ si ha:

$\boxed{f(x) < -M}$.


#### esempio 1
$$\lim_{x \to +\infty} f(x) = l$$
![](lim_es_1_+.png)

$\forall \epsilon > 0 \quad  \exists k > 0$ tale che se
$\forall x \in A, x > k$ si ha:

$\boxed{l-\epsilon<f(x) < l+\epsilon}$.

#### esempio 4
![](lim_es_4_+.png)

La funzione è continua non ha limite
:::

### Esempi con $x_0 = -\infty$

#### esempio 1
![](lim_es_1_-.png)


#### esempio 2

![](lim_es_2_-.png)

#### esempio 3
![](lim_es_3_-.png)

$\lim_{x \to 0} \not = 0$ perchè nelle definizioni di limite non
cosidero **MAI** il valore in $x = x_0$ perchè non mi interessa chi è
$f(x_0)$.

```ad-note
title: Definizione **(Continuita II)**
$x_0 \in A$ punto di accumulazione per $A$, $f$ è
continua in $x_0$ se: 
$$\lim_{x \to x_0} f(x) = f(x_0)$$

```

## Limiti di funzioni elementari 
Con le potenze di $x^n \quad n \in \mathbb{N}$ $$\begin{aligned}
        \lim_{x \to \infty} x^n > +\infty \forall n \ge 1 \\
        \lim_{x \to -\infty} x^n > +\infty \quad \forall n \ge 1 \end{aligned}$$

Dobbiamo prima vedere se la funzione è pari o dispari

![](limite_pari_o_dispari.png)


$\exists$ intorno $Idx_0$, $\exists M > 0$ tale che:
$$|f(x)| \le M \quad \forall I, x \not x_0$$

## Successioni e limiti di successioni


```ad-note
title: Definizione
Una **successione** la possiamo immaginare come: $$\begin{aligned}
                & a_1, a_2, a_3,a_4,\ldots, a_n \\
                & 1, \frac{1}{2}, \frac{1}{3}, \frac{1}{4},\ldots
        \end{aligned}$$
```

![](es_successioni.png)

$$f : \mathbb{N} \to \mathbb{R} \quad  f(n) = a_n \quad  dom(f) = \mathbb{N}$$
con $+\infty$ che è punto di accumulazione per $A = \mathbb{N}$.

$$\lim_{n \to +\infty} a_n = l$$
1.  a

2.  b

3.  c

Valgono le stesse proprietà di limiti di funzioni, vale il **teorema del
confronto**, **teorema di permanenza del segno**.
