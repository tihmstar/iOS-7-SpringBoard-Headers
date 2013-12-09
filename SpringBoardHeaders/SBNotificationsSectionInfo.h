/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBBBSectionInfo.h"

@class SBBulletinListSection;

__attribute__((visibility("hidden")))
@interface SBNotificationsSectionInfo : SBBBSectionInfo {
	id _clearPossibleAction;
	id _clearAction;
}
@property(copy, nonatomic) id clearAction;
@property(copy, nonatomic) id clearPossibleAction;
@property(readonly, assign, nonatomic) SBBulletinListSection* representedListSection;
-(void)populateReusableView:(id)view;
-(BOOL)shouldSuppressBulletinMessageForPrivacy:(id)privacy;
-(float)heightForReusableViewInTableView:(id)tableView;
-(Class)reusableViewClass;
-(id)identifier;
-(void)dealloc;
@end

