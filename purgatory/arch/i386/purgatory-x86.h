#ifndef PURGATORY_X86_H
#define PURGATORY_X86_H

enum vga_type {
	DEFAULT_VGA  = 0,
	QEMU_STD_VGA = 1,
};

void x86_reset_vga(void);
void x86_setup_legacy_pic(void);
void x86_setup_legacy_timer(void);
void crashdump_backup_memory(void);

#endif /* PURGATORY_X86_H */
