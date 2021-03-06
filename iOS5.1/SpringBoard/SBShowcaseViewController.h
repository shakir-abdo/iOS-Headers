/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class SBShowcaseController;

@interface SBShowcaseViewController : NSObject
{
    SBShowcaseController *_showcase;
    int _revealMode;
}

- (id)view;
- (void)viewWillAppear;
- (void)viewDidAppear;
- (void)viewWillDisappear;
- (void)viewDidDisappear;
- (void)viewWillRotateToInterfaceOrientation:(int)arg1;
- (void)viewDidRotateFromInterfaceOrientation:(int)arg1;
- (float)bottomBarHeight;
- (BOOL)expectsFaceContact;
- (BOOL)shouldShowLockStatusBarTime;
- (BOOL)shouldShowLockStatusBarIcon;
@property(nonatomic) int revealMode; // @synthesize revealMode=_revealMode;
@property(nonatomic) SBShowcaseController *showcase; // @synthesize showcase=_showcase;

@end

