//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/NSCoding-Protocol.h>
#import <QQMainProject/NSCopying-Protocol.h>

@interface QQTorchRelayData : NSObject <NSCoding, NSCopying>
{
    _Bool _isTorchBearer;
    unsigned int _displayedRelayCount;
    unsigned int _currentRelayCount;
    unsigned int _displayedCity;
    unsigned int _currentCity;
    unsigned long long _torchBearerId;
}

@property(nonatomic) unsigned int currentCity; // @synthesize currentCity=_currentCity;
@property(nonatomic) unsigned int displayedCity; // @synthesize displayedCity=_displayedCity;
@property(nonatomic) unsigned int currentRelayCount; // @synthesize currentRelayCount=_currentRelayCount;
@property(nonatomic) unsigned int displayedRelayCount; // @synthesize displayedRelayCount=_displayedRelayCount;
@property(nonatomic) unsigned long long torchBearerId; // @synthesize torchBearerId=_torchBearerId;
@property(nonatomic) _Bool isTorchBearer; // @synthesize isTorchBearer=_isTorchBearer;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

