/*
 * Copyright (C) 2016 Jan Pokorny <jpokorny@redhat.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#include <assert.h>
#include <stdlib.h>

#include <glib.h>

#include "range2random_glib.h"
#include "ticket.h"

int
alt_glib_rand_from_interval(int from, int to)
{
       assert(from >= 0 && from < to);
       assert(sizeof(to) <= sizeof(gint32) || (to < 0x7fffffff));
       return (int) g_random_int_range(from, to);
}
