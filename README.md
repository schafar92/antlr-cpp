# C++ Dateien mit ANTLR parsen

```
# Daten aus Github holen (mit GitMiner)
# Danach werden in `../GitMiner/saved/_data/` die *.cpp Dateien sein, welche man dann weiterverwenden kann
cd ..
git clone http://github.com/schafar92/GitMiner
cd GitMiner
docker built -t gitminer .
docker volume create saved
docker run --mount source=saved,target=/saved -it gitminer -q 'filename:parallel size:>10000 extension:cpp pragma omp parallel for in:file' -m any -c "user_session=oGFt_l9cRzBLuv6IlaFDevXjjZnfUEbd5X3_t; logged_in=yes; has_recent_activity=1; dotcom_user=schafar92; _octo=GH1.1.631978107.1525264918; _gh_sess=VmdyL00wcUJMncWNhVWF4MUFBdVlvVUQrOFU0ZTNkNlFHRDJyL2I1a25oWnVTdUE3OUgveXNKSlQ3MUlXNW9aZ2Z5WkE5NzJUdld6eHFqc1hLYlNYQUhsMlJ3WGpXb2IrazdxWnVITFFrQlJ5WWY4UDlYb0lQOXlsaXpZZ3plMTAzRHRrcC96NytrRzR0N3ErYWhmVEFOMWEwdHJXQlRodWdnelZFVG8rdWlPKzhOUHZoeFNRbUhqbjd2L3orNHZWbWJtMVg1Mk9jbkxHS0lXUUtSb1ozYy9GV0psZ05mUDlXOVA4TXI1akVKQm12M0px0NrL2FFbXhNZWdlV3c0Y2grQUhmMEJSUTJlQm4vU3RyUHdxWTE0TzkrQ0ZhYXNVbWN1MmxkZld1eEN3cXpyc29Hbk1QQzViei9BS2NkYVVxUjhOWGpVRnVvMk81LzgzT0dGN3pzPS0tYU5Dbks3ZT94a0lDZz09--45f19d7314f19108848b5fbf926f9a780; _ga=GA1.2.1952947312.1525677818; __Host-user_session_same_site=oGFt_l9cRzBLv6IlaFDevXjjZnfUEbpX3_t" 

# Einrichtung
java -jar ./antlr-4.7.1-complete.jar -Dlanguage=Cpp -no-listener -visitor -o antlr4-runtime CPP14.g4
mkdir build
cd build
cmake ../
make

# Programm starten.
# Dies liest alle *.cpp Dateien aus dem Ordner `code/5` und speichert die Ergebnisse in der Datei `code/5.csv`.
# Hier wurden die von Github heruntergeladenen Dateien in 3 Teile geteilt (code/3, code/4, code/5), um ein Abstürzen (Core dumped) des Programms zu vermeiden
./antlr4-tutorial code/5 code/5.csv

# Trainingsdaten und Testdaten aufbereiten
# Dies liest alle Datensätze aus `code/5.csv`, teilt diese zufällig in 90% Trainings- und 10% Testdaten auf, und hängt sie an die Dateien `_train.csv` und `_test.csv` an. Die csv-Kopfzeilen dieser beiden Dateien `code,pragma,line` muss bereits vorhanden sein.
node extract_test_data.js code/5.csv

# Trainieren und Ergebnis anzeigen
python ./result.py
python ./grid-search-best-params.py
python ./result-grid-search.py

# Annotationen in Code einfügen
# Dies nutzt `../_train.csv` als Trainingsdaten, `../tmp.csv` als Feature-Daten (diese enthalten die For-Schleifen und deren Zeilennummer), `../code/5/xxx.cpp` als Ausgangsdatei und schreibt den optimierten Code in `../output/xxx.cpp`
# Dies wird intern vom Befehl `./antlr4-tutorial code/5 data.csv process` genutzt (`process` soll bedeuten, dass die Datei durchgearbeitet wird)
python ../optimize_cpp_file.py ../_train.csv ../tmp.csv ../code/5/xxx.cpp ../output/xxx.cpp
```

**You can read an article on the example on [Getting started with ANTLR in C++](https://tomassetti.me/getting-started-antlr-cpp/)**
