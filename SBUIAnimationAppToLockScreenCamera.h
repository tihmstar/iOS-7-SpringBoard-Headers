/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIAnimationDosidoTransitionController.h"

@class UIView, SBLockScreenViewControllerBase;

__attribute__((visibility("hidden")))
@interface SBUIAnimationAppToLockScreenCamera : SBUIAnimationDosidoTransitionController {
	SBLockScreenViewControllerBase* _lockscreenVC;
	UIView* _cameraPNGView;
}
-(void)_cleanupAnimation;
-(void)_prepareAnimation;
-(void)dealloc;
-(id)initWithActivatingLockscreen:(id)activatingLockscreen deactivatingApp:(id)app;
@end

