/*** Send with Awi_sendall() to the module: ***/

/* Is there a style selector window ? 
   in_out is of type (INT16 *) and set to TRUE if yes, unchanged else. 
   If not, the style selector ACS module must be loaded first. */
#define STYLE_AVAILABLE 0x7FF8


/*** Sent by the module to the window with the selection list: ***/

/* in_out is of type (STYLE_MESSAGE *), see below. 
   Some objects were dragged to a style button. */
#define STYLE_DRAGGED   0x7FF9

/* in_out is of type (STYLE_MESSAGE *), see below. 
   A style button was pressed. */
#define STYLE_CLICKED   0x7FFA

typedef struct
{
	INT16 interior ;
	INT16 style ;
} 
STYLE_MESSAGE ;