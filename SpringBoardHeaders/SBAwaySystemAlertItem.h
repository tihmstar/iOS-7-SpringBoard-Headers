/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAwayListItem.h"

@class NSString, SBAlertItem, UIImage;

__attribute__((visibility("hidden")))
@interface SBAwaySystemAlertItem : SBAwayListItem {
	SBAlertItem* _currentAlert;
	NSString* _title;
	UIImage* _appImage;
	NSString* _message;
	int _displayedButtonIndex;
	BOOL _isAlarm;
}
-(BOOL)isAlarm;
-(void)buttonPressed;
-(id)sortDate;
-(id)iconImage;
-(id)title;
-(id)message;
-(void)setCurrentAlert:(id)alert;
-(id)currentAlert;
-(void)dealloc;
-(id)initWithSystemAlert:(id)systemAlert;
-(id)init;
@end

