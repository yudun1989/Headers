//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MGIDCard : NSObject
{
    struct _MG_IDC_API *_apiHandle;
    struct _MG_IDC_IMAGE *_imageHandle;
    float _flareNum;
    _Bool _flareType;
    float _isCard;
    float _inBound;
    float _clear;
    float _shadow_area_th;
    float _facula_area_th;
    float _card_area_th;
    int _orientation;
    CDStruct_51449276 _detectROI;
}

+ (_Bool)needNetLicense;
+ (id)getVersion;
+ (unsigned long long)getAPIName;
+ (id)getApiExpiration;
@property(nonatomic) _Bool flareType; // @synthesize flareType=_flareType;
@property(nonatomic) CDStruct_51449276 detectROI; // @synthesize detectROI=_detectROI;
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
@property(nonatomic) float card_area_th; // @synthesize card_area_th=_card_area_th;
@property(nonatomic) float facula_area_th; // @synthesize facula_area_th=_facula_area_th;
@property(nonatomic) float shadow_area_th; // @synthesize shadow_area_th=_shadow_area_th;
@property(nonatomic) float clear; // @synthesize clear=_clear;
@property(nonatomic) float inBound; // @synthesize inBound=_inBound;
@property(nonatomic) float isCard; // @synthesize isCard=_isCard;
- (void)stopDetect;
- (id)detectWithTempRawData:(CDStruct_da23731b)arg1;
- (id)detectWithImage:(id)arg1;
- (id)detectWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)setDetectConfig:(CDStruct_31865034)arg1;
- (CDStruct_31865034)getDetectConfig;
- (id)initWithModel:(id)arg1;
- (id)init;
- (void)dealloc;

@end

