//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBSWorkspaceDelegate.h"

@class FBSUIApplicationWorkspace;

@protocol FBSUIApplicationWorkspaceDelegate <FBSWorkspaceDelegate>
- (void)workspaceNoteAssertionExpirationImminent:(FBSUIApplicationWorkspace *)arg1;
- (void)workspaceShouldExit:(FBSUIApplicationWorkspace *)arg1;
- (void)workspace:(FBSUIApplicationWorkspace *)arg1 didLaunchWithCompletion:(void (^)(FBSUIApplicationLaunchResponse *))arg2;
@end

