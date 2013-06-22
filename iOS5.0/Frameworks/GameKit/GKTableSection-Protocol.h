/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol GKTableSection <NSObject>
- (id)tableView:(id)arg1 prepareContents:(id)arg2 forCell:(id)arg3 atIndexPath:(id)arg4;
- (id)tableView:(id)arg1 reuseIdentifierForRow:(int)arg2;
- (int)sectionRowCountInTableView:(id)arg1;

@optional
@property(nonatomic, getter=isLoading) BOOL loading;
- (void)filterWithSearchText:(id)arg1;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)swipeDeleteConfirmTitleInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSwipeToDeleteRow:(id)arg2;
- (void)tableView:(id)arg1 didSelectIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectIndexPath:(id)arg2;
- (id)sectionFooterViewInTableView:(id)arg1;
- (float)sectionFooterHeightInTableView:(id)arg1;
- (id)sectionHeaderViewInTableView:(id)arg1;
- (float)sectionHeaderHeightInTableView:(id)arg1;
- (id)alternateSectionHeaderTitleInTableView:(id)arg1;
- (id)sectionHeaderTitleSecondaryTextInTableView:(id)arg1;
- (id)sectionHeaderTitleInTableView:(id)arg1;
- (void)tableView:(id)arg1 willDrawCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfColumnsForRow:(int)arg2;
- (void)tableView:(id)arg1 prepareExpensiveContentAtIndexPaths:(id)arg2 withCompletionHandler:(id)arg3;
- (void)refreshDataWithCompletionHandlerAndError:(id)arg1;
- (id)tableView:(id)arg1 objectForIndexPath:(id)arg2;
@end
