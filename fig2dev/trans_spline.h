/*
 * trans_spline.h
 * Copyright (c) 1995 C. Blanc and C. Schlick
 *
 * Any party obtaining a copy of these files is granted, free of charge, a
 * full and unrestricted irrevocable, world-wide, paid up, royalty-free,
 * nonexclusive right and license to deal in this software and documentation
 * files (the "Software"), including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense and/or sell copies
 * of the Software, and to permit persons who receive copies from any such
 * party to do so, with the only requirement being that the above copyright
 * and this permission notice remain intact.
 *
 */

#ifndef TRANS_SPLINE_H
#define TRANS_SPLINE_H

#define	MAXNUMPTS	25000
#define	HIGH_PRECISION	0.5
#define	ARROW_START	4

extern F_line	*create_line_with_spline(F_spline *s);
extern int	make_control_factors(F_spline *s);

#endif /* TRANS_SPLINE_H */
