//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface ColorfulFloatingScreenModel : NSObject
{
    long long _resId;
    long long _status;
    long long _progress;
    NSDictionary *_config;
    _Bool _resNeedsReload;
}

@property(nonatomic) _Bool resNeedsReload; // @synthesize resNeedsReload=_resNeedsReload;
@property(retain, nonatomic) NSDictionary *config; // @synthesize config=_config;
@property(nonatomic) long long progress; // @synthesize progress=_progress;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long resId; // @synthesize resId=_resId;
- (void)dealloc;
- (id)init;

@end

