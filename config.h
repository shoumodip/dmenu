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
	"Monospace:pixelsize=18"
};

/* Colors */
static const char col_gray1[] = "#161616";
static const char col_gray2[] = "#ebdbb2";
static const char col_green[] = "#4d6e4e";

static const char *colors[SchemeLast][2] = {
	/*                  Fg         Bg       */
	[SchemeNorm]    = { col_gray2, col_gray1 },
	[SchemeSel]     = { col_gray1, col_green },
	[SchemeOut]     = { col_gray2, col_gray1 },
};

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
