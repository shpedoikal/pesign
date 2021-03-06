/*
 * Copyright 2011 Red Hat, Inc.
 * All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Author(s): Peter Jones <pjones@redhat.com>
 */
#ifndef PESIGN_CRYPTO_H
#define PESIGN_CRYPTO_H 1

#include <nss3/cert.h>
#include <nss3/secpkcs7.h>

#include "wincert.h"

extern int list_signatures(pesign_context *ctx);
extern void check_signature_space(pesign_context *ctx);
extern void allocate_signature_space(pesign_context *ctx, ssize_t sigspace);
extern int parse_signatures(pesign_context *ctx);
extern void export_signature(pesign_context *ctx);
extern int import_signature(pesign_context *ctx);
extern void remove_signature(pesign_context *ctx);
extern void export_pubkey(pesign_context *ctx);
extern void export_cert(pesign_context *ctx);
extern int generate_signature(pesign_context *ctx);
extern int generate_digest(pesign_context *ctx, Pe *pe);
extern int insert_signature(pesign_context *ctx);

#endif /* PESIGN_CRYPTO_H */
