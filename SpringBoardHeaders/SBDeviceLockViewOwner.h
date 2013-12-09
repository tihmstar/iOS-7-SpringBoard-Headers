/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol SBDeviceLockViewOwner <NSObject>
@optional
-(void)animateToEmergencyCall;
-(BOOL)shouldUseTransparentStatusBar;
-(BOOL)isDisplayingErrorStatus;
-(void)deviceUnlockFailed;
-(void)deviceUnlockSucceeded;
-(void)setShowingDeviceLock:(BOOL)lock animated:(BOOL)animated;
-(void)setShowingDeviceLock:(BOOL)lock;
@end

