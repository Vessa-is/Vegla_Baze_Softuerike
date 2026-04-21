# 🏥 Sistemi Mini i Menaxhimit të Radhës së Pacientëve (C++)

## 📌 Përshkrimi
Ky projekt është një simulim i thjeshtë në C++ që demonstron dallimin ndërmjet sistemeve **tradicionale (manuale)** dhe **digjitale** për menaxhimin e pacientëve në një ambient spitalor.

Programi përdor strukturën e radhës (queue) për të simuluar pacientët që presin për shërbim dhe krahason shpejtësinë e përpunimit ndërmjet dy qasjeve.

---

## 🎯 Qëllimi
Qëllimi i këtij projekti është:
- Të tregojë se sistemet manuale janë më të ngadalta dhe më pak efikase.  
- Të demonstrojë përparësitë e sistemeve digjitale.
- Të paraqesë një simulim të thjeshtë të një problemi real përmes C++.  

---

## ⚙️ Karakteristikat
- Simulim i radhës së pacientëve me `std::queue`  
- Përpunim manual (sistem i ngadalshëm)  
- Përpunim digjital (sistem i shpejtë)  
- Simulim i kohës me threads  
- Dalje e qartë në terminal për krahasim  

---

## 🧠 Konceptet e përdorura
- Struktura e të dhënave: Queue (`std::queue`)  
- Funksionet  
- Threads (`std::this_thread::sleep_for`)  
- Koha (`std::chrono`)  
- Input/Output në C++  

---

## 🧩 Si funksionon
1. Pacientët shtohen në një radhë  
2. Radhë përpunohet dy herë:
   - Një herë me sistem **manual** (më i ngadalshëm)  
   - Një herë me sistem **digjital** (më i shpejtë)  
3. Output-i tregon dallimin në kohën e përpunimit  

---

## ▶️ Si të ekzekutohet
./spitali
---
### Kompilo:
```bash
g++ spitali.cpp -o spitali

--- 

##  Shembull i ekzekutimit 
--- Sistemi Manual (I Ngadalshëm) ---
Processing: Patient A
Processing: Patient B
Processing: Patient C

--- Sistemi Digjital (I Shpejtë) ---
Processing: Patient A
Processing: Patient B
Processing: Patient C

Përfundim: Sistemet digjitale janë më të shpejta dhe më efikase.

testing merge 102