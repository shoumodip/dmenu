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
	"Monospace:pixelsize=15"
};

/* Colors */
static const char col_fg[] = "#002b36";
static const char col_bg[] = "#fdf6e3";

static const char *colors[SchemeLast][2] = {
	/*                  Fg      Bg    */
	[SchemeNorm]    = { col_fg, col_bg },
	[SchemeSel]     = { col_bg, col_fg },
	[SchemeOut]     = { col_fg, col_bg },
};

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
