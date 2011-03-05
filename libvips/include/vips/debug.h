/* Support for debug.c in iofuncs.
 */

/*

    This file is part of VIPS.
    
    VIPS is free software; you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

 */

/*

    These files are distributed with VIPS - http://www.vips.ecs.soton.ac.uk

 */

#ifndef IM_DEBUG_H
#define IM_DEBUG_H

#ifdef __cplusplus
extern "C" {
#endif /*__cplusplus*/

#ifdef VIPS_DEBUG
#define VIPS_DEBUG_MSG( ... ) \
	G_STMT_START { printf( __VA_ARGS__ ); } G_STMT_END
#else
#define VIPS_DEBUG_MSG( ... ) \
	G_STMT_START { ; } G_STMT_END
#endif /*VIPS_DEBUG*/

#ifdef VIPS_DEBUG_RED
#define VIPS_DEBUG_MSG_RED( ... ) \
	G_STMT_START { printf( "red: " __VA_ARGS__ ); } G_STMT_END
#else
#define VIPS_DEBUG_MSG_RED( ... ) \
	G_STMT_START { ; } G_STMT_END
#endif /*VIPS_DEBUG_RED*/

#ifdef VIPS_DEBUG_AMBER
#define VIPS_DEBUG_MSG_AMBER( ... ) \
	G_STMT_START { printf( "amber: " __VA_ARGS__ ); } G_STMT_END
#else
#define VIPS_DEBUG_MSG_AMBER( ... ) \
	G_STMT_START { ; } G_STMT_END
#endif /*VIPS_DEBUG_AMBER*/

#ifdef VIPS_DEBUG_GREEN
#define VIPS_DEBUG_MSG_GREEN( ... ) \
	G_STMT_START { printf( "green: " __VA_ARGS__ ); } G_STMT_END
#else
#define VIPS_DEBUG_MSG_GREEN( ... ) \
	G_STMT_START { ; } G_STMT_END
#endif /*VIPS_DEBUG_GREEN*/

int im_image_sanity( VipsImage *im );
void im_image_sanity_all( void );

#ifdef __cplusplus
}
#endif /*__cplusplus*/

#endif /* IM_DEBUG_H */
