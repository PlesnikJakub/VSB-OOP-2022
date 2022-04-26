# Zadání projektu 

Projekt musí splňovat následující body:

* Bude obsahovat alespoň **6 rozdílných tříd**. Třídy budou obsahovat vlastní atributy, konstruktory a destruktor této třídy.
* Alespoň jednou bude v projektu implementováno **dynamické pole** objektů jiné třídy.
* Alespoň u jedné třídy bude vytvořen **přetížený konstruktor**.
* V projektu bude existovat **dědičná struktura**. 
* Implementace jedné **čistě abstraktní třídy**.
* V hlavní části bude vytvoření a použití několika instancí a volání metod.
* Všechny třídy budou mít **anglický název** ve svém vlastním souboru. 
* U každé třídy je vhodné také do poznámky v kódu krátce popsat, co třída reprezentuje.

Zadání nejsou nijak specifická, jedná se o nástřely témat v rámci kterých máte naimplementovat malý program a využít prvků, které jste se naučili. To jak zadání rozšíříte, je na vás. Cílem je ukázat, že ovládáte techniky, které jsme probírali.

V případě potřeby mě můžete kontaktovat.

## Témata projektů k implementaci.. 

### 1. Malá sociální síť :couple:
**Užiavatelé** sociální sítě mohou mezi sebou navázat **propojení**, vytvářet **komentáře** a **články**.
S dědičností je to tady horší, ale komentář i článek na zdi mají společné atributy - čas, autor, počet liků. Dále by šlo přidat různé typy uživatelů (user, admin) s nějakým společným předkem nebo různé typy přípspěvků (text, galerie, událost).

### 1. Kniha jízd :car:
Kniha jízd obsahuje **řidiče**, **vozidla**, **jízdy**, **gps souřadnice**. Třídy obsahují své specifické atributy.
Dědičnost se nabízí implementovat nad vozidly jako nákladní auto, osobní auto, etc nebo nad typy uživatelů. Jízdy mohou obsahovat pole gps polohu a metodu pro výpočet délky trasy.

### 1. Ordinace :ambulance:
Ordinace obsahuje **sestry**, **doktory** a **pacienty**. Všechny tyto třídy mohou mít jednoho společného předka, člověka. Dále sestry a doktoři jsou zaměstnanci. Vše můžete zabalit do třídy nemocnice nebo ambulance. Pacient u sebe může mít pole objektů typu dignóza.

### 1. UI aplikace :label:
Třídy, které budou simulovat dědičnou strukturu UI elementů. Od nejmenšího čistě abstraktního prvku **renderable**, přes **label**, **button** a další. 

Pokud si z výše uvedených projektů nemůžete vybrat, můžete implementovat vlastní téma. Podmínky zůstávají stejné.

## Odevzdání

:fire: Termín odevzdání je stanoven nejpozději na 13.5. :fire:

Z vyhotoveného projektu odstraňte vše tak, aby zůstaly jen soubory .h a .cpp. z těch vytvořte zip s vaším loginem a pošlete na můj mail s předmětem projekt-XXXXXX, kde XXXXX bude váš login. 

jakub.plesnik@vsb.cz

:warning: Nedodržení formátu a data odevzdání se rovná nesplnění. 

