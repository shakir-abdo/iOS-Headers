/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewController.h"

@class NSArray, NSIndexPath, TKToneTableController, UIImage;

@interface TKToneClassicsTableViewController : UITableViewController
{
    id <TKToneClassicsTableViewControllerDelegate> delegate;
    NSArray *toneIdentifiers;
    TKToneTableController *toneTableController;
    NSIndexPath *selectedIndexPath;
    UIImage *checkmarkImage;
}

@property(retain, nonatomic) UIImage *checkmarkImage; // @synthesize checkmarkImage;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath;
@property(retain, nonatomic) TKToneTableController *toneTableController; // @synthesize toneTableController;
@property(retain, nonatomic) NSArray *toneIdentifiers; // @synthesize toneIdentifiers;
@property(nonatomic) id <TKToneClassicsTableViewControllerDelegate> delegate; // @synthesize delegate;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithDelegate:(id)arg1 toneTableController:(id)arg2;

@end

