//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABMembersController, ABModel, UIView;

@protocol ABMembersControllerDelegate <NSObject>
- (ABModel *)model;
- (void)membersControllerDidEndServerSearch:(ABMembersController *)arg1;
- (void)membersControllerDidEndSearching:(ABMembersController *)arg1;
- (void)membersControllerWillEndSearching:(ABMembersController *)arg1;
- (void)membersControllerWillStartSearching:(ABMembersController *)arg1;
- (BOOL)membersController:(ABMembersController *)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2;
- (int)behavior;
- (void)personWasSelected:(void *)arg1;
- (BOOL)showCardForPerson:(void *)arg1 withMemberCell:(UIView *)arg2 animate:(BOOL)arg3;
- (BOOL)showCardForPerson:(void *)arg1 animate:(BOOL)arg2;
- (BOOL)allowsShowingPersonsCards;
- (void)showInsertEditorForPerson:(void *)arg1 animate:(BOOL)arg2;
@end

