/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "RUAudioPreviewViewDelegate-Protocol.h"
#import "RUTrackHistoryDataSourceDelegate-Protocol.h"
#import "RUWishlistDataSourceDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, RUPreviewSession, RUTrackHistoryDataSource, RUWishlistDataSource, RadioGetWishListRequest, SKUICircleProgressIndicator, UIActionSheet, UILabel, UITableView;

@interface RUHistoryViewController : UIViewController <RUAudioPreviewViewDelegate, RUTrackHistoryDataSourceDelegate, RUWishlistDataSourceDelegate, UIActionSheetDelegate, UITableViewDataSource, UITableViewDelegate>
{
    SKUICircleProgressIndicator *_activityIndicator;
    UIActionSheet *_confirmationActionSheet;
    _Bool _isRefreshingWishlist;
    UILabel *_loadingLabel;
    UILabel *_noHistoryLabel;
    RUPreviewSession *_previewSession;
    long long _previewingIndex;
    UITableView *_tableView;
    RUTrackHistoryDataSource *_trackHistoryDataSource;
    NSArray *_trackHistorySessions;
    RUWishlistDataSource *_wishlistDataSource;
    RadioGetWishListRequest *_wishlistRequest;
    NSMutableArray *_wishlistedTracks;
    id <RUHistoryViewControllerDelegate> _delegate;
    long long _historyType;
}

+ (void)initialize;
@property(readonly, nonatomic) long long historyType; // @synthesize historyType=_historyType;
@property(nonatomic) __weak id <RUHistoryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_wishlistedTrackAtIndexPath:(id)arg1;
- (void)_updateViewForHistoryChange;
- (id)_trackHistoryAtIndexPath:(id)arg1;
- (void)_refreshWishlistedTracks;
- (id)_newSegmentedControl;
- (id)_newSectionHeaderForType:(long long)arg1 withAttributedText:(id)arg2;
- (id)_newSectionFooterForType:(long long)arg1 inSection:(long long)arg2;
- (id)_newShadowViewWithFrame:(struct CGRect)arg1;
- (_Bool)_isLoading;
- (void)_endPreviewPlayback;
- (unsigned long long)_count;
- (void)_radioAuthenticatedAccountIdentifierDidChangeNotification:(id)arg1;
- (void)_selectedSegmentIndexDidChangeAction:(id)arg1;
- (void)_doneAction:(id)arg1;
- (void)_clearAction:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)wishlistDataSourceDidInvalidate:(id)arg1;
- (void)trackHistoryDataSourceDidInvalidate:(id)arg1;
- (void)trackHistoryDataSource:(id)arg1 didInsertSections:(id)arg2 insertIndexPaths:(id)arg3 updateIndexPaths:(id)arg4 deleteSections:(id)arg5 deleteIndexPaths:(id)arg6;
- (void)audioPreviewViewDidCancel:(id)arg1 forReason:(long long)arg2;
- (id)contentScrollView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

