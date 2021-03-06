//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AVRecorder : NSObject
{
    struct AVRecorderPrivate *_priv;
}

- (void)makeError:(id *)arg1 withDescription:(id)arg2 code:(long)arg3;
- (BOOL)audioCurrentAverageDecibelLevels:(float *)arg1 andPeakDecibelLevels:(float *)arg2;
- (BOOL)audioCurrentAverageVolumeLevels:(float *)arg1 andPeakVolumeLevels:(float *)arg2;
- (unsigned int)audioNumDeviceChannels;
- (double)recordedDuration;
- (long long)recordedFileSizeInBytes;
- (void)setMicVolume:(float)arg1;
- (float)micVolume;
- (void)deactivate;
- (BOOL)autoFocusAtPoint:(struct CGPoint)arg1;
- (BOOL)takePhoto;
- (BOOL)isActive;
- (BOOL)isRecording;
- (void)stop;
- (BOOL)start;
- (BOOL)activate:(id *)arg1;
- (void)implNotification:(id)arg1;
- (id)attributeForKey:(id)arg1;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (void)dealloc;
- (id)init;

@end

