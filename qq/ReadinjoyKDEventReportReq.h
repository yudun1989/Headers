//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface ReadinjoyKDEventReportReq : NSObject
{
    unsigned int _eventId;
    NSString *_eventName;
    NSMutableArray *_attList;
}

@property(readonly, nonatomic) NSMutableArray *attList; // @synthesize attList=_attList;
@property(copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(nonatomic) unsigned int eventId; // @synthesize eventId=_eventId;
- (id)description;
- (void)dealloc;
- (id)init;

@end
