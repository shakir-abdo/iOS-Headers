//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSWPStyleBaseCommand.h>

@class TSSStyle<TSSPreset>;

__attribute__((visibility("hidden")))
@interface TSWPStyleUpdateCommand : TSWPStyleBaseCommand
{
    TSSStyle<TSSPreset> *_originalStyle;
    TSSStyle<TSSPreset> *_updatedStyle;
}

@property(retain, nonatomic) TSSStyle<TSSPreset> *updatedStyle; // @synthesize updatedStyle=_updatedStyle;
@property(readonly, nonatomic) TSSStyle<TSSPreset> *originalStyle; // @synthesize originalStyle=_originalStyle;
- (void)redo;
- (void)undo;
- (void)commit;
- (void)p_invalidateStorages;
- (void)p_CommitAndRedo;
- (id)initFromUnarchiver:(id)arg1;
- (void)loadFromMessage:(const struct StyleUpdateCommandArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)saveToMessage:(struct StyleUpdateCommandArchive *)arg1 archiver:(id)arg2;
- (id)actionString;
- (void)dealloc;
- (id)initWithTheme:(id)arg1 style:(id)arg2 updatedStyle:(id)arg3;

@end

