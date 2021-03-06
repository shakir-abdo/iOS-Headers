//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAMAnimationDelegate, UILabel;

@interface CAMTimerIndicatorView : UIView
{
    BOOL __performingStyleAnimation;
    int _style;
    UIView *__dimmingView;
    UILabel *__countdownLabel;
    int __startingTicks;
    int __remainingTicks;
    int __labelOrientation;
    CAMAnimationDelegate *__animationDelegate;
    int __deferredLabelOrientation;
}

@property(nonatomic, setter=_setDeferredOrientation:) int _deferredLabelOrientation; // @synthesize _deferredLabelOrientation=__deferredLabelOrientation;
@property(nonatomic, getter=_isPerformingStyleAnimation, setter=_setPerformingStyleAnimation:) BOOL _performingStyleAnimation; // @synthesize _performingStyleAnimation=__performingStyleAnimation;
@property(readonly, nonatomic) CAMAnimationDelegate *_animationDelegate; // @synthesize _animationDelegate=__animationDelegate;
@property(nonatomic, setter=_setLabelOrientation:) int _labelOrientation; // @synthesize _labelOrientation=__labelOrientation;
@property(readonly, nonatomic) int _remainingTicks; // @synthesize _remainingTicks=__remainingTicks;
@property(readonly, nonatomic) int _startingTicks; // @synthesize _startingTicks=__startingTicks;
@property(readonly, nonatomic) UILabel *_countdownLabel; // @synthesize _countdownLabel=__countdownLabel;
@property(readonly, nonatomic) UIView *_dimmingView; // @synthesize _dimmingView=__dimmingView;
@property(nonatomic) int style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)_handleOrientationChange:(int)arg1;
- (void)cam_rotateWithDeviceOrientation:(int)arg1 animated:(BOOL)arg2;
- (void)_addDimmingAnimationForTick:(int)arg1;
- (id)_dimmingAnimationForTick:(int)arg1;
- (void)_transitionDimmingViewFromStyle:(int)arg1;
- (id)_finalDimmingAnimation;
- (void)_addDecrementAnimationForTick:(int)arg1;
- (id)_decrementAnimationForTick:(int)arg1;
- (void)_updateCountdownLabelWithTicksRemaining;
- (void)resetWithNumberOfTicks:(int)arg1;
- (void)decrement;
- (void)stopCountdown;
- (void)startCountdownWithAnimationDelegate:(id)arg1;
- (void)_updateFromChangeToStyle:(int)arg1 animated:(BOOL)arg2;
- (id)_fontForStyle:(int)arg1;
- (void)setStyle:(int)arg1 animated:(BOOL)arg2;
- (void)setFont:(id)arg1;
- (id)font;
- (void)_layoutCountdownLabelForStyle:(int)arg1;
- (void)_layoutCountdownLabelForLargeStyle;
- (void)_layoutCountdownLabelForSmallStyle;
- (struct CGRect)_landscapeSwapBoundsCoordinates:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonCAMTimerIndicatorViewInitialization;

@end

