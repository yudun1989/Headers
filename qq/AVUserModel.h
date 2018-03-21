//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/NSCopying-Protocol.h>
#import <QQMainProject/NSMutableCopying-Protocol.h>

@interface AVUserModel : NSObject <NSCopying, NSMutableCopying>
{
    unsigned long long _uin;
    int _accountType;
    int _PSTNState;
    int _xo;
}

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAccount:(unsigned long long)arg1 accountType:(int)arg2 PSTNState:(int)arg3;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(nonatomic) int PSTNState; // @dynamic PSTNState;
@property(nonatomic) int accountType; // @dynamic accountType;
@property(nonatomic) unsigned long long uin; // @dynamic uin;

@end

