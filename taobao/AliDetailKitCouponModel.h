//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class AliDetailCouponStylesModel, NSArray, NSNumber, NSString;

@interface AliDetailKitCouponModel : TBJSONModel
{
    NSString *_uuid;
    NSNumber *_displayType;
    NSString *_mtopKey;
    NSString *_leftIcon;
    NSString *_title;
    NSString *_titleLeftText;
    NSString *_promotionUrl;
    NSArray *_promotionList;
    NSArray *_subtitles;
    NSString *_applyText;
    NSNumber *_pointConsume;
    NSString *_countText;
    NSNumber *_count;
    NSString *_bottomTitle;
    NSString *_bottomButtonText;
    NSString *_bottomButtonJumpUrl;
    NSNumber *_enabled;
    AliDetailCouponStylesModel *_styles;
}

@property(retain, nonatomic) AliDetailCouponStylesModel *styles; // @synthesize styles=_styles;
@property(retain, nonatomic) NSNumber *enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) NSString *bottomButtonJumpUrl; // @synthesize bottomButtonJumpUrl=_bottomButtonJumpUrl;
@property(copy, nonatomic) NSString *bottomButtonText; // @synthesize bottomButtonText=_bottomButtonText;
@property(copy, nonatomic) NSString *bottomTitle; // @synthesize bottomTitle=_bottomTitle;
@property(retain, nonatomic) NSNumber *count; // @synthesize count=_count;
@property(copy, nonatomic) NSString *countText; // @synthesize countText=_countText;
@property(retain, nonatomic) NSNumber *pointConsume; // @synthesize pointConsume=_pointConsume;
@property(copy, nonatomic) NSString *applyText; // @synthesize applyText=_applyText;
@property(retain, nonatomic) NSArray *subtitles; // @synthesize subtitles=_subtitles;
@property(retain, nonatomic) NSArray *promotionList; // @synthesize promotionList=_promotionList;
@property(copy, nonatomic) NSString *promotionUrl; // @synthesize promotionUrl=_promotionUrl;
@property(copy, nonatomic) NSString *titleLeftText; // @synthesize titleLeftText=_titleLeftText;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *leftIcon; // @synthesize leftIcon=_leftIcon;
@property(copy, nonatomic) NSString *mtopKey; // @synthesize mtopKey=_mtopKey;
@property(copy, nonatomic) NSNumber *displayType; // @synthesize displayType=_displayType;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;

@end

