/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSDate, SBPasscodeAlertItem, SBPasscodeComplianceAlertItem;

__attribute__((visibility("hidden")))
@interface SBPasscodeController : XXUnknownSuperclass {
	SBPasscodeAlertItem* _passcodeAlertItem;
	int _mode;
	NSString* _previousPasscode;
	NSString* _newPasscode;
	int _unlockScreenType;
	SBPasscodeComplianceAlertItem* _complianceAlertItem;
	NSDate* _forcedComplianceDate;
	id _telephonyNotificationObserver;
	int _restoreCompletedAlertStateChangedToken;
	BOOL _delayedComplianceAlertUntilAfterRestoreCompletedAlert;
}
+(id)sharedInstance;
-(void)checkPasscodeCompliance;
-(void)_activateComplianceAlert;
-(void)_stopListeningToRestoreCompletedAlertStateChangedNotifications;
-(void)_startListeningToRestoreCompletedAlertStateChangedNotifications;
-(BOOL)_isRestoreCompletedAlertActive;
-(void)_stopListeningToTelephonyNotifications;
-(void)_startListeningToTelephonyNotifications;
-(void)_didEndCall;
-(void)_abort;
-(void)_userWantsToComplyNow:(BOOL)complyNow;
-(void)_passwordEntered:(id)entered;
-(void)forceUserToChangePasscode;
-(void)dealloc;
@end

