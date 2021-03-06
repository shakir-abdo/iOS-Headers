/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

@interface SCROBrailleDisplayAutoDetector : NSObject
{
    _Bool _isDetectingDisplays;
    struct IONotificationPort *_notificationPort;
    NSMutableDictionary *_iteratorDict;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
+ (id)sharedDetector;
- (void)stopDetectingDisplays;
- (void)detectDisplays;
- (_Bool)isAutoDetectEnabled;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

