/* user and group to drop privileges to */
static const char *user  = "brandon";
static const char *group = "brandon";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#32302f",     /* after initialization */
	[INPUT] =  "#b8bb26",   /* during input */
	[FAILED] = "#fb4934",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
