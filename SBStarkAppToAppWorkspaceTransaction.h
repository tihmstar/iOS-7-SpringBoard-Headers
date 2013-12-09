/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIAnimationControllerDelegate.h"
#import "SBStarkToAppWorkspaceTransaction.h"

@class BKSApplicationActivationAssertion, SBUIAnimationController, SBApplication;

__attribute__((visibility("hidden")))
@interface SBStarkAppToAppWorkspaceTransaction : SBStarkToAppWorkspaceTransaction <SBUIAnimationControllerDelegate> {
	SBApplication* _fromApp;
	SBUIAnimationController* _animationController;
	BKSApplicationActivationAssertion* _suspendingAppAssertion;
	BOOL _animatedActivation;
	BOOL _animatedDeactivation;
}
@property(readonly, assign, nonatomic) SBApplication* fromApp;
-(void)animationControllerDidFinishAnimation:(id)animationController;
-(void)animationController:(id)controller willBeginAnimation:(BOOL)animation;
-(id)_newAnimationFromLauncherToApp;
-(id)_newAnimationFromAppToLauncher;
-(id)_newAnimationFromAppToApp;
-(void)_doCommit;
-(id)_animation;
-(void)_handleAppDidNotChange;
-(id)_setupAnimationFrom:(id)from to:(id)to;
-(void)_transactionComplete;
-(void)_interruptWithReason:(int)reason;
-(BOOL)_canBeInterrupted;
-(void)_endAnimation;
-(BOOL)selfStarkAlertDidDeactivate:(id)selfStarkAlert;
-(BOOL)selfAlertDidDeactivate:(id)selfAlert;
-(BOOL)selfApplicationExited:(id)exited;
-(BOOL)selfApplicationLaunchDidFail:(id)selfApplicationLaunch;
-(BOOL)selfApplicationActivated:(id)activated;
-(BOOL)selfApplicationDidFinishLaunching:(id)selfApplication withInfo:(id)info;
-(BOOL)selfApplicationDidBecomeReceiver:(id)selfApplication fromApplication:(id)application;
-(BOOL)selfApplicationWillBecomeReceiver:(id)selfApplication fromApplication:(id)application;
-(void)_commit;
-(void)_beginAnimation;
-(int)_setupMilestonesFrom:(id)from to:(id)to;
-(id)debugDescription;
-(void)dealloc;
-(id)initWithWorkspace:(id)workspace mainScreenAlertManager:(id)manager starkScreenController:(id)controller from:(id)from to:(id)to;
@end

