/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, SBFolderIcon;

__attribute__((visibility("hidden")))
@interface SBIconsIntoFolderAnimationContext : XXUnknownSuperclass {
	SBFolderIcon* _folderIcon;
	NSArray* _iconSnapshots;
	NSArray* _miniSnapshots;
	NSArray* _addedIcons;
	BOOL _openFolderOnFinish;
	id _completeBlock;
}
@property(copy, nonatomic) id completeBlock;
@property(assign, nonatomic) BOOL openFolderOnFinish;
@property(retain, nonatomic) NSArray* addedIcons;
@property(retain, nonatomic) NSArray* miniSnapshots;
@property(retain, nonatomic) NSArray* iconSnapshots;
@property(retain, nonatomic) SBFolderIcon* folderIcon;
-(void)dealloc;
@end

