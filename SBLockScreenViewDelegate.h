/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol SBLockScreenViewDelegate <NSObject>
-(id)effectiveCustomSlideToUnlockText;
-(BOOL)lockScreenViewPhonePluginIsActive;
-(void)lockScreenView:(id)view didEndScrollingOnPage:(int)page;
-(void)lockScreenViewWillEndDraggingWithPercentScrolled:(float)lockScreenView percentScrolledVelocity:(float)velocity targetScrollPercentage:(float)percentage;
-(void)lockScreenViewDidScrollWithNewScrollPercentage:(float)lockScreenView tracking:(BOOL)tracking;
-(void)lockScreenViewDidBeginScrolling:(id)lockScreenView;
-(void)lockScreenView:(id)view didScrollToPage:(int)page;
@end

