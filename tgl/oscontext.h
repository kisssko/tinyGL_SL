#ifndef _tgl_osbuffer_h_
#define _tgl_osbuffer_h_

#include "glexport.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
  void **zbs;
  void **framebuffers;
  int numbuffers;
  int xsize, ysize;
} ostgl_context;

/*
TGL_EXPORT ostgl_context *
tglContextCreate(const int xsize,
                     const int ysize,
                     const int depth,
                     void **framebuffers,
                     const int numbuffers);

TGL_EXPORT void
tglContextDelete(ostgl_context *context);

TGL_EXPORT void
tglContextMakeCurrent(ostgl_context *context, const int index);
*/

void
ostgl_resize(ostgl_context * context,
             const int xsize,
             const int ysize,
             void **framebuffers);

#ifdef __cplusplus
}
#endif

#endif /* _tgl_osbuffer_h_ */
