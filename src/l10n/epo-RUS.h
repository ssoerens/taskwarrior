////////////////////////////////////////////////////////////////////////////////
//
// Copyright 2006 - 2017, Paul Beckingham, Federico Hernandez.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included
// in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
// THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//
// http://www.opensource.org/licenses/mit-license.php
//
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
//
// This file contains all the strings that should be localized.  If a string is
// *not* in this file, then either:
//   (a) it should not be localized, or
//   (b) you have found a bug - please report it
//
// Strings that should be localized:
//   - text output that the user sees
//
// Strings that should NOT be localized:
//   - .taskrc configuration variable names
//   - command names
//   - extension function names
//   - certain literals associated with parsing
//   - debug strings
//   - attribute names
//   - modifier names
//   - logical operators (and, or, xor)
//
// Rules:
//   - Localized strings should not in general  contain leading or trailing
//     white space, including \n, thus allowing the code to compose strings.
//   - Retain the tense of the original string.
//   - Retain the same degree of verbosity of the original string.
//
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
//
// Translators:
//   1. Copy this file (eng-USA.h) to a new file with the target locale as the
//      file name.  Using German as an example, do this:
//
//        cp eng-USA.h deu-DEU.h
//
//   2. Modify all the strings below.
//        i.e. change "Unknown error." to "Unbekannter Fehler.".
//
//   3. Add your new translation to the task.git/src/i18n.h file, if necessary,
//      by inserting:
//
//        #elif PACKAGE_LANGUAGE == LANGUAGE_DEU_DEU
//        #include <deu-DEU.h>
//
//   4. Add your new language to task.git/CMakeLists.txt, making sure that
//      number is unique:
//
//        set (LANGUAGE_DEU_DEU 3)
//
//   5. Add your new language to task.git/cmake.h.in:
//
//        #define LANGUAGE_DEU_DEU ${LANGUAGE_DEU_DEU}
//
//   6. Build your localized Taskwarrior with these commands:
//
//      cd task.git
//      cmake -D LANGUAGE=3 .
//      make
//
//   7. Submit your translation to support@taskwarrior.org, where it will be
//      shared with others.
//
////////////////////////////////////////////////////////////////////////////////

#ifndef INCLUDED_STRINGS
#define INCLUDED_STRINGS

// Note that for English, the following two lines are not displayed.  For all
// other localizations, these lines will appear in the output of the 'version'
// and 'diagnostics' commands.
//
// DO NOT include a copyright in the translation.
//
#define STRING_LOCALIZATION_DESC     "— Esperanta lokalaĵo"
#define STRING_LOCALIZATION_AUTHOR   "Tradukita al la Internacia Lingvo per Jeremy John Reeder"

// Parser
#define STRING_PARSER_ALIAS_NEST     "Atingis la limon de {1} nest-niveloj de alinomoj."
#define STRING_PARSER_OVERRIDE_RC    "Agorda superrego rc.{1}:{2}"
#define STRING_PARSER_UNKNOWN_ATTMOD "Eraro: nekonata atributa modifanto '{1}'."
#define STRING_PARSER_ALTERNATE_RC   "Uzanta alterna .taskrc-dosiero {1}"
#define STRING_PARSER_ALTERNATE_DATA "Uzanta alterna data.location {1}"
#define STRING_PARSER_UNEXPECTED_ARG "The '{1}' command does not allow '{2}'."

// Color
#define STRING_COLOR_UNRECOGNIZED    "Koloro '{1}' ne rekonata."

// columns/Col*
#define STRING_COLUMN_BAD_NAME       "Nekonata kolumna nomo '{1}'."
#define STRING_COLUMN_BAD_FORMAT     "Nekonata kolumna formiĝo '{1}.{2}'"
#define STRING_COLUMN_LABEL_TASKS    "Tasko"
#define STRING_COLUMN_LABEL_DEP      "Dependoj"
#define STRING_COLUMN_LABEL_DEP_S    "Dep"
#define STRING_COLUMN_LABEL_DESC     "Priskribo"
#define STRING_COLUMN_LABEL_DUE      "Datlimo"
#define STRING_COLUMN_LABEL_END      "Fino"
#define STRING_COLUMN_LABEL_ENTERED  "Kreita"
#define STRING_COLUMN_LABEL_COUNT    "Nombro"
#define STRING_COLUMN_LABEL_COMPLETE "Finita"
#define STRING_COLUMN_LABEL_MOD      "Modifo"
#define STRING_COLUMN_LABEL_ADDED    "Kreita"
#define STRING_COLUMN_LABEL_AGE      "Aĝo"
#define STRING_COLUMN_LABEL_ID       "ID"
#define STRING_COLUMN_LABEL_PROJECT  "Projekto"
#define STRING_COLUMN_LABEL_UNTIL    "Ĝis"
#define STRING_COLUMN_LABEL_WAIT     "Atendu"
#define STRING_COLUMN_LABEL_WAITING  "Atendu ĝis"
#define STRING_COLUMN_LABEL_RECUR    "Reokazas"
#define STRING_COLUMN_LABEL_RECUR_L  "Reokazas ĉiu"
#define STRING_COLUMN_LABEL_START    "Eko"
#define STRING_COLUMN_LABEL_STARTED  "Ekita"
#define STRING_COLUMN_LABEL_ACTIVE   "Ak"
#define STRING_COLUMN_LABEL_STATUS   "Stato"
#define STRING_COLUMN_LABEL_STAT     "St"
#define STRING_COLUMN_LABEL_STAT_PE  "Pendanta"
#define STRING_COLUMN_LABEL_STAT_CO  "Finita"
#define STRING_COLUMN_LABEL_STAT_DE  "Viŝita"
#define STRING_COLUMN_LABEL_STAT_WA  "Atendanta"
#define STRING_COLUMN_LABEL_STAT_RE  "Reokazanta"
#define STRING_COLUMN_LABEL_STAT_P   "Pd"
#define STRING_COLUMN_LABEL_STAT_C   "Fn"
#define STRING_COLUMN_LABEL_STAT_D   "Vŝ"
#define STRING_COLUMN_LABEL_STAT_W   "At"
#define STRING_COLUMN_LABEL_STAT_R   "Re"
#define STRING_COLUMN_LABEL_TAGS     "Etikedoj"
#define STRING_COLUMN_LABEL_TAG      "Etik"
#define STRING_COLUMN_LABEL_UUID     "UUID"
#define STRING_COLUMN_LABEL_URGENCY  "Urĝeco"
#define STRING_COLUMN_LABEL_NAME     "Nomo"
#define STRING_COLUMN_LABEL_VALUE    "Valoro"
#define STRING_COLUMN_LABEL_MASK     "Masko"
#define STRING_COLUMN_LABEL_MASK_IDX "Mask-indico"
#define STRING_COLUMN_LABEL_LAST     "Last instance"
#define STRING_COLUMN_LABEL_RTYPE    "Recurrence type"
#define STRING_COLUMN_LABEL_PARENT   "Patra tasko"
#define STRING_COLUMN_LABEL_TEMPLATE "Template task"
#define STRING_COLUMN_LABEL_DATE     "Dato"
#define STRING_COLUMN_LABEL_COLUMN   "Kolumnoj"
#define STRING_COLUMN_LABEL_STYLES   "Formaĝoj Subtenataj"
#define STRING_COLUMN_LABEL_EXAMPLES "Ekzemplo"
#define STRING_COLUMN_LABEL_SCHED    "Fiksa"
#define STRING_COLUMN_LABEL_UDA      "Nomo"
#define STRING_COLUMN_LABEL_TYPE     "Tipo"
#define STRING_COLUMN_LABEL_MODIFY   "Modifiable"
#define STRING_COLUMN_LABEL_NOMODIFY "Read Only"
#define STRING_COLUMN_LABEL_LABEL    "Rubriko"
#define STRING_COLUMN_LABEL_DEFAULT  "Defaŭlto"
#define STRING_COLUMN_LABEL_VALUES   "Valoroj permesataj"
#define STRING_COLUMN_LABEL_UDACOUNT "Nombro de uzoj"
#define STRING_COLUMN_LABEL_ORPHAN   "Orfa UDA"

#define STRING_COLUMN_LABEL_COMMAND  "Command"
#define STRING_COLUMN_LABEL_CATEGORY "Category"
#define STRING_COLUMN_LABEL_RO       "R/W"
#define STRING_COLUMN_LABEL_SHOWS_ID "ID"
#define STRING_COLUMN_LABEL_GC       "GC"
#define STRING_COLUMN_LABEL_CONTEXT  "Context"
#define STRING_COLUMN_LABEL_FILTER   "Filter"
#define STRING_COLUMN_LABEL_MODS     "Mods"
#define STRING_COLUMN_LABEL_MISC     "Misc"

// Column Examples
#define STRING_COLUMN_EXAMPLES_TAGS  "domo @aĉo next"
#define STRING_COLUMN_EXAMPLES_PROJ  "domo.ĝardeno"
#define STRING_COLUMN_EXAMPLES_PAR   "domo"
#define STRING_COLUMN_EXAMPLES_IND   "  domo.ĝardeno"
#define STRING_COLUMN_EXAMPLES_DESC  "Transloki vian robon suben al la fundan kejlon"
#define STRING_COLUMN_EXAMPLES_ANNO1 "Juste antaŭ tagmanĝi"
#define STRING_COLUMN_EXAMPLES_ANNO2 "Se vi ludos en la maĉo hodiaŭ posttagmeze"
#define STRING_COLUMN_EXAMPLES_ANNO3 "Antaŭ skribi poŝtaĵon hejmen"
#define STRING_COLUMN_EXAMPLES_ANNO4 "Se vi ne faŝonas al si la hararon"

// commands/Cmd*
// USAGE strings are visible in 'task help'
#define STRING_CMD_CONFLICT          "Personala raporto '{1}' konfliktas kun enkonstruita taskkomando."
#define STRING_CMD_VERSION_USAGE     "Montras la versinombro de taskwarrior"
#define STRING_CMD_VERSION_USAGE2    "Montras sole la versinombro de taskwarrior"
#define STRING_CMD_VERSION_MIT       "Oni sole povas kopii Taskwarrior sur la MIT-permisilo, kiun oni povas trovi en la fontkodpako."
#define STRING_CMD_VERSION_DOCS      "Oni povas trovi la dokumentojn por Taskwarrior kun 'man task', 'man taskrc', 'man task-tutorial', 'man task-color', 'man task-sync', 'man task-faq', aŭ ĉe http://taskwarrior.org."
#define STRING_CMD_VERSION_BUILT     "{1} {2} kompilita por "
#define STRING_CMD_VERSION_UNKNOWN   "nekonata"
#define STRING_CMD_VERSION_COPY      "Kopirajto © 2006 - 2016 P. Beckingham, F. Hernandez."
#define STRING_CMD_LOGO_USAGE        "Montras la logotipon de Taskwarrior"
#define STRING_CMD_LOGO_COLOR_REQ    "La komando 'logo' bezonas, ke la kolor-subtenado estus ebligata."
#define STRING_CMD_EXEC_USAGE        "Lanĉas komandojn kaj skribojn eksternajn"
#define STRING_CMD_URGENCY_USAGE     "Montras la urĝec-mezuro de tasko"
#define STRING_CMD_URGENCY_RESULT    "tasko {1} urĝeco {2}"
#define STRING_CMD_ADD_USAGE         "Kreas novan taskon"
#define STRING_CMD_ADD_FEEDBACK      "Kreis taskon {1}."
#define STRING_CMD_ADD_RECUR         "Created task {1} (recurrence template)."
#define STRING_CMD_LOG_USAGE         "Kreas novan jamfinitan taskon"
#define STRING_CMD_LOG_NO_RECUR      "Oni ne povas fari taskojn reokazantajn kun 'log'."
#define STRING_CMD_LOG_NO_WAITING    "Oni ne povas fari taskojn atendantajn kun 'log'."

//#define STRING_CMD_LOG_LOGGED        "Registris taskon."
#define STRING_CMD_LOG_LOGGED        "Logged task {1}."

#define STRING_CMD_IDS_USAGE_RANGE   "Montras la identigilon de ĉia kongruanta tasko, kiel atingopovo"
#define STRING_CMD_IDS_USAGE_LIST    "Montras la identigilon de ĉia kongruanta tasko, kiel listo"
#define STRING_CMD_IDS_USAGE_ZSH     "Montras la identigilon kaj la priskribon de ĉia kongruanta tasko"
#define STRING_CMD_UDAS_USAGE        "Montras la detalojn de ĉia definita UDA"
#define STRING_CMD_UDAS_COMPL_USAGE  "Montras ĉian definitan UDA, por motivo memkompletada"
#define STRING_CMD_UUIDS_USAGE_RANGE "Montras la UUID-identigilon de ĉia kongruanta tasko, en forma de listo perkome disigita"
#define STRING_CMD_UUIDS_USAGE_LIST  "Montras la UUID-identigilon de ĉia kongruanta tasko, en forma de listo"
#define STRING_CMD_UUIDS_USAGE_ZSH   "Montras la UUID-identigilon kaj la priskribojn de ĉia kongruanta tasko"
#define STRING_CMD_EXPORT_USAGE      "Eksportas taskojn, je JSON-aranĝo"
#define STRING_CMD_INFO_USAGE        "Montras datumojn kaj metadatumojn"
#define STRING_CMD_INFO_BLOCKED      "Tiu tasko blokata per"
#define STRING_CMD_INFO_BLOCKING     "Tiu tasko blokas"
#define STRING_CMD_INFO_UNTIL        "Ĝis"
#define STRING_CMD_INFO_MODIFICATION "Modifado"
#define STRING_CMD_INFO_MODIFIED     "Modifado lasta"
#define STRING_CMD_INFO_VIRTUAL_TAGS "Virtual tags"
#define STRING_CMD_UNDO_USAGE        "Malfaras la plej malfrua modifado al tasko"
#define STRING_CMD_STATS_USAGE       "Montras statistikon de la taska datumbazo"
#define STRING_CMD_STATS_CATEGORY    "Kategorio"
#define STRING_CMD_STATS_DATA        "datumoj"
#define STRING_CMD_STATS_TOTAL       "Totalo"
#define STRING_CMD_STATS_ANNOTATIONS "Komentoj"
#define STRING_CMD_STATS_UNIQUE_TAGS "Unikaj etikedoj"
#define STRING_CMD_STATS_PROJECTS    "Projektoj"
#define STRING_CMD_STATS_DATA_SIZE   "Datena grandeco"
#define STRING_CMD_STATS_UNDO_TXNS   "Malfaradoj"
#define STRING_CMD_STATS_BACKLOG     "Sinkronigadoj"
#define STRING_CMD_STATS_TAGGED      "Taskoj etikedataj"
#define STRING_CMD_STATS_OLDEST      "Plej malnova tasko"
#define STRING_CMD_STATS_NEWEST      "Plej nova tasko"
#define STRING_CMD_STATS_USED_FOR    "Taskwarrior uzata ekde"
#define STRING_CMD_STATS_ADD_EVERY   "Tasko kreata ĉiu"
#define STRING_CMD_STATS_COMP_EVERY  "Tasko finata ĉiu"
#define STRING_CMD_STATS_DEL_EVERY   "Tasko viŝata ĉiu"
#define STRING_CMD_STATS_AVG_PEND    "Meznª pendtempo"
#define STRING_CMD_STATS_DESC_LEN    "Meznª priskriblongeco"
#define STRING_CMD_STATS_CHARS       "{1} signojn"
#define STRING_CMD_STATS_BLOCKED     "Taskoj blokataj"
#define STRING_CMD_STATS_BLOCKING    "Taskoj blokantaj"
#define STRING_CMD_REPORTS_USAGE     "Listigas ĉian raporton subtenatan"
#define STRING_CMD_REPORTS_REPORT    "Raporto"
#define STRING_CMD_REPORTS_DESC      "Priskribo"
#define STRING_CMD_REPORTS_SUMMARY   "{1} raportoj"
#define STRING_CMD_TAGS_USAGE        "Montras listo de ĉia uzata etikedo"
#define STRING_CMD_COMTAGS_USAGE     "Montras sole listo de ĉia uzata etikedo, por motivo memkompletada"
#define STRING_CMD_TAGS_SINGLE       "1 etikedo"
#define STRING_CMD_TAGS_PLURAL       "{1} etikedoj"
#define STRING_CMD_TAGS_NO_TAGS      "Nenia etikedo."
#define STRING_CMD_HISTORY_USAGE_D   "Shows a report of task history, by day"
#define STRING_CMD_HISTORY_USAGE_W   "Shows a report of task history, by week"
#define STRING_CMD_HISTORY_USAGE_M   "Montras raporton de taska historio, per monato"
#define STRING_CMD_HISTORY_YEAR      "Jaro"
#define STRING_CMD_HISTORY_MONTH     "Monato"
#define STRING_CMD_HISTORY_DAY       "Day"
#define STRING_CMD_HISTORY_ADDED     "Kreitaj"
#define STRING_CMD_HISTORY_COMP      "Finitaj"
#define STRING_CMD_HISTORY_DEL       "Viŝitaj"
#define STRING_CMD_HISTORY_NET       "Neto"
#define STRING_CMD_HISTORY_USAGE_A   "Montras raporton de taska historio, per jaro"
#define STRING_CMD_HISTORY_AVERAGE   "Meznombro"
#define STRING_CMD_HISTORY_LEGEND    "Gamo: {1}, {2}, {3}"
#define STRING_CMD_HISTORY_LEGEND_A  "Gamo: + kreita, X finita, - viŝita"
#define STRING_CMD_GHISTORY_USAGE_D  "Shows a graphical report of task history, by day"
#define STRING_CMD_GHISTORY_USAGE_W  "Shows a graphical report of task history, by week"
#define STRING_CMD_GHISTORY_USAGE_M  "Montras grafikan raporton de taska historio, per monato"
#define STRING_CMD_GHISTORY_USAGE_A  "Montras grafikan raporton de taska historio, per jaro"
#define STRING_CMD_GHISTORY_YEAR     "Jaro"
#define STRING_CMD_GHISTORY_MONTH    "Monato"
#define STRING_CMD_GHISTORY_DAY      "Day"
#define STRING_CMD_GHISTORY_NUMBER   "Nombro Kreitaj/Finitaj/Viŝitaj"
#define STRING_CMD_UNIQUE_USAGE      "Generates lists of unique attribute values"
#define STRING_CMD_UNIQUE_MISSING    "An attribute must be specified.  See 'task _columns'."
#define STRING_CMD_UNIQUE_VALID      "You must specify an attribute or UDA."

#define STRING_CMD_DONE_USAGE        "Markas la specifatan taskon kiel finita"
#define STRING_CMD_DONE_CONFIRM      "Fini taskon {1} '{2}'?"
#define STRING_CMD_DONE_TASK         "Finis taskon {1} '{2}'."
#define STRING_CMD_DONE_NO           "Tasko nefinita."
#define STRING_CMD_DONE_NOTPEND      "La tasko {1} '{2}' ne estas ni pendanta ni atendanta."
#define STRING_CMD_DONE_1            "Finis {1} taskon."
#define STRING_CMD_DONE_N            "Finis {1} taskojn."

#define STRING_CMD_PROJECTS_USAGE    "Montras la uzatajn projekt-nomojn"
#define STRING_CMD_PROJECTS_USAGE_2  "Montras sole liston de ĉia uzata projekt-nomo"
#define STRING_CMD_PROJECTS_NO       "Nenia projekto."
#define STRING_CMD_PROJECTS_NONE     "(nenio)"
#define STRING_CMD_PROJECTS_SUMMARY  "{1} projekto"
#define STRING_CMD_PROJECTS_SUMMARY2 "{1} projektoj"
#define STRING_CMD_PROJECTS_TASK     "({1} tasko)"
#define STRING_CMD_PROJECTS_TASKS    "({1} taskoj)"
#define STRING_CMD_SUMMARY_USAGE     "Montras raporton de taska statuso per projekto"
#define STRING_CMD_SUMMARY_PROJECT   "Projekto"
#define STRING_CMD_SUMMARY_REMAINING "Restantaj"
#define STRING_CMD_SUMMARY_AVG_AGE   "Meznª aĝo"
#define STRING_CMD_SUMMARY_COMPLETE  "Finitaj"
#define STRING_CMD_SUMMARY_NONE      "(nenio)"
#define STRING_CMD_COUNT_USAGE       "Nombras kongruantajn taskojn"
#define STRING_CMD_GET_USAGE         "DOM-enirilo"
#define STRING_CMD_GET_NO_DOM        "Nenia DOM-referenco specifata."
#define STRING_CMD_GET_BAD_REF       "'{1}' is not a DOM reference."

#define STRING_CMD_UDAS_NO           "Nenia UDA definita."
#define STRING_CMD_UDAS_SUMMARY      "{1} UDA definita"
#define STRING_CMD_UDAS_SUMMARY2     "{1} UDA definitaj"
#define STRING_CMD_UDAS_ORPHAN       "{1} Orfa UDA"
#define STRING_CMD_UDAS_ORPHANS      "{1} Orfaj UDA"

#define STRING_CMD_DELETE_USAGE      "Viŝas la specifatan taskon"
#define STRING_CMD_DELETE_CONFIRM    "Forviŝi taskon {1} '{2}'?"
#define STRING_CMD_DELETE_TASK       "Viŝanta taskon {1} '{2}'."
#define STRING_CMD_DELETE_TASK_R     "Viŝanta reokazantan taskon {1} '{2}'."
#define STRING_CMD_DELETE_CONFIRM_R  "Tio estas reokazanta tasko. Ĉu vi volas viŝi ĉian pendantan okazon?"
#define STRING_CMD_DELETE_NO         "Ne viŝis taskon."
#define STRING_CMD_DELETE_NOT_DEL    "Tasko {1} '{2}' ne estas viŝebla."
#define STRING_CMD_DELETE_1          "Viŝis {1} taskon."
#define STRING_CMD_DELETE_N          "Viŝis {1} taskojn."

#define STRING_CMD_DUPLICATE_USAGE   "Kopias la specifatan taskon"
#define STRING_CMD_DUPLICATE_REC     "Notu: tasko {1} estis patra reokazanta tasko.  La kopia tasko ankaŭ estas."
#define STRING_CMD_DUPLICATE_NON_REC "Notu: tasko {1} estis reokazanta tasko.  La kopia tasko ne estas."
#define STRING_CMD_DUPLICATE_CONFIRM "Kopii taskon {1} '{2}'?"
#define STRING_CMD_DUPLICATE_TASK    "Kopiis taskon {1} '{2}'."
#define STRING_CMD_DUPLICATE_NO      "Ne kopiis taskon."
#define STRING_CMD_DUPLICATE_1       "Kopiis {1} taskon."
#define STRING_CMD_DUPLICATE_N       "Kopiis {1} taskojn."

#define STRING_CMD_PURGE_USAGE       "Removes the specified tasks from the data files. Causes permanent loss of data."
#define STRING_CMD_PURGE_ABRT        "Purge operation aborted."
#define STRING_CMD_PURGE_1           "Purged {1} task."
#define STRING_CMD_PURGE_N           "Purged {1} tasks."
#define STRING_CMD_PURGE_CONFIRM     "Permanently remove task {1} '{2}'?"
#define STRING_CMD_PURGE_CONFIRM_R   "Task '{1}' is a recurrence template. All its {2} deleted children tasks will be purged as well. Continue?"
#define STRING_CMD_PURGE_NDEL_CHILD  "Task '{1}' is a recurrence template. Its child task {2} must be deleted before it can be purged."

#define STRING_CMD_START_USAGE       "Markas la specifatan taskon kiel ekita"
#define STRING_CMD_START_NO          "Ne ekis taskon."
#define STRING_CMD_START_ALREADY     "Tasko {1} '{2}' jam ekita."
#define STRING_CMD_START_TASK        "Ekanta taskon {1} '{2}'."
#define STRING_CMD_START_CONFIRM     "Eki taskon {1} '{2}'?"
#define STRING_CMD_START_1           "Ekis {1} taskon."
#define STRING_CMD_START_N           "Ekis {1} taskojn."

#define STRING_CMD_STOP_USAGE        "Viŝas la ek-tempon de tasko"
#define STRING_CMD_STOP_NO           "Tasko ne haltita."
#define STRING_CMD_STOP_ALREADY      "Tasko {1} '{2}' ne ekita."
#define STRING_CMD_STOP_TASK         "Haltanta taskon {1} '{2}'."
#define STRING_CMD_STOP_CONFIRM      "Halti taskon {1} '{2}'?"
#define STRING_CMD_STOP_1            "Haltis {1} taskon."
#define STRING_CMD_STOP_N            "Haltis {1} taskojn."

#define STRING_CMD_APPEND_USAGE      "Aldonas tekston post task-priskribo"
#define STRING_CMD_APPEND_1          "Aldonis al {1} tasko."
#define STRING_CMD_APPEND_N          "Aldonis al {1} taskoj."
#define STRING_CMD_APPEND_TASK       "Aldonanta al tasko {1} '{2}'."
#define STRING_CMD_APPEND_TASK_R     "Aldonanta al reokazanta tasko {1} '{2}'."
#define STRING_CMD_APPEND_CONFIRM_R  "Tio estas reokazanta tasko. Ĉu vi volas aldoni al ĉia pendanta okazaĵo de ĉi tiu tasko?"
#define STRING_CMD_APPEND_CONFIRM    "Aldoni al tasko {1} '{2}'?"
#define STRING_CMD_APPEND_NO         "Ne aldonis al tasko."

#define STRING_CMD_PREPEND_USAGE     "Aldonas tekston antaŭ task-priskribo"
#define STRING_CMD_PREPEND_1         "Predonis al {1} tasko."
#define STRING_CMD_PREPEND_N         "Predonis {1} taskoj."
#define STRING_CMD_PREPEND_TASK      "Predonanta al tasko {1} '{2}'."
#define STRING_CMD_PREPEND_TASK_R    "Predonanta al reokazanta tasko {1} '{2}'."
#define STRING_CMD_PREPEND_CONFIRM_R "Tio estas reokazanta tasko. Ĉu vi volas predoni al ĉia pendanta okazaĵo de ĉi tiu tasko?"
#define STRING_CMD_PREPEND_CONFIRM   "Predonis al taskon {1} '{2}'?"
#define STRING_CMD_PREPEND_NO        "Ne predonis al tasko."

#define STRING_CMD_ANNO_USAGE        "Donas komenton al ekzistanta tasko"
#define STRING_CMD_ANNO_CONFIRM      "Komenti taskon {1} '{2}'?"
#define STRING_CMD_ANNO_TASK         "Komentanta taskon {1} '{2}'."
#define STRING_CMD_ANNO_TASK_R       "Komentanta reokazantan taskon {1} '{2}'."
#define STRING_CMD_ANNO_CONFIRM_R    "Tiu esta reokazanta tasko. Ĉu vi volas komenti ĉia pendanta okazaĵo de tiu tasko?"
#define STRING_CMD_ANNO_NO           "Ne komentis taskon."
#define STRING_CMD_ANNO_1            "Komentis {1} taskon."
#define STRING_CMD_ANNO_N            "Komentis {1} taskojn."

#define STRING_CMD_COLUMNS_USAGE     "Ĉia kolumno kaj stilo subtenata"
#define STRING_CMD_COLUMNS_NOTE      "* Signifas defaŭltan stilon, do ne estas deviga.  Ekzemple, 'due' estas identa kun 'due.formatted'."
#define STRING_CMD_COLUMNS_USAGE2    "Montras liston sole de subtenataj kolumnoj"
#define STRING_CMD_COLUMNS_ARGS      "Oni ne povas specifi plu de unu serĉĉenon."

#define STRING_CMD_DENO_USAGE        "Viŝas komenton"
#define STRING_CMD_DENO_NONE         "La specifita tasko ne havas nenian viŝeblan komenton."
#define STRING_CMD_DENO_CONFIRM      "Malkomenti taskon {1} '{2}'?"
#define STRING_CMD_DENO_FOUND        "Trovis kaj viŝis komenton '{1}'."
#define STRING_CMD_DENO_NOMATCH      "Ne trovis nenian komenton por viŝi, kiu kongruas al '{1}'."
#define STRING_CMD_DENO_NO           "Ne malkomentis taskon."
#define STRING_CMD_DENO_1            "Malkomentis {1} taskon."
#define STRING_CMD_DENO_N            "Malkomentis {1} taskojn."

#define STRING_CMD_IMPORT_USAGE      "Importas JSON-dosierojn"
#define STRING_CMD_IMPORT_SUMMARY    "Importis {1} taskojn."
#define STRING_CMD_IMPORT_FILE       "Importanta '{1}'"
#define STRING_CMD_IMPORT_MISSING    "File '{1}' not found."
#define STRING_CMD_IMPORT_UUID_BAD   "Not a valid UUID '{1}'."
#define STRING_TASK_NO_DESC          "Komento havas mankon de priskribo: {1}"
#define STRING_TASK_NO_ENTRY         "Komento havas mankon de enskrib-dato: {1}"
#define STRING_CMD_SYNC_USAGE        "Sinkronigas datumojn kun la Taskserver"
#define STRING_CMD_SYNC_NO_SERVER    "Taskserver ne estas agordita."
#define STRING_CMD_SYNC_BAD_CRED     "Taskserver-akreditaĵoj malbone formataj."
#define STRING_CMD_SYNC_BAD_CERT     "Taskserver-atestilo mankas."
#define STRING_CMD_SYNC_BAD_KEY      "Taskserver-ĉifrigilo mankas."
#define STRING_CMD_SYNC_ADD          "   add {1} '{2}'"
#define STRING_CMD_SYNC_MOD          "modify {1} '{2}'"
#define STRING_CMD_SYNC_PROGRESS     "Sinkroniganta kun {1}"
#define STRING_CMD_SYNC_SUCCESS0     "Sukcesis sinkronigi."
#define STRING_CMD_SYNC_SUCCESS1     "Sukcesis sinkronigi.  Alŝutis {1} ŝanĝojn."
#define STRING_CMD_SYNC_SUCCESS2     "Sukcesis sinkronigi.  Elŝutis {1} ŝanĝojn."
#define STRING_CMD_SYNC_SUCCESS3     "Sukcesis sinkronigi.  Alŝutis {1} ŝanĝojn, elŝutis {2}."
#define STRING_CMD_SYNC_SUCCESS_NOP  "Sukcesis sinkronigi.  Ne ŝanĝis nenion."
#define STRING_CMD_SYNC_FAIL_ACCOUNT "Malsukcesis sinkronigi.  Aŭ viaj akreditaĵoj estas malkorekta, aŭ via Taskserver-konto ne estas ebligata."
#define STRING_CMD_SYNC_FAIL_ERROR   "Malsukcesis sinkronigi.  La Taskserver redonis eraron: {1} {2}"
#define STRING_CMD_SYNC_FAIL_CONNECT "Malsukcesis sinkronigi.  Ne povis konekti al la Taskserver."
#define STRING_CMD_SYNC_BAD_SERVER   "Malsukcesis sinkronigi.  Agordo '{1}' ne rekonata"
#define STRING_CMD_SYNC_NO_TLS       "Taskwarrior estis kompilata sen GnuTLS-subteno.  Sinkronigado ne estas disponebla."
#define STRING_CMD_SYNC_INIT         "Bonvolu konfirmi, ke vi volas alŝuti ĉian pendantan taskon al la Taskserver"
#define STRING_CMD_SYNC_NO_INIT      "Taskwarrior ne procedos inicialigi sinkronigadon."
#define STRING_CMD_SYNC_RELOCATE0    "La servila konto transloĝiĝis.  Bonvolu aktualigi via agordo kun:"
#define STRING_CMD_SYNC_RELOCATE1    "task config taskd.server {1}"
#define STRING_CMD_SYNC_BAD_CA       "CA certificate not found."
#define STRING_CMD_SYNC_TRUST_CA     "You should either provide a CA certificate or override verification, but not both."
#define STRING_CMD_SYNC_TRUST_OBS    "The 'taskd.trust' settings may now only contain a value of 'strict', 'ignore hostname' or 'allow all'."

// STRING_CMD_DIAG_* strings all appear on the 'diag' command output.
#define STRING_CMD_DIAG_USAGE        "Platform, build and environment details"
#define STRING_CMD_DIAG_PLATFORM     "Platform"
#define STRING_CMD_DIAG_COMPILER     "Compiler"
#define STRING_CMD_DIAG_VERSION      "Version"
#define STRING_CMD_DIAG_CAPS         "Caps"
#define STRING_CMD_DIAG_COMPLIANCE   "Compliance"
#define STRING_CMD_DIAG_FEATURES     "Build Features"
#define STRING_CMD_DIAG_BUILT        "Built"
#define STRING_CMD_DIAG_COMMIT       "Commit"
#define STRING_CMD_DIAG_FOUND        "(found)"
#define STRING_CMD_DIAG_MISSING      "(missing)"
#define STRING_CMD_DIAG_MISS_DEP     "Task {1} depends on nonexistent task: {2}"
#define STRING_CMD_DIAG_MISS_PAR     "Task {1} has nonexistent recurrence template: {2}"
#define STRING_CMD_DIAG_ENABLED      "Enabled"
#define STRING_CMD_DIAG_DISABLED     "Disabled"
#define STRING_CMD_DIAG_CONFIG       "Configuration"
#define STRING_CMD_DIAG_TESTS        "Tests"
#define STRING_CMD_DIAG_UUID_SCAN    "Scanned {1} tasks for duplicate UUIDs:"
#define STRING_CMD_DIAG_REF_SCAN     "Scanned {1} tasks for broken references:"
#define STRING_CMD_DIAG_REF_OK       "No broken references found"
#define STRING_CMD_DIAG_UUID_DUP     "Found duplicate {1}"
#define STRING_CMD_DIAG_UUID_NO_DUP  "No duplicates found"
#define STRING_CMD_DIAG_NONE         "-none-"
#define STRING_CMD_DIAG_HOOKS        "Hooks"
#define STRING_CMD_DIAG_HOOK_NAME    "unrecognized hook name"
#define STRING_CMD_DIAG_HOOK_SYMLINK "symlink"
#define STRING_CMD_DIAG_HOOK_EXEC    "executable"
#define STRING_CMD_DIAG_HOOK_NO_EXEC "not executable"
#define STRING_CMD_DIAG_HOOK_ENABLE  "Enabled"
#define STRING_CMD_DIAG_HOOK_DISABLE "Disabled"

#define STRING_CMD_COMMANDS_USAGE    "Generates a list of all commands, with behavior details"
#define STRING_CMD_HCOMMANDS_USAGE   "Generates a list of all commands, for autocompletion purposes"
#define STRING_CMD_ZSHCOMMANDS_USAGE "Generates a list of all commands, for zsh autocompletion purposes"
#define STRING_CMD_ZSHATTS_USAGE     "Generates a list of all attributes, for zsh autocompletion purposes"
#define STRING_CMD_ALIASES_USAGE     "Generates a list of all aliases, for autocompletion purposes"

#define STRING_CMD_MODIFY_USAGE1     "Modifies the existing task with provided arguments."
#define STRING_CMD_MODIFY_NO_DUE     "You cannot specify a recurring task without a due date."
#define STRING_CMD_MODIFY_REM_DUE    "You cannot remove the due date from a recurring task."
#define STRING_CMD_MODIFY_REC_ALWAYS "You cannot remove the recurrence from a recurring task."
#define STRING_CMD_MODIFY_TASK       "Modifying task {1} '{2}'."
#define STRING_CMD_MODIFY_TASK_R     "Modifying recurring task {1} '{2}'."
#define STRING_CMD_MODIFY_1          "Modified {1} task."
#define STRING_CMD_MODIFY_N          "Modified {1} tasks."
#define STRING_CMD_MODIFY_NO         "Task not modified."
#define STRING_CMD_MODIFY_CONFIRM    "Modify task {1} '{2}'?"
#define STRING_CMD_MODIFY_RECUR      "This is a recurring task.  Do you want to modify all pending recurrences of this same task?"
#define STRING_CMD_MODIFY_NEED_TEXT  "Additional text must be provided."
#define STRING_CMD_MODIFY_INACTIVE   "Note: Modified task {1} is {2}.  You may wish to make this task pending with: task {3} modify status:pending"

#define STRING_CMD_COLOR_USAGE       "All colors, a sample, or a legend"
#define STRING_CMD_COLOR_HERE        "Here are the colors currently in use:"
#define STRING_CMD_COLOR_COLOR       "Color"
#define STRING_CMD_COLOR_DEFINITION  "Definition"
#define STRING_CMD_COLOR_EXPLANATION "Use this command to see how colors are displayed by your terminal."
#define STRING_CMD_COLOR_16          "16-color usage (supports underline, bold text, bright background):"
#define STRING_CMD_COLOR_256         "256-color usage (supports underline):"
#define STRING_CMD_COLOR_YOURS       "Your sample:"
#define STRING_CMD_COLOR_BASIC       "Basic colors"
#define STRING_CMD_COLOR_EFFECTS     "Effects"
#define STRING_CMD_COLOR_CUBE        "Color cube rgb"
#define STRING_CMD_COLOR_RAMP        "Gray ramp"
#define STRING_CMD_COLOR_TRY         "Try running '{1}'."
#define STRING_CMD_COLOR_OFF         "Color is currently turned off in your .taskrc file.  To enable color, remove the line 'color=off', or change the 'off' to 'on'."
#define STRING_CMD_CONFIG_USAGE      "Change settings in the task configuration"
#define STRING_CMD_CONFIG_CONFIRM    "Are you sure you want to change the value of '{1}' from '{2}' to '{3}'?"
#define STRING_CMD_CONFIG_CONFIRM2   "Are you sure you want to add '{1}' with a value of '{2}'?"
#define STRING_CMD_CONFIG_CONFIRM3   "Are you sure you want to remove '{1}'?"
#define STRING_CMD_CONFIG_NO_ENTRY   "No entry named '{1}' found."
#define STRING_CMD_CONFIG_FILE_MOD   "Agorda dosiero {1} modifita."
#define STRING_CMD_CONFIG_NO_CHANGE  "Ne ŝanĝis nenion."
#define STRING_CMD_CONFIG_NO_NAME    "Specifu la nomon de agordvariablo, kiun vi volas modifi."
#define STRING_CMD_HCONFIG_USAGE     "Listigas çiun subtenatan agordan variablon, por motivo memkompletada"
#define STRING_CMD_CONTEXT_USAGE     "Set and define contexts (default filters)"
#define STRING_CMD_CONTEXT_DEF_SUCC  "Context '{1}' defined. Use 'task context {1}' to activate."
#define STRING_CMD_CONTEXT_DEF_FAIL  "Context '{1}' not defined."
#define STRING_CMD_CONTEXT_DEF_USAG  "Both context name and its definition must be provided."
#define STRING_CMD_CONTEXT_DEF_ABRT  "Context definiton aborted."
#define STRING_CMD_CONTEXT_DEF_ABRT2 "Filter validation failed: {1}"
#define STRING_CMD_CONTEXT_DEF_CONF  "The filter '{1}' matches 0 pending tasks. Do you wish to continue?"
#define STRING_CMD_CONTEXT_DEL_SUCC  "Context '{1}' deleted."
#define STRING_CMD_CONTEXT_DEL_FAIL  "Context '{1}' not deleted."
#define STRING_CMD_CONTEXT_DEL_USAG  "Context name needs to be specified."
#define STRING_CMD_CONTEXT_LIST_EMPT "No contexts defined."
#define STRING_CMD_CONTEXT_SET_NFOU  "Context '{1}' not found."
#define STRING_CMD_CONTEXT_SET_SUCC  "Context '{1}' set. Use 'task context none' to remove."
#define STRING_CMD_CONTEXT_SET_FAIL  "Context '{1}' not applied."
#define STRING_CMD_CONTEXT_SHOW_EMPT "No context is currently applied."
#define STRING_CMD_CONTEXT_SHOW      "Context '{1}' with filter '{2}' is currently applied."
#define STRING_CMD_CONTEXT_NON_SUCC  "Context unset."
#define STRING_CMD_CONTEXT_NON_FAIL  "Context not unset."
#define STRING_CMD_HCONTEXT_USAGE    "Lists all supported contexts, for completion purposes"
#define STRING_CMD_CUSTOM_MISMATCH   "La nombroj de kolumnoj kaj de siaj titoloj ne kongruas por raporto '{1}'."
#define STRING_CMD_CUSTOM_SHOWN      "{1} montritaj"
#define STRING_CMD_CUSTOM_COUNT      "1 tasko"
#define STRING_CMD_CUSTOM_COUNTN     "{1} taskoj"
#define STRING_CMD_CUSTOM_TRUNCATED  "stumpigis al {1} vicojn"
#define STRING_CMD_TIMESHEET_USAGE   "Ĉiusemajna resumo de ĉia tasko finita aŭ ekita"
#define STRING_CMD_TIMESHEET_STARTED "Ekis ({1} taskojn)"
#define STRING_CMD_TIMESHEET_DONE    "Finis ({1} taskojn)"
#define STRING_CMD_BURN_USAGE_M      "Montras ĉiumonatan abakon de taskbrulo"
#define STRING_CMD_BURN_USAGE_W      "Montras ĉiusemajnan abakon de taskbrulo"
#define STRING_CMD_BURN_USAGE_D      "Montras ĉiutagan abakon de taskbrulo"
#define STRING_CMD_BURN_TITLE        "Brulo"
#define STRING_CMD_BURN_TOO_SMALL    "Terminala fenestro tro malgranda por vidigi grafeon."
#define STRING_CMD_BURN_TOO_LARGE    "Terminal window too large to draw a graph."
#define STRING_CMD_BURN_DAILY        "Ĉiutaga"
#define STRING_CMD_BURN_WEEKLY       "Ĉiusemajna"
#define STRING_CMD_BURN_MONTHLY      "Ĉiumonata"
#define STRING_CMD_BURN_STARTED      "Ekis"          // Must be 7 or fewer characters
#define STRING_CMD_BURN_DONE         "Finis"         // Must be 7 or fewer characters
#define STRING_CMD_BURN_PENDING      "Pendas"        // Must be 7 or fewer characters
#define STRING_CMD_BURN_NO_CONVERGE  "Nenia konverĝo"
#define STRING_CMD_HELP_USAGE        "Montras ĉi tiun helpantan tekston"
#define STRING_CMD_HELP_USAGE_LABEL  "Uzo:"
#define STRING_CMD_HELP_USAGE_DESC   "Lanĉas rc.default.command, se specifita."
#define STRING_CMD_HELP_ALIASED      "Alinomo de '{1}'"
#define STRING_CMD_CAL_USAGE         "Montras kalendaron, kun markoj por datlimitaj taskoj"
#define STRING_CMD_CAL_BAD_MONTH     "Argumento '{1}' ne estas valida monato."
#define STRING_CMD_CAL_BAD_ARG       "Ne povis rekoni argumenton '{1}'."
#define STRING_CMD_CAL_LABEL_DATE    "Dato"
#define STRING_CMD_CAL_LABEL_HOL     "Ferio"
#define STRING_CMD_CAL_SUN_MON       "agordvariablo 'weekstart' devas esti 'Sunday' aŭ 'Monday'."
#define STRING_CMD_EDIT_USAGE        "Lanĉas redaktilo por rekte modifi taskon"
#define STRING_CMD_CALC_USAGE        "Kalkulilo"

// Config
#define STRING_CONFIG_OVERNEST       "Agorda dosiero nestita ĝis plu de 10 niveloj de profundeco - certe eraro."
#define STRING_CONFIG_READ_INCLUDE   "Ne povis legi enkluzivitan dosieron '{1}'."
#define STRING_CONFIG_INCLUDE_PATH   "Oni sole povas enkluzivi dosierojn kun absoluta pado, ne '{1}'"
#define STRING_CONFIG_BAD_ENTRY      "Malbone formita enskribo '{1}' en agorda dosiero."
#define STRING_CONFIG_BAD_WRITE      "Ne povis skribi al '{1}'."
#define STRING_CONFIG_DEPRECATED_COL "Via dosiero .taskrc enhavas raportojn kun arkaikaj kolumnoj.  Bonvolu serĉi entry_time, start_time, aŭ end_time ĉe:"
#define STRING_CONFIG_DEPRECATED_VAR "Via dosiero .taskrc enhavas arkaikajn variablojn:"

// Context
#define STRING_CONTEXT_CREATE_RC     "Ne povis trovi agordan dosieron ĉe {1}\n\nĈu vi volas, ke ekzemplero {2} kreiĝus por permesi vin procedi?"
#define STRING_CONTEXT_NEED_RC       "Ne povos procedi sen rc-dosieron."
#define STRING_CONTEXT_RC_OVERRIDE   "TASKRC-superrego: {1}"
#define STRING_CONTEXT_DATA_OVERRIDE "TASKDATA-superrego: {1}"

// Date
#define STRING_DATE_INVALID_FORMAT   "'{1}' ne estas valida dato laŭ stilo '{2}'."
#define STRING_DATE_BAD_WEEKSTART    "Argorda variablo 'weekstart' devas esti 'Sunday' aŭ 'Monday'."

#define STRING_DATE_JANUARY          "januaro"
#define STRING_DATE_FEBRUARY         "febrero"
#define STRING_DATE_MARCH            "marto"
#define STRING_DATE_APRIL            "aprilo"
#define STRING_DATE_MAY              "majo"
#define STRING_DATE_JUNE             "junio"
#define STRING_DATE_JULY             "julio"
#define STRING_DATE_AUGUST           "aŭgusto"
#define STRING_DATE_SEPTEMBER        "septembro"
#define STRING_DATE_OCTOBER          "oktobro"
#define STRING_DATE_NOVEMBER         "novembro"
#define STRING_DATE_DECEMBER         "decembro"

#define STRING_DATE_SUNDAY           "dimanĉo"
#define STRING_DATE_MONDAY           "lundo"
#define STRING_DATE_TUESDAY          "mardo"
#define STRING_DATE_WEDNESDAY        "merkredo"
#define STRING_DATE_THURSDAY         "ĵaŭdo"
#define STRING_DATE_FRIDAY           "vendredo"
#define STRING_DATE_SATURDAY         "sabato"

// dependency
#define STRING_DEPEND_BLOCKED        "Tasko {1} estas blokata per:"
#define STRING_DEPEND_BLOCKING       "kaj ĝi blokas:"
#define STRING_DEPEND_FIX_CHAIN      "Ĉu vi volas, ke la dependeca ĉeno repariĝus?"

// DOM
#define STRING_DOM_UNREC             "DOM: Ne povis inspekti nekonatan nomon '{1}'."

// Eval
#define STRING_EVAL_NO_EXPRESSION    "Nenia esprimo por kalkuli."
#define STRING_EVAL_UNSUPPORTED      "Ne subtenas infikson '{1}'."
#define STRING_EVAL_OP_EXPECTED      "Anticipis infikson."
#define STRING_EVAL_NO_EVAL          "Ne povis kalkuli la esprimon."
#define STRING_EVAL_NOT_EXPRESSION   "The value is not an expression."
#define STRING_PAREN_MISMATCH        "Malbalancataj parentezoj en esprimo"

// edit
#define STRING_EDIT_NO_CHANGES       "Ne detektis nenian redakton."
#define STRING_EDIT_FAILED           "Editing failed with exit code {1}."
#define STRING_EDIT_COMPLETE         "Redaktis komplete."
#define STRING_EDIT_IN_PROGRESS      "Task is already being edited."
#define STRING_EDIT_LAUNCHING        "Lanĉanta nun '{1}'..."
#define STRING_EDIT_CHANGES          "Detektis redaktojn."
#define STRING_EDIT_UNPARSEABLE      "Taskwarrior ne povis trakti viaj redaktojn. Ĉu vi volas ripovi?"
#define STRING_EDIT_UNWRITABLE       "Via dosierumo data.location ne estas skribebla."
#define STRING_EDIT_TAG_SEP          "Apartigi la etikedojn kun spaceto, kiel: etiked1 etiked2"
#define STRING_EDIT_DEP_SEP          "Dependoj devas esti listo komdividata de task-identigilojn (ID aŭ UUID) aŭ ID-atingopovoj, sen spacetoj."
#define STRING_EDIT_UDA_SEP          "Uzanto-Definitaj Atributoj"
#define STRING_EDIT_UDA_ORPHAN_SEP   "Uzanto-Definitaj Atributoj kiu estas Orfoj"
#define STRING_EDIT_END              "Fino"

#define STRING_EDIT_PROJECT_MOD      "Modifis la projekton."
#define STRING_EDIT_PROJECT_DEL      "Viŝis la projekton."
#define STRING_EDIT_DESC_MOD         "Modifis la priskribon."
#define STRING_EDIT_DESC_REMOVE_ERR  "Ne povis viŝi la priskribon."
#define STRING_EDIT_ENTRY_REMOVE_ERR "Ne povis viŝi la krean daton."
#define STRING_EDIT_ENTRY_MOD        "Modifis la krean daton."
#define STRING_EDIT_START_MOD        "Modifis la ekan daton."
#define STRING_EDIT_START_DEL        "Viŝis la ekan daton."
#define STRING_EDIT_END_MOD          "Modifis la finan daton."
#define STRING_EDIT_END_DEL          "Viŝis la finan daton."
#define STRING_EDIT_END_SET_ERR      "Ne povas doni fin-dato al pendanta tasko."
#define STRING_EDIT_SCHED_MOD        "Modifis la fiksan daton."
#define STRING_EDIT_SCHED_DEL        "Viŝis la fiksan daton."
#define STRING_EDIT_DUE_MOD          "Modifis la datlimon."
#define STRING_EDIT_DUE_DEL          "Viŝis la datlimon."
#define STRING_EDIT_DUE_DEL_ERR      "Ne povas viŝi datlimon de reokazanta tasko."
#define STRING_EDIT_UNTIL_MOD        "Modifis la ĝisan daton."
#define STRING_EDIT_UNTIL_DEL        "Viŝis la ĝisan daton."
#define STRING_EDIT_RECUR_MOD        "Modifis la reokazon."
#define STRING_EDIT_RECUR_DEL        "Viŝis la reokazon."
#define STRING_EDIT_RECUR_DUE_ERR    "Reokazanta tasko devas havi datlimon."
#define STRING_EDIT_RECUR_ERR        "Nevalida reokaza daŭro."
#define STRING_EDIT_WAIT_MOD         "Modifis la atend-daton."
#define STRING_EDIT_WAIT_DEL         "Viŝis la atend-daton."
#define STRING_EDIT_PARENT_MOD       "Modifis la patran UUID-identigilon."
#define STRING_EDIT_PARENT_DEL       "Viŝis la patran UUID-identigilon."
#define STRING_EDIT_UDA_MOD          "Modifis la UDA {1}."
#define STRING_EDIT_UDA_DEL          "Viŝis la UDA {1}."

// These four blocks can be replaced, but the number of lines must not change.
#define STRING_EDIT_HEADER_1         "Komando 'task <id> edit' vi permesas modifi ĉian aspekton de tasko kun"
#define STRING_EDIT_HEADER_2         "tekst-redaktilo.  Jen sube reprezento de ĉia taska detalo.  Modifu kion vi"
#define STRING_EDIT_HEADER_3         "volas.  Kiam vi konservos ĉi tiun dosieron kaj iros el la redaktilo,"
#define STRING_EDIT_HEADER_4         "taskwarrior legos la dosieron, trovos la ŝanĝojn, kaj apliki ĝin.  Se vi"
#define STRING_EDIT_HEADER_5         "iras el redaktilo sen konservi aŭ sen modifi, taskwarrior ne faros"
#define STRING_EDIT_HEADER_6         "nenion."

#define STRING_EDIT_HEADER_7         "Vicoj ke ekas kun # reprezentas datumojn neŝanĝeblajn, ekzemple ID."
#define STRING_EDIT_HEADER_8         "Se vi redaktis tro kreeme, taskwarrior risendos vin al redaktilo por"
#define STRING_EDIT_HEADER_9         "ripovi."

#define STRING_EDIT_HEADER_10        "Se vi trovas en senfina ripeto, riredaktanta la meman dosieron, simple"
#define STRING_EDIT_HEADER_11        "iru el redaktilo sen ŝanĝi nenion.  Taskwarrior notos ĝin kaj haltos la"
#define STRING_EDIT_HEADER_12        "redaktciklon."

#define STRING_EDIT_HEADER_13        "Komentoj devas aspekti kiel: <dato> -- <teksto>; povas ekzisti ajna"
#define STRING_EDIT_HEADER_14        "nombro de komentojn.  Ne viŝus la apartigilon ' -- ' inter la dato kaj la"
#define STRING_EDIT_HEADER_15        "teksto.  Malplena loko sekvas por simpligi la aldonon de komenton."

// Maintain the same spacing.
#define STRING_EDIT_TABLE_HEADER_1   "Nomo               Redakteblaj detaloj"
#define STRING_EDIT_TABLE_HEADER_2   "-----------------  ----------------------------------------------------"

// Errors
// TODO Move each of these to appropriate section.
#define STRING_ERROR_PREFIX          "Eraro: "
#define STRING_UNKNOWN_ERROR         "Eraro nekonata."
#define STRING_TRIVIAL_INPUT         "Oni devas specifi komandon, aŭ taskon ke vi volas modifi."
#define STRING_ASSUME_INFO           "Nenia komando specifita.  Supozanta 'information'."
#define STRING_INFINITE_LOOP         "Finis anstataŭon ĉar ekzistas pli de {1} ŝanĝoj - protekto kontraŭ senfina ripeton."
#define STRING_UDA_TYPE              "La tipo de uzanto-definitaj atributoj devas esti 'string', 'date', 'duration', aŭ 'numeric'."
#define STRING_UDA_NUMERIC           "Valoro '{1}' ne estas valida nombra valoro."
#define STRING_UDA_COLLISION         "UDA '{1}' kaj enkonstruita atributo havas la saman nomon.  Tio estas malpermesita."
#define STRING_INVALID_MOD           "Atributo '{1}' ne permesas valoron '{2}'."
#define STRING_INVALID_SORT_COL      "Kolumno '{1}' ne estas valida kampo por ordigi."
#define STRING_ERROR_DETAILS         "Agordo 'calendar.details.report' devas enhavi sole unu raportnomon."
#define STRING_ERROR_NO_FILTER       "Command line filters are not supported by this command."
#define STRING_ERROR_CONFIRM_SIGINT  "Interrupted: No changes made."
#define STRING_ERROR_BAD_STATUS      "The status '{1}' is not valid."

// Feedback
#define STRING_FEEDBACK_NO_TASKS     "Nenia tasko."
#define STRING_FEEDBACK_NO_TASKS_SP  "Nenia tasko specifata."
#define STRING_FEEDBACK_NO_MATCH     "Nenia kongruanto."
#define STRING_FEEDBACK_TASKS_SINGLE "(1 tasko)"
#define STRING_FEEDBACK_TASKS_PLURAL "({1} taskoj)"
#define STRING_FEEDBACK_DELETED      "Viŝos {1}."
#define STRING_FEEDBACK_DEP_SET      "Dependoj iĝos '{1}'."
#define STRING_FEEDBACK_DEP_MOD      "Dependoj ŝanĝos el '{1}' al '{2}'."
#define STRING_FEEDBACK_DEP_DEL      "Viŝis dependojn '{1}'."
#define STRING_FEEDBACK_DEP_WAS_SET  "Dependoj iĝis '{1}'."
#define STRING_FEEDBACK_DEP_WAS_MOD  "Dependoj ŝanĝis el '{1}' al '{2}'."
#define STRING_FEEDBACK_ATT_SET      "{1} iĝos '{2}'."
#define STRING_FEEDBACK_ATT_MOD      "{1} ŝanĝos el '{2}' al '{3}'."
#define STRING_FEEDBACK_ATT_DEL      "Viŝis {1}."
#define STRING_FEEDBACK_ATT_DEL_DUR  "Viŝis {1} (duration: {2})."
#define STRING_FEEDBACK_ATT_WAS_SET  "{1} iĝis '{2}'."
#define STRING_FEEDBACK_ATT_WAS_MOD  "{1} ŝanĝis el '{2}' al '{3}'."
#define STRING_FEEDBACK_ANN_ADD      "Aldonis komenton '{1}'."
#define STRING_FEEDBACK_ANN_DEL      "Viŝis komenton '{1}'."
#define STRING_FEEDBACK_ANN_WAS_MOD  "Komento iĝis '{1}'."
#define STRING_FEEDBACK_NOP          "Ne ŝanĝos nenion."
#define STRING_FEEDBACK_WAS_NOP      "Ne ŝanĝis nenion."
#define STRING_FEEDBACK_TAG_NOCOLOR  "Speciala etikedo 'nocolor' malebligos kolorreguloj por tiu tasko."
#define STRING_FEEDBACK_TAG_NONAG    "Speciala etikedo 'nonag' antaŭmalebligitos molestojn, kiam oni modifus tiun taskon."
#define STRING_FEEDBACK_TAG_NOCAL    "Speciala etikedo 'nocal' ekskluzivos tiun taskon ĉe raporto 'calendar'."
#define STRING_FEEDBACK_TAG_NEXT     "Speciala etikedo 'next' pligrandigos la urĝecon de tiu tasko por ke ĝi aperus ĉe raporto 'next'."
#define STRING_FEEDBACK_TAG_VIRTUAL  "Virtual tags (including '{1}') are reserved and may not be added or removed."
#define STRING_FEEDBACK_UNBLOCKED    "Malblokis {1} '{2}'."
#define STRING_FEEDBACK_EXPIRED      "Tasko {1} '{2}' fortempiĝis do estis viŝata."
#define STRING_FEEDBACK_BACKLOG      "Estas lokaj ŝanĝoj. Sinkronigo devita."

// helpers
#define STRING_HELPER_PROJECT_CHANGE "The project '{1}' has changed."
#define STRING_HELPER_PROJECT_COMPL  "Project '{1}' is {2}% complete"
#define STRING_HELPER_PROJECT_REM    "({1} of {2} tasks remaining)."
#define STRING_HELPER_PROJECT_REM1   "({1} task remaining)."

// Hooks
#define STRING_HOOK_ERROR_OBJECT     "Hook Error: JSON Object '{...}' expected from hook script: {1}"
#define STRING_HOOK_ERROR_NODESC     "Hook Error: JSON Object missing 'description' attribute from hook script: {1}"
#define STRING_HOOK_ERROR_NOUUID     "Hook Error: JSON Object missing 'uuid' attribute from hook script: {1}"
#define STRING_HOOK_ERROR_SYNTAX     "Hook Error: JSON syntax error in: {1}"
#define STRING_HOOK_ERROR_JSON       "Hook Error: JSON "
#define STRING_HOOK_ERROR_NOPARSE    "Hook Error: JSON failed to parse: "
#define STRING_HOOK_ERROR_BAD_NUM    "Hook Error: Expected {1} JSON task(s), found {2}, in hook script: {3}"
#define STRING_HOOK_ERROR_SAME1      "Hook Error: JSON must be for the same task: {1}, in hook script: {2}"
#define STRING_HOOK_ERROR_SAME2      "Hook Error: JSON must be for the same task: {1} != {2}, in hook script: {3}"
#define STRING_HOOK_ERROR_NOFEEDBACK "Hook Error: Expected feedback from failing hook script: {1}"

// Record
#define STRING_RECORD_EMPTY          "Malplena rikordo en la inigo."
#define STRING_RECORD_JUNK_AT_EOL    "Nekonataj signoj ĉe vicfino."
#define STRING_RECORD_NOT_FF4        "Rikordo ne rekonata kiel aranĝo 4."

// 'show' command
#define STRING_CMD_SHOW              "Montras ĉian agordan variablon, aŭ subaron"
#define STRING_CMD_SHOW_ARGS         "Oni sole povas specifi 'all' aŭ serĉĉenon."
#define STRING_CMD_SHOW_NONE         "Nenia kongruanta agordvariablo."
#define STRING_CMD_SHOW_UNREC        "Via dosiero .taskrc enhavas nekonatajn variablojn:"
#define STRING_CMD_SHOW_DIFFER       "Variabloj ĉe .taskrc diferencas de la defaŭltaj valoroj."
#define STRING_CMD_SHOW_EMPTY        "Erara agordo: .taskrc ne enhavas nenion."
#define STRING_CMD_SHOW_DIFFER_COLOR "Tioj estas markitaj supre, ĉe {1}."
#define STRING_CMD_SHOW_CONFIG_ERROR "Erara agordo: {1} enhavas nekonatan valoron '{2}'."
#define STRING_CMD_SHOW_NO_LOCATION  "Erara agordo: data.location ne specifita ĉe dosiero .taskrc."
#define STRING_CMD_SHOW_LOC_EXIST    "Erara agordo: data.location enhavas dosierumnomon neekzistantan aŭ nelegeblan."
#define STRING_CMD_SHOW_CONF_VAR     "Agordvariablo"
#define STRING_CMD_SHOW_CONF_VALUE   "Valoro"
#define STRING_CMD_SHOW_CONF_DEFAULT "Defaŭlta valoro"
#define STRING_CMD_SHOWRAW           "Montras ĉia agordvariablon je maŝinlegebla aranĝo"

// Task
#define STRING_TASK_NO_FF1           "Taskwarrior ne pli subtenas dosier-aranĝon 1, kiu estis originale uzata inter la 27-a de novembro 2006 kaj la 31-a de decembro 2007."
#define STRING_TASK_NO_FF2           "Taskwarrior ne pli subtenas dosier-aranĝon 2, kiu estis originale uzata inter la 1-a de januaro 2008 kaj la 12-a de aprilo 2009."
#define STRING_TASK_NO_FF3           "Taskwarrior no longer supports file format 3, originally used between 23 March 2009 and 16 May 2009."
#define STRING_TASK_PARSE_UNREC_FF   "Ne povis rekoni taskan dosier-aranĝon."
#define STRING_TASK_DEPEND_ITSELF    "Tasko ne povas dependi de si mem."
#define STRING_TASK_DEPEND_MISS_CREA "Ne povis krei dependecon de tasko {1} - netrovita."
#define STRING_TASK_DEPEND_MISS_DEL  "Ne povis viŝi dependecon de tasko {1} - netrovita."
#define STRING_TASK_DEPEND_DUP       "Tasko {1} jam dependas de tasko {2}."
#define STRING_TASK_DEPEND_CIRCULAR  "Detektis kaj malpermesis ciklan dependecon."
#define STRING_TASK_VALID_DESC       "Tasko devas havi priskribon."
#define STRING_TASK_VALID_BLANK      "Ne povas krei blankan taskon."
#define STRING_TASK_VALID_BEFORE     "Averto: Vi specifis daton '{1}' post dato '{2}'."
#define STRING_TASK_VALID_REC_DUE    "Reokazanta tasko devas ankaŭ havi daton 'due'."
#define STRING_TASK_VALID_RECUR      "Reokaz-valoro '{1}' ne estas valida."
#define STRING_TASK_SAFETY_VALVE     "This command has no filter, and will modify all (including completed and deleted) tasks.  Are you sure?"
#define STRING_TASK_SAFETY_FAIL      "Antaŭmalebligis komandon."
#define STRING_TASK_SAFETY_ALLOW     "Vi ne specifis filtrilon. Laŭ la valoro 'allow.empty.filter', ne faros nenion."
#define STRING_TASK_INVALID_DUR      "The duration value '{1}' is not supported."
#define STRING_TASK_INVALID_COL_TYPE "Unrecognized column type '{1}' for column '{2}'"

// TDB2
#define STRING_TDB2_PARSE_ERROR      " en {1} ĉe vico {2}"
#define STRING_TDB2_UUID_NOT_UNIQUE  "Ne povis krei la taskon ĉar UUID-identigilo '{}' ne estas unika."
#define STRING_TDB2_MISSING          "Mankanta                      {1}  \"{2}\""
#define STRING_TDB2_NO_UNDO          "Ne estas nenia registrita ago por malfari."
#define STRING_TDB2_LAST_MOD         "Laste modifis ĝin je {1}"
#define STRING_TDB2_UNDO_PRIOR       "Antaŭaj Valoroj"
#define STRING_TDB2_UNDO_CURRENT     "Aktualaj Valoroj"
#define STRING_TDB2_DIFF_PREV        "--- antaŭa stato "               // Same length
#define STRING_TDB2_DIFF_PREV_DESC   "Malfarado restaŭros tiun staton" //   ||
#define STRING_TDB2_DIFF_CURR        "+++ aktuala stato"               // Same length
#define STRING_TDB2_DIFF_CURR_DESC   "Ŝanĝis tion je {1}"
#define STRING_TDB2_UNDO_CONFIRM     "Komando 'undo' ne estas inversigebla.  Ĉu vi estas certa, ke vi volas reveni al la antaŭa stato?"
#define STRING_TDB2_MISSING_UUID     "Ne povis loki UUID-identigilon en tasko, do ne povos malfari."
#define STRING_TDB2_REVERTED         "Revenis taskon al la antaŭa stato."
#define STRING_TDB2_REMOVED          "Elprenis taskon."
#define STRING_TDB2_UNDO_COMPLETE    "Malfaris komplete."
#define STRING_TDB2_UNDO_SYNCED      "Ne povos malfari ŝanĝon ĉar la tasko estis jam sinkronigita.  Modifu anstataŭe la taskon."
#define STRING_TDB2_DIRTY_EXIT       "Eliranta kun neskribitajn ŝanĝojn al {1}"
#define STRING_TDB2_UNWAIT           "Un-waiting task '{1}'"

// recur.cpp
#define STRING_RECUR_CREATE          "Creating recurring task instance '{1}'"

// View
#define STRING_VIEW_TOO_SMALL        "La raporto havas larĝecminimumon {1}, al kio ne konformas la disponebla larĝeco {2}."

// Usage text.  This is an exception, and contains \n characters and formatting.
#define STRING_CMD_HELP_TEXT \
  "Oni povas trovi dokumentojn por Taskwarrior uzante 'man task', 'man taskrc', 'man " \
  "task-color', 'man task-sync', aŭ ĉe http://taskwarrior.org\n" \
  "\n" \
  "La ĝenerala formo de komandoj estas:\n" \
  "  task [<filtrilo>] <komando> [<modifantoj>]\n" \
  "\n" \
  "La <filtrilo> konsistas de nulo aŭ pli katenoj, kiuj diktas kiajn taskojn elekti, " \
  "ekzemple:\n" \
  "  task                                      <komando> <modifantoj>\n" \
  "  task 28                                   <komando> <modifantoj>\n" \
  "  task +semajnfino                          <komando> <modifantoj>\n" \
  "  task project:Domo due.before:today        <komando> <modifantoj>\n" \
  "  task ebeeab00-ccf8-464b-8b58-f7f2d606edfb <komando> <modifantoj>\n" \
  "\n" \
  "Implica infikso 'and' unuigas filtrilojn defaŭlte; tamen oni povas uzi 'or' aŭ 'xor'" \
  "anstataŭe, se li inkluzivas parentezoj:\n" \
  "  task '(/[Cc]at|[Dd]og/ or /[0-9]+/)'      <komando> <modifantoj>\n" \
  "\n" \
  "Filtrilo povas celi specifajn taskojn kun identigilnombro ID aŭ UUID.  Por specifi " \
  "plurajn taskojn, uzu unu de tiujn ĉi formojn:\n" \
  "  task 1,2,3                                    delete\n" \
  "  task 1-3                                      info\n" \
  "  task 1,2-5,19                                 modify pri:H\n" \
  "  task 4-7 ebeeab00-ccf8-464b-8b58-f7f2d606edfb info\n" \
  "\n" \
  "La <modifantoj> konsistas de nulo aŭ pli ŝanĝoj por apliki al la elektataj taskoj, " \
  "kiel:\n" \
  "  task <filtrilo> <komando> project:Domo\n" \
  "  task <filtrilo> <komando> +semajnfino +ĝardeno due:tomorrow\n" \
  "  task <filtrilo> <komando> Priskribo/komentara teksto\n" \
  "  task <filtrilo> <komando> /from/to/     <- replace first match\n" \
  "  task <filtrilo> <komando> /from/to/g    <- replace all matches\n" \
  "\n" \
  "Etikedoj estas ajnaj vortoj, de ajna kvanto:\n" \
  "  +etikedo       La + signifas aldoni la etikedon\n" \
  "  -etikedo       La - signifas elpreni la etikedon\n" \
  "\n" \
  "La enkonstruitajn atributojn estas:\n" \
  "  description:    Priskriba teksto de la tasko\n" \
  "  status:         Stato de la tasko - pending, completed, deleted, waiting\n" \
  "  project:        Nomo de projekto\n" \
  "  priority:       Graveco\n" \
  "  due:            Datlimo\n" \
  "  recur:          Reokaza periodo\n" \
  "  until:          Dato de fortempiĝi de la tasko\n" \
  "  limit:          Dezirata nombro de vicoj en raporto, aŭ 'page' por unu plena paĝo\n" \
  "  wait:           Dato kiam la tasko pendiĝos\n" \
  "  entry:          Dato kiam la tasko estis kreata\n" \
  "  end:            Dato kiam la tasko estis finata/viŝata\n" \
  "  start:          Dato kiam la tasko estis ekita\n" \
  "  scheduled:      Fiksa dato kiam vi projektas eki la taskon\n" \
  "  modified:       Date task was last modified\n" \
  "  depends:        Aliaj taskoj, de kioj ĉi tiu tasko dependas\n" \
  "\n" \
  "Atributaj modifantoj igas filtrilojn pli precizaj.  La subtenataj modifantoj estas:\n" \
  "\n" \
  "  Modifiers         Example            Equivalent           Meaning\n" \
  "  ----------------  -----------------  -------------------  -------------------------\n" \
  "                    due:today          due = today          Fuzzy match\n" \
  "  not               due.not:today      due != today         Fuzzy non-match\n" \
  "  before, below     due.before:today   due < tomorrow       Exact date comparison\n" \
  "  after, above      due.after:today    due > tomorrow       Exact date comparison\n" \
  "  none              project.none:      project == ''        Empty\n" \
  "  any               project.any:       project !== ''       Not empty\n" \
  "  is, equals        project.is:x       project == x         Exact match\n" \
  "  isnt              project.isnt:x     project !== x        Exact non-match\n" \
  "  has, contains     desc.has:Hello     desc ~ Hello         Pattern match\n" \
  "  hasnt,            desc.hasnt:Hello   desc !~ Hello        Pattern non-match\n" \
  "  startswith, left  desc.left:Hel      desc ~ '^Hel'        Beginning match\n" \
  "  endswith, right   desc.right:llo     desc ~ 'llo$'        End match\n" \
  "  word              desc.word:Hello    desc ~ '\\bHello\\b'   Boundaried word match\n" \
  "  noword            desc.noword:Hello  desc !~ '\\bHello\\b'  Boundaried word non-match\n" \
  "\n" \
  "Alterne, algebraj esprimoj subtenas:\n" \
  "  and  or  xor            Logical operators\n" \
  "  <  <=  =  !=  >=  >     Relational operators\n" \
  "  (  )                    Precedence\n" \
  "\n" \
  "  task due.before:eom priority.not:L   list\n" \
  "  task '(due < eom or priority != L)'  list\n" \
  "\n" \
  "Oni povas superregi la defaŭltan dosieron .taskrc kun:\n" \
  "  task ... rc:<alterna dosiero> ...\n" \
  "  task ... rc:~/.alt_taskrc ...\n" \
  "\n" \
  "Oni povas superregi la valorojn en .taskrc (aŭ alterno) kun:\n" \
  "  task ... rc.<nomo>=<valoro> ...\n" \
  "  task rc.color=off list\n" \
  "\n" \
  "Oni povas mallongigi ajnan komandon aŭ ajnan atributan nomon se ĝi estas ankoraŭ unika:\n" \
  "  task list project:Domo\n" \
  "  task li       pro:Domo\n" \
  "\n" \
  "Oni devas eskapi kelkajn task-priskribojn pro la ŝelo:\n" \
  "  task add \"citilata ' cito\"\n" \
  "  task add eskapata \\' cito\n" \
  "\n" \
  "La argumento -- al taskwarrior ordonas interpreti ĉian restantan argumenton kiel " \
  "priskribo, eĉ se ili aspektas esti atributoj aŭ etikedoj:\n" \
  "  task add -- project:Domo bezonas fiksajn datojn\n" \
  "\n" \
  "Pluraj signoj havas specialan signifon por la ŝelo, inkluzive:\n" \
  "  $ ! ' \" ( ) ; \\ ` * ? { } [ ] < > | & % # ~\n" \
  "\n"

/*
  To be included later, before the 'precendence' line.

  "  +  -                    Addition, subtraction\n" \
  "  !                       Inversion\n" \
  "  ~  !~                   Match, no match\n" \
*/

// util
#define STRING_UTIL_CONFIRM_YES      "jes"
#define STRING_UTIL_CONFIRM_YES_U    "Jes"
#define STRING_UTIL_CONFIRM_NO       "ne"
#define STRING_UTIL_CONFIRM_ALL      "ĉia"
#define STRING_UTIL_CONFIRM_ALL_U    "Ĉia"
#define STRING_UTIL_CONFIRM_QUIT     "eliru"

// Legacy
#define STRING_LEGACY_PRIORITY       "Legacy attribute found.  Please change '{1}' to '{2}'."

#endif
