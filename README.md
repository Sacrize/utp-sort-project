### Zadanie

- [x] Utworzyć i dodać treść do README.md.
- [ ] Aplikacja powinien się składać z minimum 5 plików kodu źródłowego.
- [ ] Każdy z członków zespołu powinien wykonać minimum 7 commitów.
- [ ] Każdą funkcjonalność rozwijać w osobnej gałęzi,
- [ ] Przeprowadzić minimum 5 pull requestów (każdy członek zespołu minimum 1).
- [ ] Doprowadzić do minimum 3 konfliktów i rozwiązać je.
- [ ] Wykonać operację rebase minimum 1 raz.
- [ ] Wszystkie operacje wykonywać z wiersza poleceń.

### Podział zadań

- [ ] Ada - ?
- [x] Kuba - Quick sort
- [ ] Patryk - ?
- [x] Łukasz - Bubble sort

### Wstępna konfiguracja
```
// Przechodzimy do lokalizacji, w której chcemy przechowywać repozytoria
> cd C:\Users\Kuba\Documents\

// Tworzymy folder na repozytoria.
> mkdir GitHub && cd GitHub

// Klonujemy repozytorium
> git clone https://github.com/Sacrize/utp-sort-project.git && cd utp-sort-project

// Dodajemy własny branch w nazwie typ sortowania np. bubble-sort
> git branch nazwa-sortowania

// Ustawiamy dodany branch na aktualny
> git checkout nazwa-sortowania

// pushujemy branch na serwer
> git push --set-upstream origin nazwa-sortowania
```

### Pisanie
- Teraz możemy otworzyć powyższą lokalizację w eksploratorze plików i uruchomić istniejący tam projekt visual studio.
- Dodajemy nowy plik .cpp do projektu (po prawej stronie w sidebarze "eksplorator rozwiązań"/"Source Files").
- Piszemy w nim swój algorytm na sortowanie.

```
// gdy robimy sobie przerwe od pisania to w konsoli
> git add -A

// w stringu wpisujemy co zrobilismy do tej pory od poprzedniego commita
> git commit -m "zrobiłem/am to i to"

// pushujemy zmiany na serwer
> git push
```

### UWAGA
Każdy musi zrobić przynajmniej 7 commitów, więc przy pisaniu dobrze robić sobie często przerwy (wykonać to co powyżej).
Pull requesty i konflikty będziemy robić na końcu.