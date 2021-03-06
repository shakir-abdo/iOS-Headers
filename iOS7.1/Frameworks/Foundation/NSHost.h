//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, __NSHostExtraIvars;

@interface NSHost : NSObject
{
    NSArray *names;
    NSArray *addresses;
    id reserved;
}

+ (void)flushHostCache;
+ (void)setHostCacheEnabled:(BOOL)arg1;
+ (BOOL)isHostCacheEnabled;
+ (id)hostWithAddress:(id)arg1;
+ (id)hostWithName:(id)arg1;
+ (id)currentHost;
@property(nonatomic) __NSHostExtraIvars *reserved; // @synthesize reserved;
- (void)dealloc;
- (id)description;
- (id)localizedName;
- (id)addresses;
- (id)address;
- (id)names;
- (id)name;
- (BOOL)isEqualToHost:(id)arg1;
- (void)resolveCurrentHostWithHandler:(CDUnknownBlockType)arg1;
- (void)__resolveWithFlags:(int)arg1 resultArray:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)blockingResolveUntil:(int)arg1;
- (void)resolve:(CDUnknownBlockType)arg1;
- (id)_thingToResolve;
- (id)initToResolve:(id)arg1 as:(int)arg2;

@end

