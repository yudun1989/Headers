//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, TACTrackConfig;

@interface TACFetchResponse : NSObject
{
    _Bool _success;
    _Bool _mdapControlConfig;
    NSString *_code;
    NSString *_memo;
    TACTrackConfig *_eventConfig;
}

@property(retain, nonatomic) TACTrackConfig *eventConfig; // @synthesize eventConfig=_eventConfig;
@property(nonatomic) _Bool mdapControlConfig; // @synthesize mdapControlConfig=_mdapControlConfig;
@property(retain, nonatomic) NSString *memo; // @synthesize memo=_memo;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;
- (id)description;

@end

