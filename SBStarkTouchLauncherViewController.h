/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "SBStarkIconCellDelegate.h"
#import "SBStarkLauncherLayoutDelegate.h"
#import "SBStarkLauncherViewController.h"

@class SBStarkLauncherLayout, UICollectionView;
@protocol SBStarkTouchLauncherObserver;

__attribute__((visibility("hidden")))
@interface SBStarkTouchLauncherViewController : SBStarkLauncherViewController <UICollectionViewDataSource, UICollectionViewDelegate, SBStarkIconCellDelegate, SBStarkLauncherLayoutDelegate> {
	id<SBStarkTouchLauncherObserver> _observer;
	SBStarkLauncherLayout* _layout;
	UICollectionView* _iconCollectionView;
}
@property(assign, nonatomic) id<SBStarkTouchLauncherObserver> observer;
+(float)desiredHeightForBounds:(CGRect)bounds;
-(void)starkLauncherLayoutDidChangeScrollButtonInsets:(id)starkLauncherLayout;
-(BOOL)starkIconCellDisplaysBadges:(id)badges;
-(void)scrollViewDidScroll:(id)scrollView;
-(BOOL)collectionView:(id)view shouldShowMenuForItemAtIndexPath:(id)indexPath;
-(void)collectionView:(id)view didDeselectItemAtIndexPath:(id)indexPath;
-(void)collectionView:(id)view didSelectItemAtIndexPath:(id)indexPath;
-(void)collectionView:(id)view didHighlightItemAtIndexPath:(id)indexPath;
-(id)collectionView:(id)view cellForItemAtIndexPath:(id)indexPath;
-(int)collectionView:(id)view numberOfItemsInSection:(int)section;
-(int)numberOfSectionsInCollectionView:(id)collectionView;
-(void)loadView;
-(void)relayoutIcons;
-(float)height;
-(void)setHeight:(float)height;
-(void)scrollRight;
-(BOOL)canScrollRight;
-(void)scrollLeft;
-(BOOL)canScrollLeft;
-(UIEdgeInsets)scrollButtonInsets;
-(void)dealloc;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
-(id)initWithInterfaceType:(int)interfaceType;
@end
