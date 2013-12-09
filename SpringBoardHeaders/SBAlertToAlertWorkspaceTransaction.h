/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBWorkspaceTransaction.h"
#import "SBUIAnimationControllerDelegate.h"

@class SBUIAnimationController, SBAlert;

__attribute__((visibility("hidden")))
@interface SBAlertToAlertWorkspaceTransaction : SBWorkspaceTransaction <SBUIAnimationControllerDelegate> {
	SBAlert* _activatingAlert;
	SBAlert* _deactivatingAlert;
	BOOL _activation;
	SBUIAnimationController* _animation;
	BOOL _animatingAlertDeactivation;
}
-(void)animationControllerDidFinishAnimation:(id)animationController;
-(void)animationController:(id)controller willBeginAnimation:(BOOL)animation;
-(void)_deactivateAlertIfNecessary;
-(void)_alertAnimationComplete:(id)complete;
-(void)_handleFailure;
-(void)_transactionComplete;
-(void)_endAnimation;
-(BOOL)selfAlertDidDeactivate:(id)selfAlert;
-(BOOL)selfAlertWillDeactivate:(id)selfAlert;
-(BOOL)selfAlertDidActivate:(id)selfAlert overAlerts:(id)alerts;
-(BOOL)selfAlertWillActivate:(id)selfAlert overAlerts:(id)alerts;
-(void)_commit;
-(id)debugDescription;
-(void)dealloc;
-(id)_initWithWorkspace:(id)workspace alertManager:(id)manager activatingAlert:(id)alert deactivatingAlert:(id)alert4 activation:(BOOL)activation;
-(id)initDeactivationWithWorkspace:(id)workspace alertManager:(id)manager from:(id)from to:(id)to;
-(id)initActivationWithWorkspace:(id)workspace alertManager:(id)manager from:(id)from to:(id)to;
@end

