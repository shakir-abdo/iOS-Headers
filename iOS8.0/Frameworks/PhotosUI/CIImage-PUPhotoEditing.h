//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CIImage.h"

@interface CIImage (PUPhotoEditing)
+ (float)pu_angleFromOrientation:(int)arg1;
+ (int)pu_orientationFromAngle:(float)arg1;
- (id)pu_loadAdjustments:(id)arg1 orientation:(int)arg2;
- (BOOL)pu_getSuggestionForCropRect:(struct CGRect *)arg1 straightenAngle:(float *)arg2 orientation:(int)arg3;
@end

