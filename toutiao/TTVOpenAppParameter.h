//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, TTADEventTrackerEntity;

@interface TTVOpenAppParameter : NSObject
{
    NSString *_openURL;
    NSString *_appURL;
    NSString *_tabURL;
    NSString *_adID;
    NSString *_logExtra;
    NSString *_ipaURL;
    NSString *_alertText;
    NSString *_source;
    NSString *_displayInfo;
    NSString *_downloadURL;
    NSString *_appleid;
    TTADEventTrackerEntity *_trackerEntity;
}

+ (id)parameterWithFeedItem:(id)arg1;
@property(retain, nonatomic) TTADEventTrackerEntity *trackerEntity; // @synthesize trackerEntity=_trackerEntity;
@property(copy, nonatomic) NSString *appleid; // @synthesize appleid=_appleid;
@property(copy, nonatomic) NSString *downloadURL; // @synthesize downloadURL=_downloadURL;
@property(copy, nonatomic) NSString *displayInfo; // @synthesize displayInfo=_displayInfo;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *alertText; // @synthesize alertText=_alertText;
@property(copy, nonatomic) NSString *ipaURL; // @synthesize ipaURL=_ipaURL;
@property(copy, nonatomic) NSString *logExtra; // @synthesize logExtra=_logExtra;
@property(copy, nonatomic) NSString *adID; // @synthesize adID=_adID;
@property(copy, nonatomic) NSString *tabURL; // @synthesize tabURL=_tabURL;
@property(copy, nonatomic) NSString *appURL; // @synthesize appURL=_appURL;
@property(copy, nonatomic) NSString *openURL; // @synthesize openURL=_openURL;
- (void).cxx_destruct;
- (_Bool)isInstalledApp;

@end
