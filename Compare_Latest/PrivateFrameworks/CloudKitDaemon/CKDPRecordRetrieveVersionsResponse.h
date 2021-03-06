//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPRecordRetrieveVersionsResponse : PBCodable <NSCopying>
{
    NSMutableArray *_recordVersions;
    BOOL _isDeleted;
    struct {
        unsigned int isDeleted:1;
    } _has;
}

@property(retain, nonatomic) NSMutableArray *recordVersions; // @synthesize recordVersions=_recordVersions;
@property(nonatomic) BOOL isDeleted; // @synthesize isDeleted=_isDeleted;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)recordVersionsAtIndex:(unsigned int)arg1;
- (unsigned int)recordVersionsCount;
- (void)addRecordVersions:(id)arg1;
- (void)clearRecordVersions;
@property(nonatomic) BOOL hasIsDeleted;

@end

