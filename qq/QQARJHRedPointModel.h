//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

#import <QQMainProject/NSCopying-Protocol.h>

@interface QQARJHRedPointModel : QQModel <NSCopying>
{
    _Bool _isShow;
    unsigned long long _actId;
    unsigned long long _clickTime;
}

@property(nonatomic) unsigned long long clickTime; // @synthesize clickTime=_clickTime;
@property(nonatomic) unsigned long long actId; // @synthesize actId=_actId;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

