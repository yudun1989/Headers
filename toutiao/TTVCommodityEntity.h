//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TTVCommodityEntity : NSObject
{
    _Bool _isShowed;
    _Bool _isDismissed;
    float _price;
    float _coupon_num;
    NSString *_image_url;
    NSString *_source;
    unsigned long long _source_type;
    NSString *_charge_url;
    NSString *_commodity_id;
    NSString *_title;
    long long _insert_time;
    long long _display_duration;
    long long _coupon_type;
}

+ (id)entityWithDictionary:(id)arg1;
@property(nonatomic) float coupon_num; // @synthesize coupon_num=_coupon_num;
@property(nonatomic) long long coupon_type; // @synthesize coupon_type=_coupon_type;
@property(nonatomic) _Bool isDismissed; // @synthesize isDismissed=_isDismissed;
@property(nonatomic) _Bool isShowed; // @synthesize isShowed=_isShowed;
@property(nonatomic) long long display_duration; // @synthesize display_duration=_display_duration;
@property(nonatomic) float price; // @synthesize price=_price;
@property(nonatomic) long long insert_time; // @synthesize insert_time=_insert_time;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *commodity_id; // @synthesize commodity_id=_commodity_id;
@property(copy, nonatomic) NSString *charge_url; // @synthesize charge_url=_charge_url;
@property(nonatomic) unsigned long long source_type; // @synthesize source_type=_source_type;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *image_url; // @synthesize image_url=_image_url;
- (void).cxx_destruct;

@end

