//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SBItemInfoLayoutCache : NSObject
{
    double _cachedViewHeight;
    struct CGSize _referenceSize;
    long long _layoutMode;
}

- (void)invalidateCache;
- (double)viewHeightWithReferenceSize:(struct CGSize)arg1 layoutMode:(long long)arg2 generateBlock:(CDUnknownBlockType)arg3;
- (_Bool)_isLayoutValidWithReferenceSize:(struct CGSize)arg1 layoutMode:(long long)arg2;

@end

