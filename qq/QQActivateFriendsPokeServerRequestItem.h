//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQActivateFriendsRequestItem.h>

@class NSMutableArray;

@interface QQActivateFriendsPokeServerRequestItem : QQActivateFriendsRequestItem
{
    _Bool _hasData;
    _Bool _isSwitch;
    unsigned long long _nextPokeServerTimeGap;
    NSMutableArray *_typeList;
    NSMutableArray *_helloContentList;
}

@property(copy, nonatomic) NSMutableArray *helloContentList; // @synthesize helloContentList=_helloContentList;
@property(copy, nonatomic) NSMutableArray *typeList; // @synthesize typeList=_typeList;
@property(nonatomic) _Bool isSwitch; // @synthesize isSwitch=_isSwitch;
@property(nonatomic) _Bool hasData; // @synthesize hasData=_hasData;
@property(nonatomic) unsigned long long nextPokeServerTimeGap; // @synthesize nextPokeServerTimeGap=_nextPokeServerTimeGap;
- (void).cxx_destruct;
- (id)notifyRespBuffer:(const char *)arg1 len:(int)arg2 seq:(int)arg3;
- (char *)getRequestBuffer;
- (id)serviceCmd;
- (id)init;

@end

