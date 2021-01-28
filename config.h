/* See LICENSE file for copyright and license details. */

/* Functionality */
static int instant = 1;
static int topbar  = 1; /* Dmenu appears at top. [-b] */
static int fuzzy   = 1; /* Dmenu uses fuzzy matching. [-F] */

/* User Interface */
static const char *prompt       = NULL; /* Prompt to the left of input field. [-p] */
static unsigned int lines       = 0; /* If nonzero, dmenu uses vertical list with given number of lines. [-l] */
static unsigned int preselected = 0; /* Preselected item starting from 0. [-n] */

/* Fonts */
static const char *fonts[] = {
	"monospace:pixelsize=15"
};

/* Colors */
static const char col_fg[] = "#ebdbb2";
static const char col_bg[] = "#161616";
static const char col_sl[] = "#080808";
static const char col_hl[] = "#98971a";

static const char *colors[SchemeLast][2] = {
	/*                          Fg      Bg    */
	[SchemeNorm]            = { col_fg, col_bg },
	[SchemeSel]             = { col_fg, col_sl },
	[SchemeOut]             = { col_fg, col_bg },
	[SchemeSelHighlight]    = { col_hl, col_sl },
	[SchemeNormHighlight]   = { col_hl, col_bg },
};

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
