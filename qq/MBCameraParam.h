//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSString;

@interface MBCameraParam : QQModel
{
    _Bool _supportVideo;
    _Bool _supportPhoto;
    _Bool _supportPendant;
    _Bool _supportFilter;
    _Bool _unflodPendant;
    _Bool _unflodFilter;
    unsigned long long _cameraMode;
    NSString *_pendantCategory;
    NSString *_pendantId;
    NSString *_filterCategory;
    NSString *_filterId;
}

@property(retain, nonatomic) NSString *filterId; // @synthesize filterId=_filterId;
@property(retain, nonatomic) NSString *filterCategory; // @synthesize filterCategory=_filterCategory;
@property(nonatomic) _Bool unflodFilter; // @synthesize unflodFilter=_unflodFilter;
@property(retain, nonatomic) NSString *pendantId; // @synthesize pendantId=_pendantId;
@property(retain, nonatomic) NSString *pendantCategory; // @synthesize pendantCategory=_pendantCategory;
@property(nonatomic) _Bool unflodPendant; // @synthesize unflodPendant=_unflodPendant;
@property(nonatomic) _Bool supportFilter; // @synthesize supportFilter=_supportFilter;
@property(nonatomic) _Bool supportPendant; // @synthesize supportPendant=_supportPendant;
@property(nonatomic) unsigned long long cameraMode; // @synthesize cameraMode=_cameraMode;
@property(nonatomic) _Bool supportPhoto; // @synthesize supportPhoto=_supportPhoto;
@property(nonatomic) _Bool supportVideo; // @synthesize supportVideo=_supportVideo;
- (void).cxx_destruct;
- (id)initWithDic:(id)arg1;

@end

