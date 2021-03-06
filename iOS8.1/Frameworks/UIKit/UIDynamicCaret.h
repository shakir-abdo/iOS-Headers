//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import "UIKeyboardCandidateList.h"
#import "_UIDynamicCaretDocumentContentDelegate.h"

@class NSString, TIKeyboardCandidateResultSet, _UIDynamicCaretAlternatives, _UIDynamicCaretHelpLabel, _UIDynamicCaretInput, _UIDynamicCaretNoContentView;

__attribute__((visibility("hidden")))
@interface UIDynamicCaret : UIImageView <UIKeyboardCandidateList, _UIDynamicCaretDocumentContentDelegate>
{
    id <UIKeyboardCandidateListDelegate> _candidateListDelegate;
    int _selectedIndex;
    BOOL _justDeleted;
    _UIDynamicCaretInput *_inputView;
    _UIDynamicCaretAlternatives *_alternativesView;
    _UIDynamicCaretNoContentView *_noContentView;
    _UIDynamicCaretHelpLabel *_helpLabel;
    TIKeyboardCandidateResultSet *_candidateSet;
}

@property(retain, nonatomic) TIKeyboardCandidateResultSet *candidateSet; // @synthesize candidateSet=_candidateSet;
@property(retain, nonatomic) _UIDynamicCaretHelpLabel *helpLabel; // @synthesize helpLabel=_helpLabel;
@property(retain, nonatomic) _UIDynamicCaretNoContentView *noContentView; // @synthesize noContentView=_noContentView;
@property(retain, nonatomic) _UIDynamicCaretAlternatives *alternativesView; // @synthesize alternativesView=_alternativesView;
@property(retain, nonatomic) _UIDynamicCaretInput *inputView; // @synthesize inputView=_inputView;
- (unsigned int)selectedSortIndex;
- (id)statisticsIdentifier;
- (id)keyboardBehaviors;
- (unsigned int)currentIndex;
- (id)currentCandidate;
- (void)candidateAcceptedAtIndex:(unsigned int)arg1;
- (void)showPreviousRow;
- (void)showNextRow;
- (void)showPreviousPage;
- (void)showNextPage;
- (void)showPreviousCandidate;
- (void)showNextCandidate;
- (BOOL)showCandidate:(id)arg1;
- (void)showCandidateAtIndex:(unsigned int)arg1;
- (BOOL)isHiddenCandidatesList;
- (BOOL)isExtendedList;
- (BOOL)hasCandidates;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect)arg3 maxX:(float)arg4 layout:(BOOL)arg5;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)alternativeTappedAtIndex:(int)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setDocumentHasContent:(BOOL)arg1;
@property(nonatomic) BOOL isActive;
- (void)didMoveToSuperview;
- (id)backgroundImage;
- (void)displayAlternatives:(BOOL)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

