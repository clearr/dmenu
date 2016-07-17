/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Terminus:size=12"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the elft of input field */
static const char *normbgcolor = "#333333"; /* -nb option; normal background                 */
static const char *normfgcolor = "#cccccc"; /* -nf option; normal foreground                 */
static const char *selbgcolor  = "#3377ee"; /* -sb option; selected background               */
static const char *selfgcolor  = "#eeeeee"; /* -sf option; selected foreground               */
static const char *outbgcolor  = "#ee3377";
static const char *outfgcolor  = "#eeeeee";
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 10;
