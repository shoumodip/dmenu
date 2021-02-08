/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int instant = 1;
static int topbar  = 1; /* Place dmenu on top. [-b] option */
static int fuzzy   = 1; /* Use fuzzy matching. [-F] option */

static const char *fonts[] = {
    "Monospace:pixelsize=18:antialias=true:autohint=true"
};

static const char *colors[SchemeLast][2] = {
    /*               Fg         Bg       */
    [SchemeNorm] = { "#ebdbb2", "#161616" },
    [SchemeSel]  = { "#ebdbb2", "#484848" },
    [SchemeOut]  = { "#ebdbb2", "#161616" },
    [SchemeCur]  = { "#cc8c3c", "#161616" },
};

static const char *prompt = NULL; /* Prompt. [-p] option */

static unsigned int lines = 0; /* Number of lines in dmenu. [-l] option */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* preselected item starting from 0. [-n] option */
static unsigned int preselected = 0;
