//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UTMCConfEntity.h"

@class NSString;

@interface UTMCEventIdSampling : UTMCConfEntity
{
    int _cp;
    NSString *_eventid;
    NSString *_arg1;
}

@property int cp; // @synthesize cp=_cp;
@property(retain) NSString *arg1; // @synthesize arg1=_arg1;
@property(retain) NSString *eventid; // @synthesize eventid=_eventid;
- (void).cxx_destruct;
- (id)getSecondKey;
- (id)getMainKey;
- (int)isSampleSuccess;
- (void)setConfigItem:(id)arg1;
- (void)storeConfig:(id)arg1;
- (id)init;

@end

