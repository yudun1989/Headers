//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface NWQualityModule : NSObject
{
    float _wjas_t1;
    float _wjas_t2;
    float _wjas_rtt1;
    float _wjas_rtt2;
    float _wjas_limited;
    float _cdn_t1;
    float _cdn_t2;
    float _cdn_rtt1;
    float _cdn_rtt2;
    float _cdn_limited;
    int _runtimeSec;
    NSString *_wjas_url;
    NSString *_cdn_url;
    double _timestemp;
}

@property double timestemp; // @synthesize timestemp=_timestemp;
@property int runtimeSec; // @synthesize runtimeSec=_runtimeSec;
@property(nonatomic) float cdn_limited; // @synthesize cdn_limited=_cdn_limited;
@property(retain, nonatomic) NSString *cdn_url; // @synthesize cdn_url=_cdn_url;
@property float cdn_rtt2; // @synthesize cdn_rtt2=_cdn_rtt2;
@property float cdn_rtt1; // @synthesize cdn_rtt1=_cdn_rtt1;
@property float cdn_t2; // @synthesize cdn_t2=_cdn_t2;
@property float cdn_t1; // @synthesize cdn_t1=_cdn_t1;
@property(nonatomic) float wjas_limited; // @synthesize wjas_limited=_wjas_limited;
@property(retain, nonatomic) NSString *wjas_url; // @synthesize wjas_url=_wjas_url;
@property float wjas_rtt2; // @synthesize wjas_rtt2=_wjas_rtt2;
@property float wjas_rtt1; // @synthesize wjas_rtt1=_wjas_rtt1;
@property float wjas_t2; // @synthesize wjas_t2=_wjas_t2;
@property float wjas_t1; // @synthesize wjas_t1=_wjas_t1;
- (void).cxx_destruct;
- (int)cdnQualityStatusModule;
- (int)wjasQualityStatusModule;
- (id)init;

@end

