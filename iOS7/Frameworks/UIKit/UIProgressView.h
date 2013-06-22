/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

#import "NSCoding-Protocol.h"

@class CAGradientLayer, UIColor, UIImage, UIImageView;

@interface UIProgressView : UIView <NSCoding>
{
    int _progressViewStyle;
    float _progress;
    int _barStyle;
    UIColor *_progressTintColor;
    UIColor *_trackTintColor;
    UIImageView *_trackView;
    UIImageView *_progressView;
    BOOL _isAnimating;
    BOOL _useArtwork;
    CAGradientLayer *_trackGradientLayer;
    CAGradientLayer *_progressGradientLayer;
    struct CGRect _previousBounds;
    struct CGRect _previousProgressBounds;
    UIImage *_trackImage;
    UIImage *_progressImage;
}

+ (CDStruct_d58a15aa)_standardImagesForStyle:(int)arg1 barStyle:(int)arg2;
+ (int)_indexForStyle:(int)arg1 barStyle:(int)arg2;
+ (struct CGSize)defaultSize;
@property(retain, nonatomic) UIColor *trackTintColor; // @synthesize trackTintColor=_trackTintColor;
@property(retain, nonatomic) UIColor *progressTintColor; // @synthesize progressTintColor=_progressTintColor;
@property(retain, nonatomic) UIImage *progressImage; // @synthesize progressImage=_progressImage;
@property(retain, nonatomic) UIImage *trackImage; // @synthesize trackImage=_trackImage;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(nonatomic) int progressViewStyle; // @synthesize progressViewStyle=_progressViewStyle;
- (void)_setProgressColor:(id)arg1;
- (id)_progressColor;
- (void)_setProgressAnimated:(float)arg1 duration:(double)arg2 delay:(double)arg3 options:(unsigned int)arg4;
- (void)setProgress:(float)arg1 animated:(BOOL)arg2;
- (void)_setProgress:(float)arg1;
- (void)layoutSubviews;
- (void)_updateImages;
- (id)_appropriateProgressImage;
- (id)_appropriateTrackImage;
- (BOOL)_shouldTintTrack;
- (BOOL)_shouldTintProgress;
- (struct UIEdgeInsets)alignmentRectInsets;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProgressViewStyle:(int)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setBarStyle:(int)arg1;
- (int)barStyle;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;

@end
