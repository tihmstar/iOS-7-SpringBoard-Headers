/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBIconZoomAnimator.h"
#import "SBIconListLayoutDelegate.h"
#import "SpringBoard-Structs.h"

@class UIView, SBCenterZoomSettings;

__attribute__((visibility("hidden")))
@interface SBCenterIconZoomAnimator : SBIconZoomAnimator <SBIconListLayoutDelegate> {
	UIView* _zoomView;
	float _iconZoomedZ;
	float _centerRow;
	float _centerCol;
	CGPoint _cameraPosition;
}
@property(readonly, assign, nonatomic) CGPoint cameraPosition;
@property(readonly, assign, nonatomic) UIView* zoomView;
@property(retain, nonatomic) SBCenterZoomSettings* zoomSettings;
-(void)_calculateCentersAndCameraPosition;
-(id)_animationFactoryForDock;
-(id)_animationFactoryForIcon:(id)icon;
-(void)_positionView:(id)view forIcon:(id)icon;
-(void)iconListViewLayoutInvalidated:(id)invalidated;
-(void)iconListView:(id)view wouldHaveMovedIcon:(id)icon;
-(double)_iconZoomDelay;
-(void)_animateToZoomFraction:(float)zoomFraction afterDelay:(double)delay withSharedCompletion:(id)sharedCompletion;
-(unsigned)_numberOfSignificantAnimations;
-(void)_cleanupZoom;
-(void)_setZoomFraction:(float)fraction;
-(void)_prepareZoom;
-(void)dealloc;
-(id)initWithFolderController:(id)folderController;
@end

