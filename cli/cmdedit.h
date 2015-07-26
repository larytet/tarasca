/*
 * cmdedit.h --
 *
 * Author -- Pedro Aguilar <paguilar@junkerhq.net>
 *
 * Copyright (c) 2004 - 2006 Pedro Aguilar
 *
 * Description: Defines for cmdedit.h
 *
 * Copyright (c) 2004, Pedro Aguilar
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#ifndef CMDEDIT_H
#define CMDEDIT_H

int     cmdedit_read_input(char *);
int     login_read_input(char *, char *);

#ifdef CONFIG_FEATURE_COMMAND_SAVEHISTORY
void    load_history(const char *fromfile);
void    save_history(const char *tofile);
#endif

#endif /* CMDEDIT_H */
