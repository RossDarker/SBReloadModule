#import "SBReloadModule.h"
#import <spawn.h>
#import "ControlCenterUI/ControlCenterUI-Structs.h"

@implementation SBReloadModule

//Return the icon of your module here
- (UIImage *)iconGlyph
{
	return [UIImage imageNamed:@"AppIcon" inBundle:[NSBundle bundleForClass:[self class]] compatibleWithTraitCollection:nil];
}

- (UIImage *)selectedIconGlyph
{
	return [UIImage imageNamed:@"AppIcon" inBundle:[NSBundle bundleForClass:[self class]] compatibleWithTraitCollection:nil];
}

//Return the color selection color of your module here
- (UIColor *)selectedColor
{
	return [UIColor redColor];
}

- (BOOL)isSelected
{
	return _selected;
}

- (void)setSelected:(BOOL)selected
{
	_selected = selected;
	 pid_t pid;
    	int status;
    	const char* args[] = {"sbreload", NULL};
	posix_spawn(&pid, "/usr/bin/sbreload", NULL, NULL, (char* const*)args, NULL);
   	waitpid(pid, &status, WEXITED);
	[super refreshState];
}

@end
