#ifndef OUTPUT_H
#define OUTPUT_H

#define LILEX_WIDTH() (CONVAR_GETINT(lilex) ? gCurFile->lilex_width : 0)

void editorRefreshScreen(void);

#endif
