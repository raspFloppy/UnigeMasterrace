// Implementa le funzioni sulle liste realizzate con strutture doppiamente collegate, circolari, con sentinella, senza ordinamento

// FILE DA MODIFICARE

#include "ASD-doubly-linked-list.h"


using namespace list;

struct list::node {  // descrivo qui, fuori dal namespace, come e' fatta la struttura node: i dettagli interni non saranno visibili dal main
    Elem info;
    node *prev;
    node *next;
};

/*************************************************/
/* Implementazione delle operazioni di utilita'� */
/*************************************************/

void readFromStream(istream& str, List& l) {
    createEmpty(l);
    Elem e;
    str>>e;
    if (!str) throw runtime_error("Errore inserimento dati\n");
    // assumiamo che il segnale di fine input nel file sia  FINEINPUT
    while (e != FINEINPUT)  {     
        addRear(e, l);   // aggiunge l'elemento alla fine della lista
        str>>e;
        if (!str) throw runtime_error("Errore inserimento dati\n");
    }
}

/* legge il contenuto di una lista da file */
void readFromFile(string nome_file, List& l) {
    ifstream ifs(nome_file.c_str()); // apertura di uno stream associato ad un file, in lettura
    readFromStream(ifs, l);
}


/* legge il contenuto di una lista da standard input */
void readFromStdin(List& l) {
   cout << "\nInserire una sequenza di numeri separati da spazi seguiti da " << FINEINPUT << " per terminare\n";
   readFromStream((std::cin), l);
}

/* stampa la lista */
void print(const List& l) {
   List q = l->next;  // q "salta la sentinella" e va alla testa della lista
   while (q != l) {   // avanza finche' non finisce la lista
      cout << q->info << "; ";
      q = q->next; 
    }
}

/**************************************************/
/* Implementazione delle operazioni nel namespace */
/**************************************************/

/* crea la lista vuota */
void list::createEmpty(List& l) {
        List aux = new node;
        aux->info = EMPTYELEM;
        aux->next = aux;
        aux->prev = aux;
        l = aux;
}

/* "smantella" la lista svuotandola */
void list::clear(const List& l) {
        List last = l->prev;
        List tmp = new node;

        while(last != l) {
                tmp = last;
                last = last->prev;
                last->next = l;
                l->prev = last;
                delete tmp;
        }
}

/* restituisce l'elemento in posizione pos se presente; restituisce un elemento 
che per convenzione si decide che rappresenta l'elemento vuoto altrimenti*/
Elem list::get(int pos, const List& l) {
        

}

/* modifica l'elemento in posizione pos, se la posizione e' ammissibile */
void list::set(int pos, Elem e, const List& l) {

}

/* inserisce l'elemento in posizione pos, shiftando a destra gli altri elementi */
void list::add(int pos, Elem e, const List& l) {                                               
    
}

/* inserisce l'elemento alla fine della lista */
void list::addRear(Elem e,  const List& l) {
        List aux = new node;
        
        aux->info = e;
        aux->prev = l->prev;
        aux->next = l;
       
        l->prev->next = aux;
        l->prev = aux;
}

/* inserisce l'elemento all'inizio della lista */
void list::addFront(Elem e, const List& l) {
        List last = new node;
        List aux = new node;
        
        aux->info = e;
        aux->next = l->next;
        aux->prev = l;
        
        last->next = aux;
        
        l->next->prev = aux;
        l->next = aux;
}

/* cancella l'elemento in posizione pos dalla lista */
void list::removePos(int pos, const List& l) {

}

 /* cancella tutte le occorrenze dell'elemento elem, se presenti, dalla lista */
void list::removeEl(Elem e, const List& l) {
        List last = l->prev;
        List tmp = new node;

        while(last != l) {
                last = last->prev;
                if(last->next->info == e) {
                        tmp = last->next;
                        last->next = l;
                        l->prev = last;
                        delete tmp;
                }
        }
}

/* restituisce true se la lista e' vuota (ed e' vuota se il next di l, e' l stessa */
bool list::isEmpty(const List& l) {
        return l->next == l;
}

 /* restituisce la dimensione della lista */
int list::size(const List& l) {
        int size_l = 0;
        List aux = l->next;

        while(aux != l) {
                aux = aux->next;
                size_l++; 
        }

        return size_l;
}
