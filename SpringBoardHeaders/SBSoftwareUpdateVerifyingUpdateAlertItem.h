/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBBaseSoftwareUpdateAlertItem.h"

@class UIView;

__attribute__((visibility("hidden")))
@interface SBSoftwareUpdateVerifyingUpdateAlertItem : SBBaseSoftwareUpdateAlertItem {
	UIView* _activityAccessoryView;
}
-(BOOL)dismissOnLock;
-(BOOL)allowMenuButtonDismissal;
-(BOOL)shouldShowInLockScreen;
-(BOOL)undimsScreen;
-(BOOL)behavesSuperModally;
-(BOOL)reappearsAfterLock;
-(BOOL)reappearsAfterUnlock;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(void)dealloc;
-(id)initWithDescriptor:(id)descriptor;
@end

