/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBDataPlanAccountAlertItem.h"

@class NSNumber;

__attribute__((visibility("hidden")))
@interface SBDataPlanUsageAlertItem : SBDataPlanAccountAlertItem {
	NSNumber* _remainingPortion;
}
@property(retain, nonatomic) NSNumber* remainingPortion;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(void)dealloc;
-(id)initWithAccountURL:(id)accountURL usage:(id)usage;
@end

