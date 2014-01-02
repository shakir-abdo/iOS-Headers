/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

@class SBStarkBackgroundProvidersViewController;

@interface SBStarkBackgroundViewController : UIViewController
{
    SBStarkBackgroundProvidersViewController *_providerViewController;
    struct UIEdgeInsets _providerInsets;
    BOOL _providerHidden;
    struct CGPoint _highestOccludedPoint;
}

- (struct CGRect)_providerViewPortFrame;
- (struct CGRect)_providerViewFrame;
- (struct CGRect)_visibleFrame;
- (struct CGRect)_viewFrame;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)setProviderHidden:(BOOL)arg1 withAnimationFactory:(id)arg2 completionState:(id)arg3;
- (void)switchToState:(id)arg1 withAnimationName:(id)arg2;
@property(nonatomic) struct CGPoint highestOccludedPoint;
@property(nonatomic) struct UIEdgeInsets providerInsets;
@property(nonatomic) id <SBStarkBackgroundProvidersViewControllerDelegate> delegate;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
