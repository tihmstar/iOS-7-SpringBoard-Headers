/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBCollectionViewCell.h"
#import "SBUIBannerView.h"

@class UIView, SBBannerContextView;

__attribute__((visibility("hidden")))
@interface SBStarkBannerCell : SBCollectionViewCell <SBUIBannerView> {
	SBBannerContextView* _contextView;
	UIView* _darkeningOverlayView;
}
-(id)bannerContext;
-(void)prepareForReuse;
-(void)_didSetHighlighted:(BOOL)highlighted;
-(void)noteDidDismiss;
-(void)noteWillDismissWithReason:(int)note;
-(void)noteDidAppear;
-(void)noteWillAppear;
-(void)setBannerContext:(id)context;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

