#define HAVE_PROTOTYPES 
#define HAVE_UNSIGNED_CHAR 
#define HAVE_UNSIGNED_SHORT 
//#undef void
//#undef const
#undef CHAR_IS_UNSIGNED
#define HAVE_STDDEF_H 
#define HAVE_STDLIB_H 
#undef NEED_BSD_STRINGS
#undef NEED_SYS_TYPES_H
#undef NEED_FAR_POINTERS
#undef NEED_SHORT_EXTERNAL_NAMES
/* Define this if you get warnings about undefined structures. */
#undef INCOMPLETE_TYPES_BROKEN

#define GETTEXT_PACKAGE "libexif"

#ifdef __GNUC__
#define inline __inline__
#else
#define inline S3E_INLINE
#endif