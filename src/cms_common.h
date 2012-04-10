/*
 * Copyright 2011-2012 Red Hat, Inc.
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
#ifndef CMS_COMMON_H
#define CMS_COMMON_H 1

extern int cms_context_init(cms_context *ctx);
extern void cms_context_fini(cms_context *ctx);

extern int read_cert(int certfd, CERTCertificate **cert);

extern SEC_ASN1Template AlgorithmIDTemplate[];
extern int generate_algorithm_id(cms_context *ctx, SECAlgorithmID *idp,
				SECOidTag tag);


#endif /* CMS_COMMON_H */