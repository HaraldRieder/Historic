/*** Send with Awi_sendall() to the module: ***/

/* Is there a color selector window ? 
   in_out is of type (INT16 *) and set to TRUE if yes, unchanged else. 
   If not, the color selector ACS module must be loaded first. */
#define COLOR_AVAILABLE    0x7FF0


/*** Sent by the module to the window with the selection list: ***/

/* in_out is of type (COLOR_MESSAGE *), see below. 
   Some objects were dragged to a color button. */
#define COLOR_DRAGGED      0x7FF1

/* in_out is of type (COLOR_MESSAGE *), see below. 
   A color button was pressed. */
#define COLOR_CLICKED      0x7FF2

/* in_out is of type (COLOR_MESSAGE *), see below. 
   The user clicked into the color cube (256 colors or more only). */
#define COLOR_CUBE_CLICKED 0x7FF3

typedef struct
{
	INT16 index ;            /* palette index, -1 if no palette (direct color mode) */
	INT16 rgb ;              /* 15 bit RGB, red are the least significant bits */
	INT16 red, green, blue ; /* 0 .. 1000 each, VDI color */
} 
COLOR_MESSAGE ;