
#include "stdafx.h"
#include "SpaceMonger.h"
#include "lang.h"

static const char *densitynames[] = {
	"Petit Peu de Fichiers", "Peu de Fichiers", "Normal", "Beaucoup de Fichiers",
	"Tr�s Beaucoup de Fichiers", "Trop de Fichiers",
};

static const char *uscolornames[] = {
	"Arc-en-Ceil", "Colours de Windows", "Blanc", "Gris Clair", "Gris Fonc�",
	"Rouge", "Orange", "Jaune", "Vert", "Aqua", "Bleu", "Violette",
};

static const char *monthnames[] = {
	"Jan", "Fev", "Mars", "Avril", "Mai", "Juin",
	"Juil", "Ao�t", "Sep", "Oct", "Nov", "Dec",
};

static const char *attribnames[] = {
	"Arch", "Compress", "Dossier", "Encrypt", "Cach�", "Pas-au-ligne",
	"Lire-Seulement", "Reparse-Pt", "Clairsem�", "Syst�me", "Temp",
};

Lang LangFr = {
	IDR_TOOLBAR_FR,
	"De SpaceMonger",
	"CE PROGRAMME EST FREEWARE.",
	"�You may distribute this program freely.  Because this program is"
		" free, the author cannot and will not assume responsibility"
		" for this program's behavior.  There are no warranties of any"
		" kind, expressed or implied, on this product.�",
	"Vous avez des questions?  Trouvez un �bug�?  Voudriez quelque-chose?  "
		"Envoyez e-mail � �sean@werkema.com�.",
	"D'accord", "Annul",
	"octets", "Ko", "Mo", "Go",
	"<l'Espace Libre: %d,%d%%>",
	"&Vrombir", "&D�marrer", "Voir &Tout", "&Ex�cuter", "&Effacer",
	"&Ouvrir un Disque...", "&Rouvrir", "&Montrer l'Espace Libre",
	"%lu,%01lu%%", "%lu,%01lu %s",
	"Total", "Libre", "Fichiers Totals:", "Dossiers Totals:", "Fichiers Trouv�s:", "Dossiers Trouv�s:",
	',', '.',
	densitynames, uscolornames, monthnames, attribnames,
	"Effacer...",
	"Choisir un Disque",
	"Scruter le Disque...",
	"Configuration de SpaceMonger",
	"Orientation des Fichiers", "Densit�:", "Orient:", "Horz", "�gale", "Vert",
	"Colours", "Fichiers", "Dossiers",
	"�ToolTips�", "Montrer Nom �ToolTips�", "Montrer Info �ToolTips�", "D�lai:", "msec",
	"Sentier", "Nom-fichier", "Petit Icon", "Icon", "Date/Heure", "Octets", "Attributs",
	"Autres Options",
	"Auto-Rouvrir � Effacer", "Pas de Command �Effacer�",
	"Vrombir Anim�", "Souvenir Position du Window",
	"Montrer les Boites �Rollovers�",
	"Properties...",
};
