//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/SAMRequestItem.h>

@interface PersonalZanRequestItem : SAMRequestItem
{
    unsigned long long _uin;
    unsigned long long _tagID;
    int _count;
}

- (id)notifyRespBuffer:(const char *)arg1 len:(int)arg2 seq:(int)arg3;
- (char *)getRequestBuffer;
- (id)serviceCmd;
- (id)initWithUIN:(unsigned long long)arg1 tagID:(unsigned long long)arg2 count:(int)arg3;

@end

