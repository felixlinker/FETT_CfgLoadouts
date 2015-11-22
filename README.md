# FETT_CfgLoadouts

!!! Right now all explanations are only available in german. If you want a translation, contact me!!!

FETT CfgLoadouts v0.2.70

------------------------------
Installation
------------------------------

Einfach den Unterordner FETT_CfgLoadouts in den Missionsordner kopieren und folgende Zeilen in der description.ext hinzufuegen:

```
class CfgFunctions {
	#include "FETT_CfgLoadouts\CfgFunctions.hpp"
};
#include "FETT_CfgLoadouts\CfgLoadouts.hpp"
```

------------------------------
FETT_CfgLoadouts Einleitung
------------------------------

Dieses configbasierte Loadoutsystem erlaubt es Missionsbauern schnell Loadouts zu erstellen und auf haeufige Redundanzen zu verzichten.

------------------------------
Funktionsweise
------------------------------

Um mit diesen Loadouts umgehen zu koennen sollte man rudimentaer mit Configs unter ArmA umgehen koennen. Wer das nicht kann, wirft besser einen schnellen Blick auf das COnfigtutorial am Ende dieser Datei.

Jedes Loadout spiegelt eine Klasse wieder und besteht aus vier Unterklassen:
1. Container - Enthaelt die Uniform, Weste und Rucksack
2. Gear - Hier wird gespeichert, was fuer Ausruestung das Loadout beinhaltet, Dinge wie z.B. Helm, Karte, Fernglas, etc.
3. Weapons - Diese Klasse enthaelt die drei Unterklassen naemlich die primaryWeapon (Gewehr), die secondaryWeapon (z.B. Raketenwerfer) und die handGun (Pistole). Jeder dieser drei Klassen ist vom Typ der WeaponClass, mehr Erklaerung dazu spaeter.
4. Items - Diese Klasse speichert alle weiteren Items des Loadouts, Granaten, Medic Material und sonstiges.

Wie diese Klassen aufgebaut sind, kann in der CfgDefines gesehen werden. Die meisten Variablen sind vom Namen her selbsterklaerend. Der Suffix "_pool" bedeutet, dass nicht der gesamte Inhalt des Arrays dem Soldaten gegeben wird, sondern eines der Elemente ausgewaehlt wird. Daher duerfen in diesen Arrays nur Strings enthalten sein, die Classnames der Items darstellen.
Alle weiteren Arrays werden dem Loadout komplett hinzugefuegt und koennen folgendes enthalten: Entweder einen String, der den Classname eines Items direkt darstellt, oder ein Array nach der Struktur {"CLASSNAME",ANZAHL}, das vom gegebenen Typ CLASSNAME ANZAHL Items hinzufuegt.

Ein besonderer Blick sollte aber auf den Aufbau der WeaponClass gelegt werden. Die Variable weapon_pool[] beinhaltet die Waffen, aus denen ausgewaehlt werden soll. Es ist nicht moeglich Waffen verschiedener Kaliber einzubauen, bzw. man sollte es nicht tun, weil das Magazin ebenfalls definiert wird und dazu kein Pool zur Verfuegung steht. Dieser weapon_pool[] dient eher dazu, z.B. verschiedene Waffenskins zufaellig auswaehlen zu lassen.
Diese vier Pools waehlen die Attachments fuer die Waffe aus: muzzleAttachment_pool[], weaponRestingAttachment_pool[], barrelAttachment_poo[] und der scope_pool[], dazu sollte keine weitere Erklaerung notwendig sein.
magazine definiert das Magazin, magazineTracer das Tracer Magazin. magazinesMax definiert die maximale Anzahl an Magazinen inklusive Tracern. magazinesTracersEvery definiert das "Tracer-Intervall". Ist magazinesTracersEvery auf 3 gesetzt, bedeutet das, dass jedes dritte Magazin ein Tracer Magazin wird.
Es ist lediglich moeglich eine Maximalanzahl von Magazinen anzugeben, weil das Loadout sich automatisch darum kuemmern wird, die Anzahl an Magazinen auszugleichen. Dazu werden die Magazine fuer alle Waffen gleichmaessig verteilt. Sollte der Soldat also zu wenig Platz im Rucksack (oder sonstigen Containern) haben, dann wird er trotzdem alle Arten von Magazinen erhalten. Nur von allen anteilsmaessig weniger.

------------------------------
Aufbau eines Loadouts & Verwendung
------------------------------

Um ein Loadout zu erstellen, muss an nur alle Variablen entsprechend setzen.
Jeder Configeintrag, der in der CfgDefines.hpp gelistet ist, muss in jedem Loadout enthalten sein. Um sicherzugehen, dass jeder Eintrag enthalten ist, sollte immer mit Vererbungen gearbeitet werden.

Alle Loadouts, die verwendet werden sollen, muessen in der description.ext in der class CfgLoadouts {}; und als Unterklasse in der entsprechenden Fraktion enthalten sein.
Der Name der Fraktion wird durch den Namen der Unterklasse in der CfgLoadouts definiert.

------------------------------
Loadout anwenden
------------------------------

Um ein Loadout anzuwenden, muss man lediglich folgenden Funktionsaufruf verwenden:
["NAME DES LOADOUTS","NAME DER FRATKION",OBJEKT] call FETT_fnc_applyCfgLoadout;
Dabei stellt "NAME DES LOADOUTS" einen Eintrag in der CfgLoadouts dar. Wird er ausgelassen, wird der Classname des Objekts verwendet, dem das Loadout zugeteilt wird.
"NAME DER FRAKTION" die entsprechende Fraktion. Wird er ausgelassen, wird die Fraktion in den CfgVehicles des Objekts verwendet, dem das Loadout zugeteilt wird.
OBJEKT ist ein optionaler Parameter, der das Objekt darstellt, dem das Loadout hnizugefuegt werden soll. Wird dieser Parameter weggelassen, wird player verwendet.

------------------------------
Kleines Cfg Tutorial
------------------------------

Configs sind nichts als Daten. Aber sie haben ein paar Vorteile, die den Aufbau und die Strukturierung dieser Daten erheblich vereinfachen.

Es gibt zwei Arten von Datentypen: Klassen und Elementardaten.
Klassen werden folgendermassen definiert:
class NAME {};
Eine Klasse enthaelt mehrere weitere Klassen oder andere Elementardaten, die ihr untergeordnet sind, sodass man mittels eines Pfades darauf zugreifen kann.
Elementardaten werden wiefolgt definiert:
NAME = DATEN;
Ein paar Unterschiede zu Datentypen in .sqf gibt es dennoch, denn Arrays muessen definiert werden. Will man Arrays darstellen, muss man dies darstellen indem man [] hinter den Namen des Arrays schreibt. Ausserdem werden Arrays mit geschweiften Klammern umschlossen, hier ein kleines Beispiel:
ichBinEinArray[] = {1,2,3,"viertesElement"};

Ein wichtiger Teil von Configs ist die Vererbung. Eine andere Klasse kann von einer weiteren erben und das sieht ungefaehr so aus:

class ParentClass {
	string = "abc";
	number = 1;
	array[] = {1, 2, 3};
};
class ChildClass : ParentClass {
	number = 2;
};

Bei der Vererbung passiert folgendes: Die ChildClass "erbt" alle Inhalte der ParentClass. Sie werden einfach reinkopiert. Und ihr koennt sie ueberschreiben, indem ihr sie einfach neu schreibt. So koennt ihr komplexe Beziehungen aufbauen und somit Redundanzen vermeiden und den Code sicherer gestalten.

------------------------------
Changelog
------------------------------

- v0.2.50:
onApplyLoadout zu Loadouts hinzugefuegt. Code, der hier steht, wird ausgefuehrt, wenn einem Objekt ein Loadout hinzugefuegt wird. _this ist das Objekt.
- v0.2.70
Die Helme sind jetzt Teil der Container und nicht mehr des Gears
Das Gear enthält einen neuen Wert "special", alle Dinge dort drin werden per addItem hinzugefügt
Die Medicsysteme werden aus dem Template übernommen und das Medic Loadout kann im Ordner "Medical" eingestellt werden