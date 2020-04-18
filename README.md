# FETT_CfgLoadouts v0.4.0

Right now all explanations are only available in german.
If you'd like to see a translation, contact me.

## Installation

Einfach den Unterordner FETT_CfgLoadouts in den Missionsordner kopieren und folgende Zeilen in der description.ext hinzufügen:

```
class CfgFunctions {
	#include "FETT_CfgLoadouts\CfgFunctions.hpp"
};
class CfgLoadouts {
	#include "FETT_CfgLoadouts\presets.hpp"  // <-- optional
	// ... Loadouts go here ...
}
```

## Einleitung

Dieses config-basierte Loadoutsystem erlaubt es Missionsbaürn, schnell Loadouts zu erstellen und auf häufige Redundanzen zu verzichten.

### Funktionsweise

Um mit diesen Loadouts umgehen zu können sollte man rudimentär mit configs in ArmA umgehen können.

Jedes Loadout spiegelt eine Klasse wieder und besteht aus vier Unterklassen:
1. `Container` - Enthält die Uniform, Weste, Rucksack und Helm.
2. `Gear` - Hier wird gespeichert, was für Ausrüstung das Loadout beinhaltet, Dinge wie z.B. Karte, Fernglas, etc.
3. `Weapons` - Diese Klasse enthält die drei Unterklassen nämlich die `primaryWeapon` (Gewehr), die `secondaryWeapon` (z.B. Raketenwerfer) und die `handGun` (Pistole). Jeder dieser drei Klassen ist vom Typ der `WeaponClass`, mehr Erklärung dazu später.
4. `Items` - Diese Klasse speichert alle weiteren Items des Loadouts, Granaten, Medic Material und sonstiges.

Wie diese Klassen aufgebaut sind, kann in der `CfgDefines` gesehen werden.
Die meisten Variablen sind vom Namen her selbsterklärend.
Der Suffix `_pool` bedeutet, dass nicht der gesamte Inhalt des Arrays dem Soldaten gegeben wird, sondern eines der Elemente ausgewählt wird.
Daher dürfen in diesen Arrays nur Strings enthalten sein, die Classnames der Items darstellen.
Alle weiteren Arrays werden dem Loadout komplett hinzugefügt und können folgendes enthalten:
Entweder einen String, der den classname eines Items direkt darstellt, oder ein Array nach der Struktur `{"CLASSNAME",ANZAHL}`, das vom gegebenen Typ `CLASSNAME` `ANZAHL` Items hinzufügt.

Ein besonderer Blick sollte aber auf den Aufbau der `WeaponClass` gelegt werden.
Die Variable `weapon_pool[]` beinhaltet die Waffen, aus denen ausgewählt werden soll.
Es ist nicht möglich Waffen verschiedener Kaliber einzubaün, bzw. man sollte es nicht tun, weil das Magazin ebenfalls definiert wird und dazu kein Pool zur Verfügung steht.
Dieser `weapon_pool[]` dient eher dazu, z.B. verschiedene Waffenskins zufällig auswählen zu lassen.
Diese vier Pools wählen die Attachments für die Waffe aus: `muzzleAttachment_pool[]`, `weaponRestingAttachment_pool[]`, `barrelAttachment_pool[]` und der `scope_pool[]`, dazu sollte keine weitere Erklärung notwendig sein.
`magazine` definiert das Magazin, `magazineTracer` das Tracer Magazin.
`magazinesMax` definiert die maximale Anzahl an Magazinen inklusive Tracern. `magazinesTracersEvery` definiert das "Tracer-Intervall".
Ist `magazinesTracersEvery` auf 3 gesetzt, bedeutet das, dass jedes dritte Magazin ein Tracer Magazin wird.
Es ist lediglich möglich eine Maximalanzahl von Magazinen anzugeben, weil das Loadout sich automatisch darum kümmern wird, die Anzahl an Magazinen auszugleichen.
Dazu werden die Magazine für alle Waffen gleichmäßig verteilt.
Sollte der Soldat also zu wenig Platz im Rucksack (oder sonstigen Containern) haben, dann wird er trotzdem alle Arten von Magazinen erhalten.
Nur von allen anteilsmäßig weniger.

### Aufbau eines Loadouts & Verwendung

Um ein Loadout zu erstellen, muss an nur alle Variablen entsprechend setzen.
Jeder configeintrag, der in der `CfgDefines.hpp` gelistet ist, muss in jedem Loadout enthalten sein. Um sicherzugehen, dass jeder Eintrag enthalten ist, sollte immer mit Vererbungen gearbeitet werden.

Alle Loadouts, die verwendet werden sollen, müssen in der `description.ext` in der `class CfgLoadouts {};` und als Unterklasse in der entsprechenden Fraktion enthalten sein.
Der Name der Fraktion wird durch den Namen der Unterklasse in der `CfgLoadouts` definiert.

### Loadout anwenden

Um ein Loadout anzuwenden, muss man lediglich folgenden Funktionsaufruf verwenden:
```
["NAME DES LOADOUTS",OBJEKT] call FETT_fnc_applyCfgLoadout;
```

Dabei stellt `"NAME DES LOADOUTS"` einen Eintrag in der `CfgLoadouts` dar. Wird er ausgelassen, wird der classname des Objekts verwendet, dem das Loadout zugeteilt wird.
`OBJEKT` ist ein optionaler Parameter, der das Objekt darstellt, dem das Loadout hinzugefügt werden soll.
Wird dieser Parameter weggelassen, wird player verwendet.

## Changelog

- **v0.2.50**:
`onApplyLoadout` zu Loadouts hinzugefügt.
Code, der hier steht, wird ausgeführt, wenn einem Objekt ein Loadout hinzugefügt wird.
`_this` ist das Objekt.
- **v0.2.70**:
Die Helme sind jetzt Teil der Container und nicht mehr des Gears.
Das Gear enthält einen neuen Wert `special`, alle Items darin werden per `addItem` hinzugefügt
Die Medicsysteme werden aus dem Template übernommen und das Medic Loadout kann im Ordner "Medical" eingestellt werden
- **v0.3.0**:
Umstellung auf ACRE.
Delayed execution für loadouts.
- **v0.4.0**:
Fraktionen entfernt.
Loadouts entfernt.
Presets erweitert und vereinfacht.
