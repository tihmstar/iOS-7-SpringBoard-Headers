/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SBIconContentView : XXUnknownSuperclass {
	int _orientation;
	NSMutableArray* _folderContentViews;
	float _searchGestureProgress;
}
@property(assign, nonatomic) int orientation;
-(void)layoutSubviews;
-(void)didAddSubview:(id)subview;
-(void)clearAllFolderContentViews;
-(void)popFolderContentView:(id)view;
-(void)pushFolderContentView:(id)view;
-(void)updateLayoutWithDuration:(double)duration;
-(void)dealloc;
-(id)initWithOrientation:(int)orientation;
@end

