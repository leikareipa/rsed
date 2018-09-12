/*
 * 2018 Tarpeeksi Hyvae Soft /
 * RallySportED mouse cursor graphics
 *
 */

#define X 5     // Light color.
#define Y 6     // Shadow color.
#define Z 4
#define W 19
#define _ 20    // Outline color.

static const uint CURSOR_WIDTH = 16;
static const uint CURSOR_HEIGHT = 16;

static const u8 CURSOR_IMAGE_ARROW[CURSOR_WIDTH * CURSOR_HEIGHT] =
                {_,_,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                 _,X,_,0,0,0,0,0,0,0,0,0,0,0,0,0,
                 _,Y,X,_,0,0,0,0,0,0,0,0,0,0,0,0,
                 _,Y,X,X,_,0,0,0,0,0,0,0,0,0,0,0,
                 _,Y,Y,X,X,_,0,0,0,0,0,0,0,0,0,0,
                 _,Y,Y,X,X,X,_,0,0,0,0,0,0,0,0,0,
                 _,Y,Y,Y,X,X,X,_,0,0,0,0,0,0,0,0,
                 _,Y,Y,Y,X,X,X,X,_,0,0,0,0,0,0,0,
                 _,Y,Y,Y,Y,X,_,_,_,0,0,0,0,0,0,0,
                 _,Y,_,_,Y,Y,_,0,0,0,0,0,0,0,0,0,
                 _,_,0,0,_,Y,X,_,0,0,0,0,0,0,0,0,
                 0,0,0,0,_,Y,Y,_,0,0,0,0,0,0,0,0,
                 0,0,0,0,0,_,_,_,0,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

static const u8 CURSOR_IMAGE_ARROWSMOOTHING[CURSOR_WIDTH * CURSOR_HEIGHT] =
                {_,_,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                 _,X,_,0,0,0,0,0,0,0,0,0,0,0,0,0,
                 _,Y,X,_,0,_,_,0,0,0,0,0,0,0,0,0,
                 _,Y,X,X,_,Z,Z,_,0,0,_,_,0,0,0,0,
                 _,Y,Y,_,Z,_,_,Z,_,_,Z,_,0,0,0,0,
                 _,Y,_,Z,_,X,_,_,Z,Z,_,_,0,0,0,0,
                 _,Y,_,_,X,X,X,_,_,_,0,0,0,0,0,0,
                 _,Y,Y,Y,X,X,X,X,_,0,0,0,0,0,0,0,
                 _,Y,Y,Y,Y,X,_,_,_,0,0,0,0,0,0,0,
                 _,Y,_,_,Y,Y,_,0,0,0,0,0,0,0,0,0,
                 _,_,0,0,_,Y,X,_,0,0,0,0,0,0,0,0,
                 0,0,0,0,_,Y,Y,_,0,0,0,0,0,0,0,0,
                 0,0,0,0,0,_,_,_,0,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

static const u8 CURSOR_IMAGE_HAND[CURSOR_WIDTH * CURSOR_HEIGHT] =
                {0,0,0,0,0,0,0,0,_,_,0,0,0,0,0,0,
                 0,0,_,_,_,_,0,_,X,_,0,0,0,0,0,0,
                 0,0,_,X,_,X,_,_,X,_,0,0,0,0,0,0,
                 0,0,_,_,X,_,X,_,X,_,0,0,0,0,0,0,
                 0,0,0,_,X,_,X,_,X,_,0,0,0,0,0,0,
                 _,_,0,_,X,_,X,_,X,_,0,0,0,0,0,0,
                 _,Y,_,X,X,X,X,X,X,_,0,0,0,0,0,0,
                 _,Y,_,X,X,X,X,X,X,_,0,0,0,0,0,0,
                 _,_,_,Y,X,X,X,X,X,_,0,0,0,0,0,0,
                 0,_,_,Y,Y,Y,Y,X,X,_,0,0,0,0,0,0,
                 0,0,_,_,Y,Y,Y,Y,_,0,0,0,0,0,0,0,
                 0,0,0,0,_,_,_,_,0,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,};

static const u8 CURSOR_IMAGE_HANDGRAB[CURSOR_WIDTH * CURSOR_HEIGHT] =
                {0,0,_,_,_,_,_,_,0,0,0,0,0,0,0,0,
                 0,_,X,_,X,_,X,_,_,0,0,0,0,0,0,0,
                 0,_,X,X,X,X,X,X,_,_,0,0,0,0,0,0,
                 0,_,X,X,X,X,X,X,X,_,0,0,0,0,0,0,
                 _,Y,X,X,X,X,X,X,X,_,0,0,0,0,0,0,
                 _,Y,Y,Y,X,X,X,X,X,_,0,0,0,0,0,0,
                 0,_,Y,Y,Y,Y,Y,Y,Y,_,0,0,0,0,0,0,
                 0,_,Y,Y,Y,Y,Y,Y,_,0,0,0,0,0,0,0,
                 0,0,_,_,_,_,_,_,_,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,};

static const u8 CURSOR_IMAGE_NOTALLOWED[CURSOR_WIDTH * CURSOR_HEIGHT] =
                {0,0,0,_,_,_,0,0,0,0,0,0,0,0,0,0,
                 0,0,_,Y,Y,Y,_,0,0,0,0,0,0,0,0,0,
                 0,_,Y,_,_,_,Y,_,0,0,0,0,0,0,0,0,
                 _,Y,_,Y,_,0,_,Y,_,0,0,0,0,0,0,0,
                 _,Y,_,_,Y,_,_,Y,_,0,0,0,0,0,0,0,
                 _,Y,_,0,_,Y,_,Y,_,0,0,0,0,0,0,0,
                 0,_,Y,_,_,_,Y,_,0,0,0,0,0,0,0,0,
                 0,0,_,Y,Y,Y,_,0,0,0,0,0,0,0,0,0,
                 0,0,0,_,_,_,0,0,0,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

static const u8 CURSOR_IMAGE_CAMPANLEFT[CURSOR_WIDTH * CURSOR_HEIGHT] =
                {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                 0,0,0,0,0,_,_,0,0,0,0,0,0,0,0,0,
                 0,0,0,0,_,W,_,0,0,0,0,0,0,0,0,0,
                 0,0,0,_,W,_,0,0,0,0,0,0,0,0,0,0,
                 0,0,_,W,_,0,0,0,0,0,0,0,0,0,0,0,
                 0,_,W,_,0,0,0,0,0,0,0,0,0,0,0,0,
                 0,0,_,W,_,0,0,0,0,0,0,0,0,0,0,0,
                 0,0,0,_,W,_,0,0,0,0,0,0,0,0,0,0,
                 0,0,0,0,_,W,_,0,0,0,0,0,0,0,0,0,
                 0,0,0,0,0,_,_,0,0,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

static const u8 CURSOR_IMAGE_INVISIBLE[CURSOR_WIDTH * CURSOR_HEIGHT] =
                {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

#undef X
#undef Y
#undef Z
#undef W
#undef _
