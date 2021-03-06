/* SPDX-License-Identifier: LGPL-2.1+ */
#pragma once

#include <mntent.h>
#include <stdio.h>

#include "macro.h"


#if 0 /// UNNEEDED by elogind
int repeat_unmount(const char *path, int flags);
int umount_recursive(const char *target, int flags);
int bind_remount_recursive(const char *prefix, bool ro, char **blacklist);
int bind_remount_recursive_with_mountinfo(const char *prefix, bool ro, char **blacklist, FILE *proc_self_mountinfo);

int mount_move_root(const char *path);
#endif // 0

DEFINE_TRIVIAL_CLEANUP_FUNC(FILE*, endmntent);
#define _cleanup_endmntent_ _cleanup_(endmntentp)

#if 0 /// UNNEEDED by elogind
#endif // 0

#if 0 /// UNNEEDED by elogind
int mount_verbose(
                int error_log_level,
                const char *what,
                const char *where,
                const char *type,
                unsigned long flags,
                const char *options);
int umount_verbose(const char *where);
#endif // 0

#if 0 /// UNNEEDED by elogind
int mount_option_mangle(
                const char *options,
                unsigned long mount_flags,
                unsigned long *ret_mount_flags,
                char **ret_remaining_options);
#endif // 0

const char* mode_to_inaccessible_node(mode_t mode);
