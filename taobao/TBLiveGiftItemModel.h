//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBLiveGiftItemModel : TBJSONModel
{
    NSString *_picUrl;
    NSString *_price;
    NSString *_taskId;
    NSString *_displayName;
    NSString *_name;
    NSString *_animationImg;
    NSString *_giftType;
    NSString *_action;
    NSString *_animationType;
    NSString *_displayTime;
    NSString *_gapTime;
    NSString *_filePath;
    NSString *_activityType;
}

@property(copy, nonatomic) NSString *activityType; // @synthesize activityType=_activityType;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(copy, nonatomic) NSString *gapTime; // @synthesize gapTime=_gapTime;
@property(copy, nonatomic) NSString *displayTime; // @synthesize displayTime=_displayTime;
@property(copy, nonatomic) NSString *animationType; // @synthesize animationType=_animationType;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *giftType; // @synthesize giftType=_giftType;
@property(copy, nonatomic) NSString *animationImg; // @synthesize animationImg=_animationImg;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
- (void).cxx_destruct;

@end

