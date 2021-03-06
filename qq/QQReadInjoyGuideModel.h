//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSString, QQRIJSkinModel;

@interface QQReadInjoyGuideModel : QQModel
{
    _Bool _downLoaded;
    _Bool _played;
    unsigned int _beginTimestamp;
    unsigned int _endTimestamp;
    unsigned int _playTimestamp;
    NSString *_guideId;
    NSString *_guideName;
    unsigned long long _seq;
    NSString *_url;
    QQRIJSkinModel *_skinModel;
}

@property(nonatomic) _Bool played; // @synthesize played=_played;
@property(nonatomic) _Bool downLoaded; // @synthesize downLoaded=_downLoaded;
@property(nonatomic) unsigned int playTimestamp; // @synthesize playTimestamp=_playTimestamp;
@property(retain, nonatomic) QQRIJSkinModel *skinModel; // @synthesize skinModel=_skinModel;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) unsigned long long seq; // @synthesize seq=_seq;
@property(nonatomic) unsigned int endTimestamp; // @synthesize endTimestamp=_endTimestamp;
@property(nonatomic) unsigned int beginTimestamp; // @synthesize beginTimestamp=_beginTimestamp;
@property(retain, nonatomic) NSString *guideName; // @synthesize guideName=_guideName;
@property(retain, nonatomic) NSString *guideId; // @synthesize guideId=_guideId;

@end

