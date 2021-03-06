/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIButton.h>

@interface UIButton (UIButtonPrivate)
- (id)image;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)_titleView;
- (id)_imageView;
- (id)_backgroundView;
- (void)_setTitleShadowOffset:(struct CGSize)arg1;
- (struct CGSize)_titleShadowOffset;
- (void)_setLineBreakMode:(int)arg1;
- (int)_lineBreakMode;
- (void)_setFont:(id)arg1;
- (id)_font;
- (void)crossfadeAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)crossfadeToImage:(id)arg1 forState:(unsigned int)arg2;
- (void)setBackgroundImage:(id)arg1 forStates:(unsigned int)arg2;
- (void)setImage:(id)arg1 forStates:(unsigned int)arg2;
- (void)setTitleShadowColor:(id)arg1 forStates:(unsigned int)arg2;
- (void)setTitleColor:(id)arg1 forStates:(unsigned int)arg2;
- (void)setTitle:(id)arg1 forStates:(unsigned int)arg2;
- (struct CGPoint)pressFeedbackPosition;
- (void)setShowPressFeedback:(BOOL)arg1;
- (void)setDisabledDimsImage:(BOOL)arg1;
- (BOOL)autosizesToFit;
- (void)setAutosizesToFit:(BOOL)arg1;
- (void)_setShouldHandleScrollerMouseEvent:(BOOL)arg1;
- (BOOL)_alwaysHandleScrollerMouseEvent;
@end

