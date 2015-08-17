/*
 *   
 *   Ophcrack is a Lanmanager/NTLM hash cracker based on the faster time-memory
 *   trade-off using rainbow tables. 
 *   
 *   Created with the help of: Maxime Mueller, Luca Wullschleger, Claude
 *   Hochreutiner, Andreas Huber and Etienne Dysli.
 *   
 *   Copyright (c) 2008 Philippe Oechslin, Cedric Tissieres, Bertrand Mesot
 *   
 *   Ophcrack is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *   
 *   Ophcrack is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *   
 *   You should have received a copy of the GNU General Public License
 *   along with Ophcrack; if not, write to the Free Software
 *   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 *   
 *   This program is released under the GPL with the additional exemption 
 *   that compiling, linking, and/or using OpenSSL is allowed.
 *   
 *   
 *   
 *   
*/
#ifndef ORIGINAL_H
#define ORIGINAL_H

#define RESOLVE_INSIST 1
#define RESOLVE_DO_NOT_INSIST 0
#define RESOLVE_MAX_COMBINATIONS 50000000

#include "list.h"

#ifdef  __cplusplus
extern "C" {
#endif

int resolve_nt_hash(char p1[], char p2[], char h[], unsigned char pw[], 
		    int insist);

void make_nthash(char *pw, char *out);

int exec_local_pwdump6(list_t *hashes, int id);
int exec_remote_pwdump6(list_t *hashes, const char *hostname, const char *share, 
			const char *user, int id);

#ifdef  __cplusplus
}
#endif
#endif
