/*
 * FAAC - Freeware Advanced Audio Coder
 * Copyright (C) 2001 Menno Bakker
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * $Id: fft.h,v 1.1 2001/01/17 11:21:40 menno Exp $
 */

#ifndef FFT_H
#define FFT_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */




static void build_table(int logm);
static void rsrec(double *x, int logm);
static void srrec(double *xr, double *xi, int logm);
void rsfft(double *x, int logm);
void srfft(double *xr, double *xi, int logm);
void srifft(double *xr, double *xi, int logm);


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* FFT_H */
