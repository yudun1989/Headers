//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSString;

@interface QQSignInModel : QQModel
{
    _Bool _showRedPoint;
    _Bool _showEntrance;
    _Bool _needUpdate;
    _Bool _showConfigIcon;
    _Bool _shouldCloseEntrance;
    unsigned int _type;
    unsigned int _signInDays;
    unsigned int _lastSignInTime;
    NSString *_url;
    NSString *_signInWord;
    unsigned long long _nextRequestTime;
    unsigned long long _lastRequestDate;
    unsigned long long _redPointTime;
    NSString *_iconUrl;
    unsigned long long _reportTime;
    long long _nextCanReqestTime;
    long long _requestTime;
}

@property(nonatomic) long long requestTime; // @synthesize requestTime=_requestTime;
@property(nonatomic) long long nextCanReqestTime; // @synthesize nextCanReqestTime=_nextCanReqestTime;
@property(nonatomic) _Bool shouldCloseEntrance; // @synthesize shouldCloseEntrance=_shouldCloseEntrance;
@property(nonatomic) unsigned long long reportTime; // @synthesize reportTime=_reportTime;
@property(nonatomic) _Bool showConfigIcon; // @synthesize showConfigIcon=_showConfigIcon;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(nonatomic) unsigned long long redPointTime; // @synthesize redPointTime=_redPointTime;
@property(nonatomic) unsigned long long lastRequestDate; // @synthesize lastRequestDate=_lastRequestDate;
@property(nonatomic) _Bool needUpdate; // @synthesize needUpdate=_needUpdate;
@property(nonatomic) unsigned long long nextRequestTime; // @synthesize nextRequestTime=_nextRequestTime;
@property(nonatomic) _Bool showEntrance; // @synthesize showEntrance=_showEntrance;
@property(nonatomic) unsigned int lastSignInTime; // @synthesize lastSignInTime=_lastSignInTime;
@property(nonatomic) unsigned int signInDays; // @synthesize signInDays=_signInDays;
@property(copy, nonatomic) NSString *signInWord; // @synthesize signInWord=_signInWord;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) _Bool showRedPoint; // @synthesize showRedPoint=_showRedPoint;

@end

