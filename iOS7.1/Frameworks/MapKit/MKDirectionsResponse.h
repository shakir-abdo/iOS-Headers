//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEODirectionsResponse, GEORoute, MKMapItem, NSArray, NSString, NSURL;

@interface MKDirectionsResponse : NSObject
{
    GEODirectionsResponse *_geoResponse;
    MKMapItem *_source;
    MKMapItem *_destination;
    NSArray *_routes;
    struct CGImage *_routeImage;
    struct CGImage *_incidentImage;
}

+ (id)_responseWithGEOResponse:(id)arg1 request:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) NSArray *routes; // @synthesize routes=_routes;
@property(readonly, nonatomic) MKMapItem *destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) MKMapItem *source; // @synthesize source=_source;
- (void).cxx_destruct;
@property(readonly, nonatomic) GEODirectionsResponse *_geoResponse;
@property(readonly, nonatomic) NSURL *_mapsURL;
@property(readonly, nonatomic) NSString *_incidentDescription;
@property(readonly, nonatomic) struct CGImage *_incidentImage;
- (struct CGImage *)_routeImage;
@property(readonly, nonatomic) GEORoute *_route;
@property(readonly, nonatomic) double _typicalTrafficRatio;
- (id)_completeRoutesFrom:(id)arg1;
- (id)_stitchRoute:(id)arg1 routesDict:(id)arg2;
- (id)_initWithGEOResponse:(id)arg1 request:(id)arg2;
- (void)dealloc;

@end

