8/11

8/11
Sia $L=\{f,g,c\}$, dove
- *f* è simbolo unario
- *g* è simbolo ternario
- *c* è simbolo di constante

L'albero sintattico del termine
$g(f(x),g(c,f(c),x),y)$

Dato un nodo con la sua etichetta, questo è ciò che fa l'algoritmo:
1) Controlla se l'etichetta è una variabile o un simbolo di costante: in tal caso quel nodo è una foglia, e l'algoritmo passa a esaminare un altro nodo
2) Altrimenti, controlla se l'etichetta comincia con un simbolo funzionale. In caso contrario, l'algoritmo si arresta concludendo che la stringa considerata non è un termine.
3) Controlla se il simbolo successivoal simbolo funzionale è una parentesi (; se l'etichetta finisce con una parentesi); se le due parentesi si corripondono (utlizzando il contatore di parentesi); se tra le due parentesi ci sono n-1 virgole *rilevanti*, cioè non contenute in copie... (Culo)


Sia $L=\{+,.,1\}$, dove:
- $+,.$ sono simboli funzionali binari
- 1 è simbolo di costante



id: b6edc6aff0734e508ad5bcc6101bc0ff
parent_id: 9d1a466906684a1da29a33b66ca2a336
created_time: 2021-11-08T08:18:11.063Z
updated_time: 2021-11-08T08:52:49.515Z
is_conflict: 0
latitude: 45.81780000
longitude: 8.82200000
altitude: 0.0000
author: 
source_url: 
is_todo: 0
todo_due: 0
todo_completed: 0
source: joplin-desktop
source_application: net.cozic.joplin-desktop
application_data: 
order: 0
user_created_time: 2021-11-08T08:18:11.063Z
user_updated_time: 2021-11-08T08:52:49.515Z
encryption_cipher_text: 
encryption_applied: 0
markup_language: 1
is_shared: 0
share_id: 
conflict_original_id: 
master_key_id: 
type_: 1