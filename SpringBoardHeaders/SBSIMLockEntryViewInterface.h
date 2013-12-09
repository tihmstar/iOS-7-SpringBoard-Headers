/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "NSObject.h"


@protocol SBSIMLockEntryViewInterface <NSObject>
-(void)setupSuccess;
-(void)setupFailureState;
-(void)setupUnlockAttemptState;
-(void)setupCurrentLockAttemptState;
-(id)label;
-(id)titleText;
-(id)localizedStringWithKey:(id)key;
-(id)initWithFrame:(CGRect)frame languageCode:(id)code;
@end

