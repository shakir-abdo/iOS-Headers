//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OADPathElement.h>

__attribute__((visibility("hidden")))
@interface OADQuadBezierToPathElement : OADPathElement
{
    struct OADAdjustPoint mControlPoint;
    struct OADAdjustPoint mToPoint;
}

- (id).cxx_construct;
- (struct OADAdjustPoint)toPoint;
- (struct OADAdjustPoint)controlPoint;
- (id)initWithControlPoint:(struct OADAdjustPoint)arg1 toPoint:(struct OADAdjustPoint)arg2;

@end

