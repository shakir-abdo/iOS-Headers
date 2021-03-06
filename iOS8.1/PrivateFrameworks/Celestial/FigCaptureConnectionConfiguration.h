//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FigXPCCoding.h"
#import "NSCopying.h"

@class FigCaptureSinkConfiguration, FigCaptureSourceConfiguration, NSString;

@interface FigCaptureConnectionConfiguration : NSObject <FigXPCCoding, NSCopying>
{
    NSString *_connectionID;
    unsigned long _mediaType;
    FigCaptureSourceConfiguration *_sourceConfiguration;
    FigCaptureSinkConfiguration *_sinkConfiguration;
    BOOL _enabled;
}

+ (void)initialize;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) FigCaptureSinkConfiguration *sinkConfiguration; // @synthesize sinkConfiguration=_sinkConfiguration;
@property(retain, nonatomic) FigCaptureSourceConfiguration *sourceConfiguration; // @synthesize sourceConfiguration=_sourceConfiguration;
@property(nonatomic) unsigned long mediaType; // @synthesize mediaType=_mediaType;
@property(copy, nonatomic) NSString *connectionID; // @synthesize connectionID=_connectionID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

