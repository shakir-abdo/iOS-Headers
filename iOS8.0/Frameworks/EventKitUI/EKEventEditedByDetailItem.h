//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKitUI/EKEventDetailItem.h>

#import "EKCellShortener.h"

@class NSString, UITableViewCell;

__attribute__((visibility("hidden")))
@interface EKEventEditedByDetailItem : EKEventDetailItem <EKCellShortener>
{
    UITableViewCell *_cell;
}

- (void).cxx_destruct;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned int)arg2;
- (BOOL)hasDetailViewControllerAtIndex:(unsigned int)arg1;
- (void)shortenCell:(id)arg1;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;
- (float)defaultCellHeightForSubitemAtIndex:(unsigned int)arg1 forWidth:(float)arg2;
- (BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2;
- (void)reset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

