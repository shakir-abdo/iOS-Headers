/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iCalendar/ICSComponent.h>

@class ICSDate, NSArray;

@interface ICSTimeZoneBlock : ICSComponent
{
}

@property long long tzoffsetto;
@property long long tzoffsetfrom;
@property NSArray *tzname;
@property(retain) NSArray *rrule;
@property(retain) NSArray *rdate;
@property(retain) ICSDate *dtstart;
- (_Bool)validate:(id *)arg1;

@end

