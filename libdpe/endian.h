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
#ifndef ENDIAN_H
#define ENDIAN_H

#include <endian.h>
#include <stdint.h>
#include <string.h>

#if __BYTE_ORDER == __LITTLE_ENDIAN
#define cpu_to_le16(x) (x)
#define cpu_to_le32(x) (x)
#define cpu_to_le64(x) (x)
#define le16_to_cpu(x) (x)
#define le32_to_cpu(x) (x)
#define le64_to_cpu(x) (x)
#define cpu_to_be16(x) __bswap_16(x)
#define cpu_to_be32(x) __bswap_32(x)
#define cpu_to_be64(x) __bswap_64(x)
#define be16_to_cpu(x) __bswap_16(x)
#define be32_to_cpu(x) __bswap_32(x)
#define be64_to_cpu(x) __bswap_64(x)
#else
#define cpu_to_be16(x) (x)
#define cpu_to_be32(x) (x)
#define cpu_to_be64(x) (x)
#define be16_to_cpu(x) (x)
#define be32_to_cpu(x) (x)
#define be64_to_cpu(x) (x)
#define cpu_to_le16(x) __bswap_16(x)
#define cpu_to_le32(x) __bswap_32(x)
#define cpu_to_le64(x) __bswap_64(x)
#define le16_to_cpu(x) __bswap_16(x)
#define le32_to_cpu(x) __bswap_32(x)
#define le64_to_cpu(x) __bswap_64(x)
#endif

static inline uint32_t
__attribute__((unused))
SwapBytes32(uint32_t x)
{
	return __bswap_32(x);
}

static inline int
__attribute__((unused))
cmp_le16(uint16_t *ledata, uint16_t *cpudata)
{
	uint16_t tmp = le16_to_cpu(*ledata);
	return memcmp(&tmp, cpudata, sizeof(*cpudata));
}

static inline int
__attribute__((unused))
cmp_le32(uint32_t *ledata, uint32_t *cpudata)
{
	uint32_t tmp = le32_to_cpu(*ledata);
	return memcmp(&tmp, cpudata, sizeof(*cpudata));
}

#endif /* ENDIAN_H */
/* vim:set shiftwidth=8 softtabstop=8: */
